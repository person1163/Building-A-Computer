This file is for documenting my build logs as I continue this project

What is the purpose of this project?
As a student, I am interested in microarchitecture, digital design, and computer engineering. This project is a way for me to explore different areas of computer design and practice RTL coding.

# RISC-V OoO CPU Project Roadmap

## Project Goal

Build a complete RV32I out-of-order RISC-V processor and SoC on the DE10-Lite FPGA.

Final features:

* RV32I ISA support
* Tomasulo-style OoO backend
* Branch prediction
* Load/Store Queue (LSQ)
* L1 Instruction Cache
* L1 Data Cache
* UART console and bootloader
* VGA text console
* FPGA implementation and bring-up

---

# Phase 1: OoO Backend Infrastructure

Goal: Build and verify the Tomasulo backend in simulation.

Modules:

* core_params.sv
* core_types.sv
* rmt.sv
* rob.sv
* issue_queue.sv
* execute.sv
* datapath.sv

Features:

* Register renaming (RMT)
* Reorder Buffer (ROB)
* Issue Queue (IQ)
* Wakeup/select logic
* In-order commit
* Dependency tracking

Verification:

* Cocotb unit tests for each module
* Dependency chain tests
* In-order commit verification

Success Criteria:

* Instructions execute out-of-order
* Instructions commit in-order
* Dependencies resolve correctly

---

# Phase 2: Frontend

Goal: Feed real RISC-V instructions into the backend.

Modules:

* pc_gen.sv
* inst_mem.sv
* decode.sv

Features:

* Instruction fetch
* Instruction decode
* Immediate generation
* UOP generation

Initial ISA Support:

* ADD
* SUB
* AND
* OR
* XOR
* ADDI
* LW
* SW
* BEQ
* BNE

Success Criteria:

* Real RV32I instructions produce correct UOPs

---

# Phase 3: Complete RV32I CPU

Goal: Connect frontend and backend into a working processor.

Pipeline:

Fetch → Decode → Rename → Issue → Execute → Writeback → Commit

Features:

* Register file
* Instruction memory
* Data memory
* Full RV32I execution path

Verification:

* Assembly test programs
* Commit trace checking
* Register verification
* Memory verification

Success Criteria:

* Execute simple RV32I programs correctly

---

# Phase 4: UART

Goal: Create a communication channel between FPGA and laptop.

Modules:

* uart_tx.sv
* uart_rx.sv
* mmio_decode.sv

Memory Map:

0x10000000 : UART_TX

0x10000004 : UART_STATUS

Features:

* UART transmit
* UART receive
* MMIO interface

Milestones:

* Print characters
* Interactive serial console
* Debug monitor

Success Criteria:

* CPU communicates with terminal over UART

---

# Phase 5: Branch Prediction

Goal: Improve frontend performance.

Modules:

* btb.sv
* predictor.sv

Versions:

1. Predict Not Taken
2. 2-bit Saturating Counter Predictor
3. GShare Predictor

Features:

* Speculative fetch
* Mispredict recovery
* Frontend redirects

Success Criteria:

* Correct speculation and recovery

---

# Phase 6: Load/Store Queue

Goal: Support speculative memory execution.

Modules:

* load_queue.sv
* store_queue.sv
* agu.sv

Features:

* Load Queue
* Store Queue
* Store ordering
* Memory dependency tracking

Future:

* Store-to-load forwarding

Success Criteria:

* Correct memory ordering under OoO execution

---

# Phase 7: Cache System

Goal: Add realistic memory hierarchy.

## Instruction Cache

Features:

* Direct-mapped
* Blocking
* Read-only

## Data Cache

Features:

* Direct-mapped
* Write-through
* No-write-allocate
* Blocking

Future Upgrades:

* Set-associative caches
* Non-blocking caches
* Prefetching

Success Criteria:

* Cache hits, misses, refills operate correctly

---

# Phase 8: Physical Register File (PRF)

Goal: Transition from Tomasulo-style ROB renaming to modern PRF renaming.

Modules:

* rat.sv
* prf.sv
* free_list.sv

Features:

* Register Alias Table (RAT)
* Physical Register File (PRF)
* Free List
* Old physical register tracking

Success Criteria:

* Correct physical register allocation and reclamation

---

# Phase 9: VGA Text Console

Goal: Turn the processor into a standalone computer.

Modules:

* vga_controller.sv
* text_buffer.sv
* font_rom.sv

Memory Map:

0x20000000 : VGA Text Buffer

Features:

* Text display
* Memory-mapped console
* Debug output

Success Criteria:

* CPU writes text directly to monitor

---

# Phase 10: SoC Features

Additional peripherals:

* Timer
* GPIO
* Performance counters

Performance Counters:

* Cycles
* Instructions retired
* IPC
* Branches
* Branch mispredicts
* Cache hits
* Cache misses
* ROB occupancy

---

# Future Extensions

## Vector Unit

Features:

* Vector register file
* SIMD arithmetic
* Dot products
* Basic AI workloads

## Accelerator Work

Potential additions:

* Matrix multiply engine
* Neural network inference accelerator

---

# Explicitly Deferred

Not part of the initial project:

* MESI/MSI coherence
* Multicore support
* Full GPU
* MMU/virtual memory
* Linux support
* 10Gb Ethernet
* Wide superscalar issue

These may be explored after the main CPU is complete.

---

# Final Target System

RV32I OoO CPU
+
Branch Prediction
+
LSQ
+
L1 I-Cache
+
L1 D-Cache
+
UART Console
+
VGA Text Console
+
FPGA Implementation on DE10-Lite

Result: A complete out-of-order RISC-V computer running on FPGA.

# Build Log

## 6/20/2026:

Created the ROB, RMT, and IQ. Working on creating the testbenches via cocotb.

## 6/26/2026:

Finished testbenches
