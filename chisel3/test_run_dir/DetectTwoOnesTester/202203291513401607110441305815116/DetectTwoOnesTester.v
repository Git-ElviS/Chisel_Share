module DetectTwoOnes(
  input   clock,
  input   reset,
  input   io_in,
  output  io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[FSM.scala 25:22]
  wire [1:0] _GEN_2 = ~io_in ? 2'h0 : state; // @[FSM.scala 43:20 44:15 25:22]
  assign io_out = state == 2'h2; // @[FSM.scala 27:20]
  always @(posedge clock) begin
    if (reset) begin // @[FSM.scala 25:22]
      state <= 2'h0; // @[FSM.scala 25:22]
    end else if (2'h0 == state) begin // @[FSM.scala 29:17]
      if (io_in) begin // @[FSM.scala 31:19]
        state <= 2'h1; // @[FSM.scala 32:15]
      end
    end else if (2'h1 == state) begin // @[FSM.scala 29:17]
      if (io_in) begin // @[FSM.scala 36:19]
        state <= 2'h2; // @[FSM.scala 37:15]
      end else begin
        state <= 2'h0; // @[FSM.scala 39:15]
      end
    end else if (2'h2 == state) begin // @[FSM.scala 29:17]
      state <= _GEN_2;
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
  state = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DetectTwoOnesTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[FSM.scala 52:19]
  wire  dut_reset; // @[FSM.scala 52:19]
  wire  dut_io_in; // @[FSM.scala 52:19]
  wire  dut_io_out; // @[FSM.scala 52:19]
  reg [3:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 4'ha; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = cycle + 4'h1; // @[Counter.scala 78:24]
  wire  _T_1 = ~reset; // @[CookbookSpec.scala 19:20]
  wire  _GEN_5 = 4'h2 == cycle ? 1'h0 : 4'h1 == cycle; // @[FSM.scala 59:{13,13}]
  wire  _GEN_25 = 4'h5 == cycle; // @[FSM.scala 59:{13,13}]
  wire  _GEN_9 = 4'h6 == cycle ? 1'h0 : 4'h5 == cycle | (4'h4 == cycle | (4'h3 == cycle | _GEN_5)); // @[FSM.scala 59:{13,13}]
  wire  _GEN_20 = 4'h7 == cycle ? 1'h0 : 4'h6 == cycle | _GEN_25; // @[FSM.scala 60:{21,21}]
  wire  _GEN_21 = 4'h8 == cycle ? 1'h0 : _GEN_20; // @[FSM.scala 60:{21,21}]
  DetectTwoOnes dut ( // @[FSM.scala 52:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_in(dut_io_in),
    .io_out(dut_io_out)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_in = 4'h9 == cycle ? 1'h0 : 4'h8 == cycle | (4'h7 == cycle | _GEN_9); // @[FSM.scala 59:{13,13}]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 4'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cycle <= 4'h0; // @[Counter.scala 88:28]
    end else begin
      cycle <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset) begin
          $finish; // @[CookbookSpec.scala 19:20]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_out == (4'h9 == cycle | _GEN_21))) begin
          $fatal; // @[FSM.scala 60:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_out == (4'h9 == cycle | _GEN_21))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at FSM.scala:60 assert(dut.io.out === expected(cycle))\n"); // @[FSM.scala 60:9]
        end
    `ifdef PRINTF_COND
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
  cycle = _RAND_0[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
