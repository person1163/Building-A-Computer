#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <vector>
#include <deque>
#include <algorithm>
#include "sim_proc.h"

/*  argc holds the number of command line arguments
    argv[] holds the commands themselves

    Example:-
    sim 256 32 4 gcc_trace.txt
    argc = 5
    argv[0] = "sim"
    argv[1] = "256"
    argv[2] = "32"
    ... and so on
*/

unsigned int architectural_regs[67];
unsigned int WIDTH;
unsigned int IQ_SIZE;
unsigned int ROB_SIZE;
unsigned int SEQUENCE;
unsigned int CYCLES;
unsigned int DIC;
bool fd;

int rob_head, rob_tail, rob_count;

struct i_timer{
    int start_time, duration;
};

struct pl_entry{
    int op_type, dest, src1, src2;
    uint64_t pc;
    bool ready;
    bool source_op_ready;
    unsigned int cycles_remaining;
    unsigned int sequence_number;
    int dst_tag, rs1_tag, rs2_tag;
    bool rs1_rdy, rs2_rdy;
    i_timer FE, DE, RN, RR, DI, IS, EX, WB, RT;
};

struct iq_entry{
    bool v;
    pl_entry* instruction;
};

struct rob_entry{
    bool rdy, exc, mis;
    int dst, pc;
    pl_entry* instruction_ptr;
};

struct rmt_entry{
    bool v;
    int ROB_tag;
};




std::vector<pl_entry*> DE; // needs to be pointers not the object itself
std::vector<pl_entry*> RN;
std::vector<pl_entry*> RR;
std::vector<pl_entry*> DI;
std::vector<iq_entry> IQ;
std::vector<pl_entry*> execute_list;
std::vector<pl_entry*> WB;
std::vector<rmt_entry> RMT;
std::vector<rob_entry> ROB;
std::vector<pl_entry*> ptr_list;


void set_sim_values(unsigned int robs, unsigned int iqs, unsigned int w){
    ROB_SIZE    = robs;
    IQ_SIZE     = iqs;
    WIDTH       = w;
    SEQUENCE    = 0;
    CYCLES      = 0;
    DIC         = 0;
    fd          = 0;
    rob_head    = 0;
    rob_tail    = 0;
    rob_count   = 0;

    DE.clear();
    RN.clear();
    RR.clear();
    DI.clear();
    IQ.assign(IQ_SIZE, {0, NULL});
    execute_list.clear();
    WB.clear();
    ROB.resize(ROB_SIZE);
    RMT.assign(67, {0, -1});
};

int rob_allocate(rob_entry& entry){
    int robtag;
    if(rob_count == ROB_SIZE) return -1;
    ROB[rob_tail] = entry;
    robtag = rob_tail;
    rob_tail = (rob_tail + 1) % ROB_SIZE;
    rob_count++;
    return robtag;
};

void rob_deallocate(){
    if(rob_count == 0) return;
    rob_head = (rob_head + 1) % ROB_SIZE;
    rob_count --;
    DIC++;
}

void fetch_time(i_timer &function){
    function.start_time = CYCLES;
};

void start_time(i_timer &function){
    function.start_time = CYCLES+1;
};

void duration(i_timer &function){
    function.duration = CYCLES - function.start_time + 1;
};



bool Advance_Cycle(){
    CYCLES++;
    if(fd &&
    DE.empty() &&
    RN.empty() &&
    RR.empty() &&
    DI.empty() &&
    execute_list.empty() &&
    WB.empty() &&
    rob_count == 0){
        return false;
    }
    else return true;
};

