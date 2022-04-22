module FSMVendingMachine(
  input   clock,
  input   reset,
  input   io_nickel,
  input   io_dime,
  output  io_dispense
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[SimpleVendingMachine.scala 25:22]
  wire [2:0] _GEN_2 = io_nickel ? 3'h2 : state; // @[SimpleVendingMachine.scala 25:22 33:{23,31}]
  wire [2:0] _GEN_4 = io_nickel ? 3'h3 : state; // @[SimpleVendingMachine.scala 25:22 37:{23,31}]
  wire [2:0] _GEN_5 = io_dime ? 3'h4 : _GEN_4; // @[SimpleVendingMachine.scala 38:{21,29}]
  wire [2:0] _GEN_6 = io_nickel ? 3'h4 : state; // @[SimpleVendingMachine.scala 25:22 41:{23,31}]
  wire [2:0] _GEN_7 = io_dime ? 3'h4 : _GEN_6; // @[SimpleVendingMachine.scala 42:{21,29}]
  wire [2:0] _GEN_8 = 3'h4 == state ? 3'h0 : state; // @[SimpleVendingMachine.scala 27:17 45:13 25:22]
  wire [2:0] _GEN_9 = 3'h3 == state ? _GEN_7 : _GEN_8; // @[SimpleVendingMachine.scala 27:17]
  assign io_dispense = state == 3'h4; // @[SimpleVendingMachine.scala 48:25]
  always @(posedge clock) begin
    if (reset) begin // @[SimpleVendingMachine.scala 25:22]
      state <= 3'h0; // @[SimpleVendingMachine.scala 25:22]
    end else if (3'h0 == state) begin // @[SimpleVendingMachine.scala 27:17]
      if (io_dime) begin // @[SimpleVendingMachine.scala 30:21]
        state <= 3'h2; // @[SimpleVendingMachine.scala 30:29]
      end else if (io_nickel) begin // @[SimpleVendingMachine.scala 29:23]
        state <= 3'h1; // @[SimpleVendingMachine.scala 29:31]
      end
    end else if (3'h1 == state) begin // @[SimpleVendingMachine.scala 27:17]
      if (io_dime) begin // @[SimpleVendingMachine.scala 34:21]
        state <= 3'h3; // @[SimpleVendingMachine.scala 34:29]
      end else begin
        state <= _GEN_2;
      end
    end else if (3'h2 == state) begin // @[SimpleVendingMachine.scala 27:17]
      state <= _GEN_5;
    end else begin
      state <= _GEN_9;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~(io_nickel & io_dime))) begin
          $fatal; // @[SimpleVendingMachine.scala 19:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~(io_nickel & io_dime))) begin
          $fwrite(32'h80000002,
            "Assertion failed: Only one of nickel or dime can be input at a time!\n    at SimpleVendingMachine.scala:19 assert(!(io.nickel && io.dime), \"Only one of nickel or dime can be input at a time!\")\n"
            ); // @[SimpleVendingMachine.scala 19:9]
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
  state = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SimpleVendingMachineTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[SimpleVendingMachine.scala 73:19]
  wire  dut_reset; // @[SimpleVendingMachine.scala 73:19]
  wire  dut_io_nickel; // @[SimpleVendingMachine.scala 73:19]
  wire  dut_io_dime; // @[SimpleVendingMachine.scala 73:19]
  wire  dut_io_dispense; // @[SimpleVendingMachine.scala 73:19]
  reg [3:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 4'h9; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = cycle + 4'h1; // @[Counter.scala 78:24]
  wire  _T_1 = ~reset; // @[SimpleVendingMachine.scala 76:20]
  wire  _GEN_8 = 4'h5 == cycle ? 1'h0 : 1'h1; // @[SimpleVendingMachine.scala 82:{17,17}]
  wire  _GEN_9 = 4'h6 == cycle ? 1'h0 : _GEN_8; // @[SimpleVendingMachine.scala 82:{17,17}]
  wire  _GEN_10 = 4'h7 == cycle ? 1'h0 : _GEN_9; // @[SimpleVendingMachine.scala 82:{17,17}]
  wire  _GEN_20 = 4'h7 == cycle ? 1'h0 : 4'h6 == cycle | 4'h5 == cycle; // @[SimpleVendingMachine.scala 83:{15,15}]
  wire  _GEN_21 = 4'h8 == cycle ? 1'h0 : _GEN_20; // @[SimpleVendingMachine.scala 83:{15,15}]
  wire  _GEN_28 = 4'h5 == cycle ? 1'h0 : 4'h4 == cycle; // @[SimpleVendingMachine.scala 84:{26,26}]
  wire  _GEN_29 = 4'h6 == cycle ? 1'h0 : _GEN_28; // @[SimpleVendingMachine.scala 84:{26,26}]
  wire  _GEN_31 = 4'h8 == cycle ? 1'h0 : 4'h7 == cycle | _GEN_29; // @[SimpleVendingMachine.scala 84:{26,26}]
  wire  _GEN_32 = 4'h9 == cycle ? 1'h0 : _GEN_31; // @[SimpleVendingMachine.scala 84:{26,26}]
  FSMVendingMachine dut ( // @[SimpleVendingMachine.scala 73:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_nickel(dut_io_nickel),
    .io_dime(dut_io_dime),
    .io_dispense(dut_io_dispense)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_nickel = 4'h9 == cycle ? 1'h0 : 4'h8 == cycle | _GEN_10; // @[SimpleVendingMachine.scala 82:{17,17}]
  assign dut_io_dime = 4'h9 == cycle | _GEN_21; // @[SimpleVendingMachine.scala 83:{15,15}]
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
          $finish; // @[SimpleVendingMachine.scala 76:20]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset) begin
          $finish; // @[SimpleVendingMachine.scala 76:28]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_dispense == _GEN_32)) begin
          $fatal; // @[SimpleVendingMachine.scala 84:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_dispense == _GEN_32)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at SimpleVendingMachine.scala:84 assert(dut.io.dispense === expected(cycle))\n"); // @[SimpleVendingMachine.scala 84:9]
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
