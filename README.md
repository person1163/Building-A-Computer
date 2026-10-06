Build Log

## 6/20/2026:

Created the ROB, RMT, and IQ. Working on creating the testbenches via cocotb.

## 6/26/2026:

Finished testbenches. Created makefile to simulate ROB, RMT, and IQ via Verilator, cleaned up syntax, and verified that on first simulation, everything works as expected.

# 7/6/2026:

I added datapath, wiring for the main 3 structures, and the ALU

# 9/1/2026:

Back on track, verified basic ROB and datapath functionality. Added tests for RAW, no dependendencies, WAW, and RAW chain, 9 instructions. Fixed race conditions between my testbench where assertions were sampling too early by changing posedge to negedge in actual test. Also for ninth instruction, instruction valid was changing too early.

# 9/8/2026

Decode finished, going to wire to alu unit and create register file

9/29/2026

Bug:

The tenth instruction is  **not being dropped by the testbench** . It is the `SW` at `seq=9`: it allocates into the ROB and enters the IQ, but never issues, so its ROB entry never completes and retires.

The waveform shows its IQ entry has `src1_tag=6`, with `src1_ready=0` and `src2_ready=1`. The producer for tag 6 broadcasts writeback on the **same clock edge** that the store is dispatched. In `IQ.sv`, the wakeup loop only examines entries already marked valid; the store is still invalid then. The later dispatch assignment inserts it with `src1_ready=0`, so it misses that broadcast and remains stuck. The ROB count consequently stays at one.

The fix belongs in IQ dispatch/wakeup handling: when inserting a uop, account for a matching writeback in that same cycle, setting the corresponding source ready bit. More generally, a newly dispatched dependent uop must also be considered ready if its producer has already completed. Don’t change the expected commit count; the failure is a real missed-wakeup bug.

The fatal text in `datapath_tb.sv` says “Expected 9” even though the condition expects 10. That message is misleading, but it isn’t the cause.

Simply, the issue is that sometimes, if a producer is written back on the same edge as the dispatch , src1_ready will miss its time to be set.

10/5/2026:

RMT bug: If a rmt entry is renamed on the same edge as an older producer retires, the clear wins. Fixed by switching commit clear to be first, thus rename is not cleared but wins last
