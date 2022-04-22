module FullAdder(
  input   clock,
  input   reset,
  input   io_a,
  input   io_b,
  input   io_cin,
  output  io_sum,
  output  io_cout
);
  wire  a_xor_b = io_a ^ io_b; // @[FullAdder.scala 16:22]
  wire  a_and_b = io_a & io_b; // @[FullAdder.scala 19:22]
  wire  b_and_cin = io_b & io_cin; // @[FullAdder.scala 20:24]
  wire  a_and_cin = io_a & io_cin; // @[FullAdder.scala 21:24]
  wire  _T_1 = a_and_b | b_and_cin; // @[FullAdder.scala 22:22]
  assign io_sum = a_xor_b ^ io_cin; // @[FullAdder.scala 17:10]
  assign io_cout = _T_1 | a_and_cin; // @[FullAdder.scala 22:11]
endmodule
