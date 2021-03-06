module FooLFSR(
  input   clock,
  input   reset,
  input   io_seed_valid,
  output  io_out_0
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg  state_0; // @[PRNG.scala 55:49]
  wire  _GEN_4 = io_seed_valid | state_0; // @[PRNG.scala 73:22 74:11]
  assign io_out_0 = state_0; // @[PRNG.scala 78:10]
  always @(posedge clock) begin
    if (reset) begin // @[PRNG.scala 55:49]
      state_0 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_0 <= _GEN_4;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_0 = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LFSRResetTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  lfsr_clock; // @[LFSRSpec.scala 80:20]
  wire  lfsr_reset; // @[LFSRSpec.scala 80:20]
  wire  lfsr_io_seed_valid; // @[LFSRSpec.scala 80:20]
  wire  lfsr_io_out_0; // @[LFSRSpec.scala 80:20]
  reg [2:0] count; // @[Counter.scala 62:40]
  wire  wrap_wrap = count == 3'h4; // @[Counter.scala 74:24]
  wire [2:0] _wrap_value_T_1 = count + 3'h1; // @[Counter.scala 78:24]
  wire  _T = count == 3'h2; // @[LFSRSpec.scala 91:14]
  wire [3:0] _T_1 = {2'h3,1'h1,lfsr_io_out_0}; // @[LFSRSpec.scala 92:24]
  wire  _T_4 = ~reset; // @[LFSRSpec.scala 92:11]
  FooLFSR lfsr ( // @[LFSRSpec.scala 80:20]
    .clock(lfsr_clock),
    .reset(lfsr_reset),
    .io_seed_valid(lfsr_io_seed_valid),
    .io_out_0(lfsr_io_out_0)
  );
  assign lfsr_clock = clock;
  assign lfsr_reset = count == 3'h3; // @[LFSRSpec.scala 95:23]
  assign lfsr_io_seed_valid = count == 3'h1; // @[LFSRSpec.scala 87:31]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      count <= 3'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      count <= 3'h0; // @[Counter.scala 88:28]
    end else begin
      count <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(_T_1 == 4'hf)) begin
          $fatal; // @[LFSRSpec.scala 92:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(_T_1 == 4'hf)) begin
          $fwrite(32'h80000002,
            "Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:92 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n"
            ); // @[LFSRSpec.scala 92:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_4 & ~(_T_1 != 4'hf)) begin
          $fatal; // @[LFSRSpec.scala 98:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wrap_wrap & _T_4 & ~(_T_1 != 4'hf)) begin
          $fwrite(32'h80000002,
            "Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:98 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n"
            ); // @[LFSRSpec.scala 98:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_4) begin
          $finish; // @[LFSRSpec.scala 102:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  count = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