void Fetch(FILE *FP){
    if(!DE.empty()) return;  // Do nothing if DE is not empty
    for(int i = 0; i < WIDTH; i++){
        pl_entry* new_instruction = new pl_entry;
        fetch_time(new_instruction->FE);
        if(fscanf(FP, "%lx %d %d %d %d", &new_instruction->pc, &new_instruction->op_type, &new_instruction->dest, &new_instruction->src1, &new_instruction->src2) != 5){ // Check when no more instructions
            delete new_instruction;
            fd = 1;
            break;
        }
        else{
            ptr_list.push_back(new_instruction);
            new_instruction->sequence_number = SEQUENCE;
            SEQUENCE++;
            DE.push_back(new_instruction); // Fetch up to WIDTH instructions in DE
            duration(new_instruction->FE);
            start_time(new_instruction->DE);
        }
    }                                                                                                       
};

void Decode(){
    if(!DE.empty() && RN.empty()){
        RN = DE;
        DE.clear();
        for(pl_entry* temp: RN){
            duration(temp->DE);
            start_time(temp->RN);
        }
    }
};

void Rename(){
    int bundle_size = RN.size();
    rob_entry temp;
    if(!RN.empty()){
        // Process the renaming bundle
        if(RR.empty() && (rob_count + bundle_size <= ROB_SIZE)){   
            // 1: Allocate entry in ROB
            for(int i = 0; i < bundle_size; i++){              
                temp.instruction_ptr = RN[i];
                temp.dst = RN[i]->dest;
                temp.rdy = 0;
                temp.exc = 0;
                temp.mis = 0;
                temp.pc = RN[i]->pc;
                
                int tag = rob_allocate(temp);
                
                // 2: Rename source registers
                if(RN[i]->src1 != -1) RN[i]->rs1_tag = RMT[RN[i]->src1].v ? RMT[RN[i]->src1].ROB_tag : -1; // Based on RMT valid, either ROB tag or ARF(-1)
                if(RN[i]->src2 != -1) RN[i]->rs2_tag = RMT[RN[i]->src2].v ? RMT[RN[i]->src2].ROB_tag : -1;
                if(RN[i]->src1 == -1) RN[i]->rs1_tag = -1;             
                if(RN[i]->src2 == -1) RN[i]->rs2_tag = -1;
                RN[i]->rs1_rdy = (RN[i]->rs1_tag == -1);
                RN[i]->rs2_rdy = (RN[i]->rs2_tag == -1);             

                // 3: Rename destination registers
                RN[i]->dst_tag = tag;
                if(RN[i]->dest != -1){
                    RMT[RN[i]->dest] = {1, RN[i]->dst_tag};
                }
            }
            // Advance RN -> RR
            RR = RN;
            RN.clear();
            for(pl_entry* temp: RR){
                duration(temp->RN);
                start_time(temp->RR);
            }
        }
    }
};

void RegRead(){
    if(!RR.empty() && DI.empty()){
        // Ascertain source register readiness.
        for(int i = 0; i < RR.size(); i++){
            RR[i]->rs1_rdy = (RR[i]->rs1_tag == -1) ? 1 : ROB[RR[i]->rs1_tag].rdy;
            RR[i]->rs2_rdy = (RR[i]->rs2_tag == -1) ? 1 : ROB[RR[i]->rs2_tag].rdy;
        }
        DI = RR;
        RR.clear();
        for(pl_entry* temp: DI){
            duration(temp->RR);
            start_time(temp->DI);
        }
    }
};

void Dispatch(){
    int free_entries = 0;
    int i_count;
    int iq_index;

    // Check for free entries
    for (int i = 0; i < IQ.size(); i++){
        if(!IQ[i].v){
            free_entries++;
        }
    }

    // If free entries are greater than dispatch bundle...
    if(!DI.empty() && free_entries >= DI.size()){
        i_count = 0;
        iq_index = 0;
        while(i_count < DI.size() && iq_index < IQ.size()){
            // Check for all free entries (v=0) and place instruction pointer in each entry
            if(IQ[iq_index].v) iq_index++;
            else{
                IQ[iq_index].instruction = DI[i_count];
                IQ[iq_index].v = 1;
                duration(DI[i_count]->DI);
                start_time(DI[i_count]->IS);
                i_count++;
                iq_index++;
            }
        }
        DI.clear();
    }
};

