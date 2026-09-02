Build Log

## 6/20/2026:

Created the ROB, RMT, and IQ. Working on creating the testbenches via cocotb.

## 6/26/2026:

Finished testbenches. Created makefile to simulate ROB, RMT, and IQ via Verilator, cleaned up syntax, and verified that on first simulation, everything works as expected.

# 7/6/2026:

I added datapath, wiring for the main 3 structures, and the ALU

# 9/1/2026:

Back on track, verified basic ROB and datapath functionality. Added tests for RAW, no dependendencies, WAW, and RAW chain, 9 instructions. Fixed race conditions between my testbench where assertions were sampling too early by changing posedge to negedge in actual test. Also for ninth instruction, instruction valid was changing too early.
