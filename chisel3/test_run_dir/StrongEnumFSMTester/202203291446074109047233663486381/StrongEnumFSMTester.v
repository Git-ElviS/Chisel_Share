module StrongEnumFSM(
  input        clock,
  input        reset,
  input        io_in,
  output       io_out,
  output [1:0] io_state
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[StrongEnum.scala 140:22]
  wire [1:0] _GEN_2 = ~io_in ? 2'h0 : state; // @[StrongEnum.scala 159:20 160:15 140:22]
  assign io_out = state == 2'h2; // @[StrongEnum.scala 142:20]
  assign io_state = state; // @[StrongEnum.scala 143:12]
  always @(posedge clock) begin
    if (reset) begin // @[StrongEnum.scala 140:22]
      state <= 2'h0; // @[StrongEnum.scala 140:22]
    end else if (2'h0 == state) begin // @[StrongEnum.scala 145:17]
      if (io_in) begin // @[StrongEnum.scala 147:19]
        state <= 2'h1; // @[StrongEnum.scala 148:15]
      end
    end else if (2'h1 == state) begin // @[StrongEnum.scala 145:17]
      if (io_in) begin // @[StrongEnum.scala 152:19]
        state <= 2'h2; // @[StrongEnum.scala 153:15]
      end else begin
        state <= 2'h0; // @[StrongEnum.scala 155:15]
      end
    end else if (2'h2 == state) begin // @[StrongEnum.scala 145:17]
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
module StrongEnumFSMTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[StrongEnum.scala 288:19]
  wire  dut_reset; // @[StrongEnum.scala 288:19]
  wire  dut_io_in; // @[StrongEnum.scala 288:19]
  wire  dut_io_out; // @[StrongEnum.scala 288:19]
  wire [1:0] dut_io_state; // @[StrongEnum.scala 288:19]
  reg [3:0] value; // @[Counter.scala 62:40]
  wire  _GEN_2 = 4'h2 == value ? 1'h0 : 4'h1 == value; // @[StrongEnum.scala 299:{13,13}]
  wire  _GEN_33 = 4'h5 == value; // @[StrongEnum.scala 299:{13,13}]
  wire  _GEN_6 = 4'h6 == value ? 1'h0 : 4'h5 == value | (4'h4 == value | (4'h3 == value | _GEN_2)); // @[StrongEnum.scala 299:{13,13}]
  wire  _GEN_17 = 4'h7 == value ? 1'h0 : 4'h6 == value | _GEN_33; // @[StrongEnum.scala 300:{21,21}]
  wire  _GEN_18 = 4'h8 == value ? 1'h0 : _GEN_17; // @[StrongEnum.scala 300:{21,21}]
  wire  _T_2 = ~reset; // @[StrongEnum.scala 300:9]
  wire [1:0] _GEN_22 = 4'h2 == value ? 2'h1 : 2'h0; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_23 = 4'h3 == value ? 2'h0 : _GEN_22; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_24 = 4'h4 == value ? 2'h1 : _GEN_23; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_25 = 4'h5 == value ? 2'h2 : _GEN_24; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_26 = 4'h6 == value ? 2'h2 : _GEN_25; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_27 = 4'h7 == value ? 2'h0 : _GEN_26; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_28 = 4'h8 == value ? 2'h1 : _GEN_27; // @[StrongEnum.scala 301:{23,23}]
  wire [1:0] _GEN_29 = 4'h9 == value ? 2'h2 : _GEN_28; // @[StrongEnum.scala 301:{23,23}]
  wire  wrap = value == 4'h9; // @[Counter.scala 74:24]
  wire [3:0] _value_T_1 = value + 4'h1; // @[Counter.scala 78:24]
  StrongEnumFSM dut ( // @[StrongEnum.scala 288:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_in(dut_io_in),
    .io_out(dut_io_out),
    .io_state(dut_io_state)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_in = 4'h9 == value ? 1'h0 : 4'h8 == value | (4'h7 == value | _GEN_6); // @[StrongEnum.scala 299:{13,13}]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      value <= 4'h0; // @[Counter.scala 62:40]
    end else if (wrap) begin // @[Counter.scala 88:20]
      value <= 4'h0; // @[Counter.scala 88:28]
    end else begin
      value <= _value_T_1; // @[Counter.scala 78:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(dut_io_out == (4'h9 == value | _GEN_18))) begin
          $fatal; // @[StrongEnum.scala 300:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(dut_io_out == (4'h9 == value | _GEN_18))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:300 assert(dut.io.out === expected(cycle))\n"
            ); // @[StrongEnum.scala 300:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_state == _GEN_29)) begin
          $fatal; // @[StrongEnum.scala 301:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_state == _GEN_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:301 assert(dut.io.state === expected_state(cycle))\n"); // @[StrongEnum.scala 301:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_2) begin
          $finish; // @[StrongEnum.scala 304:9]
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
  value = _RAND_0[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