void Issue(){
    
    unsigned int oldest_seq;
    int oldest_index;
    bool ready2exec;
    
    // Issue up to WIDTH instructions in the queue
    for(int i = 0; i < WIDTH; i++){
        oldest_seq = -1;
        oldest_index = -1;

        // Find oldest instruction and corresponding inddex
        for(int j = 0; j < IQ.size(); j++){
            if (!IQ[j].v || IQ[j].instruction == NULL) continue;
            pl_entry* temp = IQ[j].instruction;
            // Check to see if source regs and entry is valid
            // Need to make sure rs1 was originally ready
            // And turned back to not ready
            if (!temp->rs1_rdy && temp->rs1_tag != -1)
                temp->rs1_rdy = ROB[temp->rs1_tag].rdy;

            if (!temp->rs2_rdy && temp->rs2_tag != -1)
                temp->rs2_rdy = ROB[temp->rs2_tag].rdy;

            bool ready2exec = temp->rs1_rdy && temp->rs2_rdy;
            if(ready2exec && IQ[j].instruction->sequence_number < oldest_seq){
                oldest_seq = IQ[j].instruction->sequence_number;
                oldest_index = j;
            }
        }
        // If oldest index was not found/not enough valid entries, break
        if(oldest_index == -1) break;
        
        // Set entry to invalid, set execute counters in instruction pointer
        IQ[oldest_index].v = 0;
        switch(IQ[oldest_index].instruction->op_type){
            case(0):
                IQ[oldest_index].instruction->cycles_remaining = 1;
                break;
            case(1):
                IQ[oldest_index].instruction->cycles_remaining = 2;
                break;
            case(2):
                IQ[oldest_index].instruction->cycles_remaining = 5;
                break;
        }
        
        // Pass on the execute list
        execute_list.push_back(IQ[oldest_index].instruction);
        duration(IQ[oldest_index].instruction->IS);
        start_time(IQ[oldest_index].instruction->EX);
    }
};

void Execute(){
    
    int i = 0;

    while(i < execute_list.size()){
        execute_list[i]->cycles_remaining--;
        if(execute_list[i]->cycles_remaining == 0){
            
            pl_entry* temp = execute_list[i];
            
            // Erase entry in the execute list
            execute_list.erase(execute_list.begin() + i);
            
            // Add instruction to writeback
            WB.push_back(temp);
            duration(temp->EX);
            start_time(temp->WB);
            
            // Check source operand readiness in IQ
            for(int j = 0; j < IQ.size(); j++){
                if(IQ[j].v){
                    if(IQ[j].instruction->rs1_tag == temp->dst_tag) IQ[j].instruction->rs1_rdy = 1;
                    if(IQ[j].instruction->rs2_tag == temp->dst_tag) IQ[j].instruction->rs2_rdy = 1;
                }
            }

            // Check source operand readiness in DI
            for(int j = 0; j < DI.size(); j++){
                if(DI[j]->rs1_tag == temp->dst_tag) DI[j]->rs1_rdy = 1;
                if(DI[j]->rs2_tag == temp->dst_tag) DI[j]->rs2_rdy = 1;
            }

            // Check source operand readiness in RR
            for(int j = 0; j < RR.size(); j++){
                if(RR[j]->rs1_tag == temp->dst_tag) RR[j]->rs1_rdy = 1;
                if(RR[j]->rs2_tag == temp->dst_tag) RR[j]->rs2_rdy = 1;
            }
        }
        else{
            i++;
        }
    }
};

void Writeback(){
    if(!WB.empty()){
        for(int i = 0; i < WB.size(); i++){
            ROB[WB[i]->dst_tag].rdy = 1;
        }
        for(pl_entry* temp: WB){
            duration(temp->WB);
            start_time(temp->RT);
        } 
        WB.clear();

    }
};

