module SimpleALU(
  input        clock,
  input        reset,
  input  [3:0] io_a,
  input  [3:0] io_b,
  input  [1:0] io_opcode,
  output [3:0] io_out
);
  wire  _T = io_opcode == 2'h0; // @[SimpleALU.scala 45:19]
  wire [3:0] _T_2 = io_a + io_b; // @[SimpleALU.scala 46:20]
  wire  _T_3 = io_opcode == 2'h1; // @[SimpleALU.scala 47:26]
  wire [3:0] _T_5 = io_a - io_b; // @[SimpleALU.scala 48:20]
  wire  _T_6 = io_opcode == 2'h2; // @[SimpleALU.scala 49:26]
  wire [3:0] _GEN_0 = _T_6 ? io_a : io_b; // @[SimpleALU.scala 49:35]
  wire [3:0] _GEN_1 = _T_3 ? _T_5 : _GEN_0; // @[SimpleALU.scala 47:35]
  assign io_out = _T ? _T_2 : _GEN_1; // @[SimpleALU.scala 44:10 SimpleALU.scala 46:12 SimpleALU.scala 48:12 SimpleALU.scala 50:12 SimpleALU.scala 52:12]
endmodule
