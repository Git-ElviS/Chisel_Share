module Module0(
  input        clock,
  input  [7:0] i_a_a,
  input        i_a_b,
  input        i_b_0_0,
  input        i_b_0_1,
  input        i_b_0_2,
  input        i_b_0_3,
  input        i_b_1_0,
  input        i_b_1_1,
  input        i_b_1_2,
  input        i_b_1_3,
  input        i_b_2_0,
  input        i_b_2_1,
  input        i_b_2_2,
  input        i_b_2_3,
  input        i_b_3_0,
  input        i_b_3_1,
  input        i_b_3_2,
  input        i_b_3_3,
  output [7:0] o_a_a,
  output       o_a_b,
  output       o_b_0_0,
  output       o_b_0_1,
  output       o_b_0_2,
  output       o_b_0_3,
  output       o_b_1_0,
  output       o_b_1_1,
  output       o_b_1_2,
  output       o_b_1_3,
  output       o_b_2_0,
  output       o_b_2_1,
  output       o_b_2_2,
  output       o_b_2_3,
  output       o_b_3_0,
  output       o_b_3_1,
  output       o_b_3_2,
  output       o_b_3_3
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] r_a_a; // @[TraceSpec.scala 49:18]
  reg  r_a_b; // @[TraceSpec.scala 49:18]
  reg  r_b_0_0; // @[TraceSpec.scala 49:18]
  reg  r_b_0_1; // @[TraceSpec.scala 49:18]
  reg  r_b_0_2; // @[TraceSpec.scala 49:18]
  reg  r_b_0_3; // @[TraceSpec.scala 49:18]
  reg  r_b_1_0; // @[TraceSpec.scala 49:18]
  reg  r_b_1_1; // @[TraceSpec.scala 49:18]
  reg  r_b_1_2; // @[TraceSpec.scala 49:18]
  reg  r_b_1_3; // @[TraceSpec.scala 49:18]
  reg  r_b_2_0; // @[TraceSpec.scala 49:18]
  reg  r_b_2_1; // @[TraceSpec.scala 49:18]
  reg  r_b_2_2; // @[TraceSpec.scala 49:18]
  reg  r_b_2_3; // @[TraceSpec.scala 49:18]
  reg  r_b_3_0; // @[TraceSpec.scala 49:18]
  reg  r_b_3_1; // @[TraceSpec.scala 49:18]
  reg  r_b_3_2; // @[TraceSpec.scala 49:18]
  reg  r_b_3_3; // @[TraceSpec.scala 49:18]
  assign o_a_a = r_a_a; // @[TraceSpec.scala 50:9]
  assign o_a_b = r_a_b; // @[TraceSpec.scala 50:9]
  assign o_b_0_0 = r_b_0_0; // @[TraceSpec.scala 50:9]
  assign o_b_0_1 = r_b_0_1; // @[TraceSpec.scala 50:9]
  assign o_b_0_2 = r_b_0_2; // @[TraceSpec.scala 50:9]
  assign o_b_0_3 = r_b_0_3; // @[TraceSpec.scala 50:9]
  assign o_b_1_0 = r_b_1_0; // @[TraceSpec.scala 50:9]
  assign o_b_1_1 = r_b_1_1; // @[TraceSpec.scala 50:9]
  assign o_b_1_2 = r_b_1_2; // @[TraceSpec.scala 50:9]
  assign o_b_1_3 = r_b_1_3; // @[TraceSpec.scala 50:9]
  assign o_b_2_0 = r_b_2_0; // @[TraceSpec.scala 50:9]
  assign o_b_2_1 = r_b_2_1; // @[TraceSpec.scala 50:9]
  assign o_b_2_2 = r_b_2_2; // @[TraceSpec.scala 50:9]
  assign o_b_2_3 = r_b_2_3; // @[TraceSpec.scala 50:9]
  assign o_b_3_0 = r_b_3_0; // @[TraceSpec.scala 50:9]
  assign o_b_3_1 = r_b_3_1; // @[TraceSpec.scala 50:9]
  assign o_b_3_2 = r_b_3_2; // @[TraceSpec.scala 50:9]
  assign o_b_3_3 = r_b_3_3; // @[TraceSpec.scala 50:9]
  always @(posedge clock) begin
    r_a_a <= i_a_a; // @[TraceSpec.scala 51:9]
    r_a_b <= i_a_b; // @[TraceSpec.scala 51:9]
    r_b_0_0 <= i_b_0_0; // @[TraceSpec.scala 51:9]
    r_b_0_1 <= i_b_0_1; // @[TraceSpec.scala 51:9]
    r_b_0_2 <= i_b_0_2; // @[TraceSpec.scala 51:9]
    r_b_0_3 <= i_b_0_3; // @[TraceSpec.scala 51:9]
    r_b_1_0 <= i_b_1_0; // @[TraceSpec.scala 51:9]
    r_b_1_1 <= i_b_1_1; // @[TraceSpec.scala 51:9]
    r_b_1_2 <= i_b_1_2; // @[TraceSpec.scala 51:9]
    r_b_1_3 <= i_b_1_3; // @[TraceSpec.scala 51:9]
    r_b_2_0 <= i_b_2_0; // @[TraceSpec.scala 51:9]
    r_b_2_1 <= i_b_2_1; // @[TraceSpec.scala 51:9]
    r_b_2_2 <= i_b_2_2; // @[TraceSpec.scala 51:9]
    r_b_2_3 <= i_b_2_3; // @[TraceSpec.scala 51:9]
    r_b_3_0 <= i_b_3_0; // @[TraceSpec.scala 51:9]
    r_b_3_1 <= i_b_3_1; // @[TraceSpec.scala 51:9]
    r_b_3_2 <= i_b_3_2; // @[TraceSpec.scala 51:9]
    r_b_3_3 <= i_b_3_3; // @[TraceSpec.scala 51:9]
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
  r_a_a = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  r_a_b = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  r_b_0_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  r_b_0_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  r_b_0_2 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  r_b_0_3 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  r_b_1_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  r_b_1_1 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  r_b_1_2 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  r_b_1_3 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  r_b_2_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  r_b_2_1 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  r_b_2_2 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  r_b_2_3 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  r_b_3_0 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  r_b_3_1 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  r_b_3_2 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  r_b_3_3 = _RAND_17[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Module1(
  input        clock,
  input        reset,
  input  [7:0] i_a_a,
  input        i_a_b,
  input        i_b_0_0,
  input        i_b_0_1,
  input        i_b_0_2,
  input        i_b_0_3,
  input        i_b_1_0,
  input        i_b_1_1,
  input        i_b_1_2,
  input        i_b_1_3,
  input        i_b_2_0,
  input        i_b_2_1,
  input        i_b_2_2,
  input        i_b_2_3,
  input        i_b_3_0,
  input        i_b_3_1,
  input        i_b_3_2,
  input        i_b_3_3
);
  wire  m0_clock; // @[TraceSpec.scala 60:22]
  wire [7:0] m0_i_a_a; // @[TraceSpec.scala 60:22]
  wire  m0_i_a_b; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_0_0; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_0_1; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_0_2; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_0_3; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_1_0; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_1_1; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_1_2; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_1_3; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_2_0; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_2_1; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_2_2; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_2_3; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_3_0; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_3_1; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_3_2; // @[TraceSpec.scala 60:22]
  wire  m0_i_b_3_3; // @[TraceSpec.scala 60:22]
  wire [7:0] m0_o_a_a; // @[TraceSpec.scala 60:22]
  wire  m0_o_a_b; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_0_0; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_0_1; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_0_2; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_0_3; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_1_0; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_1_1; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_1_2; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_1_3; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_2_0; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_2_1; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_2_2; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_2_3; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_3_0; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_3_1; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_3_2; // @[TraceSpec.scala 60:22]
  wire  m0_o_b_3_3; // @[TraceSpec.scala 60:22]
  Module0 m0 ( // @[TraceSpec.scala 60:22]
    .clock(m0_clock),
    .i_a_a(m0_i_a_a),
    .i_a_b(m0_i_a_b),
    .i_b_0_0(m0_i_b_0_0),
    .i_b_0_1(m0_i_b_0_1),
    .i_b_0_2(m0_i_b_0_2),
    .i_b_0_3(m0_i_b_0_3),
    .i_b_1_0(m0_i_b_1_0),
    .i_b_1_1(m0_i_b_1_1),
    .i_b_1_2(m0_i_b_1_2),
    .i_b_1_3(m0_i_b_1_3),
    .i_b_2_0(m0_i_b_2_0),
    .i_b_2_1(m0_i_b_2_1),
    .i_b_2_2(m0_i_b_2_2),
    .i_b_2_3(m0_i_b_2_3),
    .i_b_3_0(m0_i_b_3_0),
    .i_b_3_1(m0_i_b_3_1),
    .i_b_3_2(m0_i_b_3_2),
    .i_b_3_3(m0_i_b_3_3),
    .o_a_a(m0_o_a_a),
    .o_a_b(m0_o_a_b),
    .o_b_0_0(m0_o_b_0_0),
    .o_b_0_1(m0_o_b_0_1),
    .o_b_0_2(m0_o_b_0_2),
    .o_b_0_3(m0_o_b_0_3),
    .o_b_1_0(m0_o_b_1_0),
    .o_b_1_1(m0_o_b_1_1),
    .o_b_1_2(m0_o_b_1_2),
    .o_b_1_3(m0_o_b_1_3),
    .o_b_2_0(m0_o_b_2_0),
    .o_b_2_1(m0_o_b_2_1),
    .o_b_2_2(m0_o_b_2_2),
    .o_b_2_3(m0_o_b_2_3),
    .o_b_3_0(m0_o_b_3_0),
    .o_b_3_1(m0_o_b_3_1),
    .o_b_3_2(m0_o_b_3_2),
    .o_b_3_3(m0_o_b_3_3)
  );
  assign m0_clock = clock;
  assign m0_i_a_a = i_a_a; // @[TraceSpec.scala 61:12]
  assign m0_i_a_b = i_a_b; // @[TraceSpec.scala 61:12]
  assign m0_i_b_0_0 = i_b_0_0; // @[TraceSpec.scala 61:12]
  assign m0_i_b_0_1 = i_b_0_1; // @[TraceSpec.scala 61:12]
  assign m0_i_b_0_2 = i_b_0_2; // @[TraceSpec.scala 61:12]
  assign m0_i_b_0_3 = i_b_0_3; // @[TraceSpec.scala 61:12]
  assign m0_i_b_1_0 = i_b_1_0; // @[TraceSpec.scala 61:12]
  assign m0_i_b_1_1 = i_b_1_1; // @[TraceSpec.scala 61:12]
  assign m0_i_b_1_2 = i_b_1_2; // @[TraceSpec.scala 61:12]
  assign m0_i_b_1_3 = i_b_1_3; // @[TraceSpec.scala 61:12]
  assign m0_i_b_2_0 = i_b_2_0; // @[TraceSpec.scala 61:12]
  assign m0_i_b_2_1 = i_b_2_1; // @[TraceSpec.scala 61:12]
  assign m0_i_b_2_2 = i_b_2_2; // @[TraceSpec.scala 61:12]
  assign m0_i_b_2_3 = i_b_2_3; // @[TraceSpec.scala 61:12]
  assign m0_i_b_3_0 = i_b_3_0; // @[TraceSpec.scala 61:12]
  assign m0_i_b_3_1 = i_b_3_1; // @[TraceSpec.scala 61:12]
  assign m0_i_b_3_2 = i_b_3_2; // @[TraceSpec.scala 61:12]
  assign m0_i_b_3_3 = i_b_3_3; // @[TraceSpec.scala 61:12]
endmodule