void Retire(){
    for(int i = 0; i < WIDTH; i++){
        if(rob_count == 0 || !ROB[rob_head].rdy) break;
        else{
            
            int retiring_tag = rob_head;
            pl_entry* retiring_ptr = ROB[retiring_tag].instruction_ptr;
            int dest_reg = ROB[retiring_tag].dst;
            duration(retiring_ptr->RT);
            printf("%u fu{%d} src{%d,%d} dst{%d} FE{%d,%d} DE{%d,%d} RN{%d,%d} RR{%d,%d} DI{%d,%d} IS{%d,%d} EX{%d,%d} WB{%d,%d} RT{%d,%d}\n",
                retiring_ptr->sequence_number,
                retiring_ptr->op_type,
                retiring_ptr->src1,
                retiring_ptr->src2,
                retiring_ptr->dest,
                retiring_ptr->FE.start_time, retiring_ptr->FE.duration,
                retiring_ptr->DE.start_time, retiring_ptr->DE.duration,
                retiring_ptr->RN.start_time, retiring_ptr->RN.duration,
                retiring_ptr->RR.start_time, retiring_ptr->RR.duration,
                retiring_ptr->DI.start_time, retiring_ptr->DI.duration,
                retiring_ptr->IS.start_time, retiring_ptr->IS.duration,
                retiring_ptr->EX.start_time, retiring_ptr->EX.duration,
                retiring_ptr->WB.start_time, retiring_ptr->WB.duration,
                retiring_ptr->RT.start_time, retiring_ptr->RT.duration
            );
            auto retired_iter = std::find(ptr_list.begin(), ptr_list.end(), retiring_ptr);
            if (retired_iter != ptr_list.end()) ptr_list.erase(retired_iter);
            delete retiring_ptr;

            if(dest_reg != -1 && RMT[dest_reg].v && RMT[dest_reg].ROB_tag == retiring_tag) RMT[dest_reg].v = 0;
            rob_deallocate();
        }
    }
};


