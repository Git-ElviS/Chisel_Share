module SubModule(
  input        clock,
  input        reset,
  output [3:0] io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] cycle; // @[Counter.scala 62:40]
  wire  cycle_wrap_wrap = cycle == 4'h9; // @[Counter.scala 74:24]
  wire [3:0] _cycle_wrap_value_T_1 = cycle + 4'h1; // @[Counter.scala 78:24]
  assign io_out = cycle; // @[MultiClockSpec.scala 36:12]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 4'h0; // @[Counter.scala 62:40]
    end else if (cycle_wrap_wrap) begin // @[Counter.scala 88:20]
      cycle <= 4'h0; // @[Counter.scala 88:28]
    end else begin
      cycle <= _cycle_wrap_value_T_1; // @[Counter.scala 78:15]
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
  cycle = _RAND_0[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MultiClockSubModuleTest(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  inst_clock; // @[MultiClockSpec.scala 46:64]
  wire  inst_reset; // @[MultiClockSpec.scala 46:64]
  wire [3:0] inst_io_out; // @[MultiClockSpec.scala 46:64]
  reg [3:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 4'h9; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = cycle + 4'h1; // @[Counter.scala 78:24]
  reg  cDiv; // @[MultiClockSpec.scala 40:21]
  wire  _T_2 = ~reset; // @[MultiClockSpec.scala 50:11]
  SubModule inst ( // @[MultiClockSpec.scala 46:64]
    .clock(inst_clock),
    .reset(inst_reset),
    .io_out(inst_io_out)
  );
  assign inst_clock = cDiv; // @[MultiClockSpec.scala 43:25]
  assign inst_reset = cycle < 4'h3; // @[MultiClockSpec.scala 44:26]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 4'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cycle <= 4'h0; // @[Counter.scala 88:28]
    end else begin
      cycle <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    cDiv <= reset | ~cDiv; // @[MultiClockSpec.scala 40:{21,21} 41:8]
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset & ~(inst_io_out == 4'h3)) begin
          $fatal; // @[MultiClockSpec.scala 50:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wrap_wrap & ~reset & ~(inst_io_out == 4'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MultiClockSpec.scala:50 assert(inst.io.out === 3.U)\n"); // @[MultiClockSpec.scala 50:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_2) begin
          $finish; // @[MultiClockSpec.scala 51:9]
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
  cycle = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  cDiv = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
