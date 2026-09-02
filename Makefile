VERILATOR ?= verilator

VERILATOR_FLAGS := --binary --trace --timing \
	-Wall -Wno-fatal -Wno-EOFNEWLINE -Wno-DECLFILENAME -Wno-IMPORTSTAR \
	-Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM

TB_DIR := tb
RTL_DIR := rtl
BUILD_DIR := build

COMMON_RTL := $(RTL_DIR)/core_params.sv $(RTL_DIR)/core_types.sv
RMT_FILES := $(COMMON_RTL) $(RTL_DIR)/RMT.sv $(TB_DIR)/RMT_tb.sv
ROB_FILES := $(COMMON_RTL) $(RTL_DIR)/ROB.sv $(TB_DIR)/ROB_tb.sv
IQ_FILES := $(COMMON_RTL) $(RTL_DIR)/IQ.sv $(TB_DIR)/IQ_tb.sv
DATAPATH_FILES := $(COMMON_RTL) $(RTL_DIR)/RMT.sv $(RTL_DIR)/ROB.sv $(RTL_DIR)/IQ.sv $(RTL_DIR)/ALU.sv $(RTL_DIR)/datapath.sv $(TB_DIR)/datapath_tb.sv

.PHONY: all rmt rob iq datapath wave-datapath clean help

all: rmt rob iq datapath

rmt: $(BUILD_DIR)/RMT_tb/VRMT_tb
	cd $(BUILD_DIR)/RMT_tb && ./VRMT_tb

rob: $(BUILD_DIR)/ROB_tb/VROB_tb
	cd $(BUILD_DIR)/ROB_tb && ./VROB_tb

iq: $(BUILD_DIR)/IQ_tb/VIQ_tb
	cd $(BUILD_DIR)/IQ_tb && ./VIQ_tb

datapath: $(BUILD_DIR)/datapath_tb/Vdatapath_tb
	cd $(BUILD_DIR)/datapath_tb && ./Vdatapath_tb

wave-datapath: datapath
	surfer $(CURDIR)/$(BUILD_DIR)/datapath_tb/datapath.vcd >/dev/null 2>&1 &

$(BUILD_DIR)/RMT_tb/VRMT_tb: $(RMT_FILES)
	mkdir -p $(BUILD_DIR)/RMT_tb
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module RMT_tb -Mdir $(BUILD_DIR)/RMT_tb $(RMT_FILES)

$(BUILD_DIR)/ROB_tb/VROB_tb: $(ROB_FILES)
	mkdir -p $(BUILD_DIR)/ROB_tb
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module ROB_tb -Mdir $(BUILD_DIR)/ROB_tb $(ROB_FILES)

$(BUILD_DIR)/IQ_tb/VIQ_tb: $(IQ_FILES)
	mkdir -p $(BUILD_DIR)/IQ_tb
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module IQ_tb -Mdir $(BUILD_DIR)/IQ_tb $(IQ_FILES)

$(BUILD_DIR)/datapath_tb/Vdatapath_tb: $(DATAPATH_FILES)
	mkdir -p $(BUILD_DIR)/datapath_tb
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module datapath_tb -Mdir $(BUILD_DIR)/datapath_tb $(DATAPATH_FILES)

clean:
	rm -rf $(BUILD_DIR)

help:
	@echo "Targets:"
	@echo "  make rmt   # build + run RMT testbench"
	@echo "  make rob   # build + run ROB testbench"
	@echo "  make iq    # build + run IQ testbench"
	@echo "  make datapath # build + run datapath testbench"
	@echo "  make wave-datapath # run datapath testbench and open GTKWave"
	@echo "  make all   # run all testbenches"
	@echo "  make clean # remove build outputs"