int main (int argc, char* argv[])
{
    FILE *FP;               // File handler
    char *trace_file;       // Variable that holds trace file name;
    proc_params params;       // look at sim_bp.h header file for the the definition of struct proc_params

    
    if (argc != 5)
    {
        printf("Error: Wrong number of inputs:%d\n", argc-1);
        exit(EXIT_FAILURE);
    }
    
    params.rob_size     = strtoul(argv[1], NULL, 10);
    params.iq_size      = strtoul(argv[2], NULL, 10);
    params.width        = strtoul(argv[3], NULL, 10);
    trace_file          = argv[4];
    // printf("rob_size:%lu "
    //         "iq_size:%lu "
    //         "width:%lu "
    //         "tracefile:%s\n", params.rob_size, params.iq_size, params.width, trace_file);
    // Open trace_file in read mode
    FP = fopen(trace_file, "r");
    if(FP == NULL)
    {
        // Throw error and exit if fopen() failed
        printf("Error: Unable to open file %s\n", trace_file);
        exit(EXIT_FAILURE);
    }

    set_sim_values(params.rob_size, params.iq_size, params.width);
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // The following loop just tests reading the trace and echoing it back to the screen.
    //
    // Replace this loop with the "do { } while (Advance_Cycle());" loop indicated in the Project 3 spec.
    // Note: fscanf() calls -- to obtain a fetch bundle worth of instructions from the trace -- should be
    // inside the Fetch() function.
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    do {
                Retire();   // Retireup to WIDTH consecutive
                            // “ready”instructions from the head of
                            // the ROB.
                Writeback();// Process the writeback bundle in WB:
                            // For each instruction in WB, mark the
                            // instruction as “ready”in its entryin
                            // the ROB.
                Execute();  // From the execute_list, check for
                            // instructions that are finishing
                            // execution thiscycle, and:
                            // 1) Remove the instruction from
                            //    the execute_list.
                            // 2) Add the instruction to WB.
                            // 3) Wakeupdependent instructions (set
                            //    theirsource operand ready flags)in
                            //    the IQ, DI (the dispatch bundle), and
                            //    RR (the register-read bundle).
                Issue();    // Issue up to WIDTH oldest instructions
                            // from the IQ. (One approach to implement
                            // oldest-first issuing, is to make multiple
                            // passes through the IQ, each time finding
                            // the next oldest ready instruction and
                            // then issuing it.One way to annotate the
                            // age of an instruction is to assign an
                            // incrementing sequence number to each
                            //instruction as it is fetched from the
                            // trace file.)
                            // To issue an instruction:
                            // 1) Remove the instruction from theIQ.
                            // 2) Add the instruction to the
                            //    execute_list. Set a timer for the
                            //    instruction in the execute_list that
                            //    will allow you to model its execution
                            //    latency.
                Dispatch(); // If DI contains a dispatch bundle:
                            // If the number of free IQ entries is les
                            // than the size of the dispatch bundle in
                            // DI, then do nothing. If the number of
                            // free IQ entries is greater than or equal
                            // to the size of the dispatch bundle inDI,
                            //then dispatch all instructionsfrom DI to
                            //the IQ.
                RegRead();  // If RR contains a register-read bundle:
                            // If DI is not empty (cannot accept a
                            // new dispatch bundle), then do nothing.
                            // If DI is empty (can accept a new dispatch
                            // bundle), then process (see below) the
                            //register-readbundle and advance it from
                            //RR to DI.
                            //
                            // Since values are not explicitly modeled,
                            // the sole purpose of the Register Read
                            // stage is to ascertain the readiness of
                            // the renamed source operands. Apply your
                            // learning from the class lectures/notes on// this topic.
                            //
                            // Also take care that producersin their
                            //last cycle of execution wakeup dependent
                            //operands not just in the IQ, but also in
                            // two other stages including RegRead()
                            // (this is required to avoid deadlock). See
                            // Execute() description above.
                Rename();   // If RN contains a rename bundle:
                            // If either RR is not empty (cannot accept
                            //anew register-read bundle)or the ROB
                            // does not have enough free entries to
                            // accept the entire rename bundle, then do
                            //nothing.
                            // If RRis empty (can accept a new
                            //register-read bundle)and the ROB has
                            // enough free entries to accept the entire
                            // rename bundle, then process (see below)
                            //therenamebundle and advance it from
                            //RNto RR.
                            //
                            // Apply your learning from the class
                            // lectures/notes on the steps for renaming:
                            // (1) allocate an entry in the ROB for the
                            // instruction, (2) rename its source
                            // registers, and (3) rename its destination
                            // register (if it has one). Note that the
                            // rename bundle must be renamed in program
                            // order (fortunately the instructions in
                            // the rename bundle are in program order).
                Decode();   // If DE contains a decode bundle:
                            //If RN is not empty (cannot accept a new
                            // rename bundle), then do nothing.
                            // If RN is empty (can accept a new rename
                            // bundle), then advance the decode bundle
                            // from DE to RN.
                Fetch(FP); 


                } 
                while (Advance_Cycle());// Advance_Cycle performs several functions.  First, it advances the simulator cycle.Second, when it becomes known that the pipelineis empty AND the trace is depleted, the function returns “false”to terminate the loop.
                for(int i = 0; i < ptr_list.size(); i++){
                    delete ptr_list[i];
                }
                ptr_list.clear();
                printf("# === Simulator Command =========\n");
                printf("# ");
                for (int i = 0; i < argc; i++) {
                    printf("%s ", argv[i]);
                }
                printf("\n# === Processor Configuration ===\n");
                printf("# rob_size = %lu\n"
                        "# iq_size = %lu\n"
                        "# width = %lu\n", params.rob_size, params.iq_size, params.width);
                printf("# === Simulation Results ========\n");
                printf("# Dynamic Instruction Count = %d\n", DIC);
                printf("# Cycles = %d\n", CYCLES);
                printf("# Instructions Per Cycle (IPC) = %.2f\n", float(DIC)/float(CYCLES));
    return 0;
}



