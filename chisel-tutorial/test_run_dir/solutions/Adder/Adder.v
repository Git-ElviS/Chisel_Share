module Adder(
  input        clock,
  input        reset,
  input  [7:0] io_in0,
  input  [7:0] io_in1,
  output [7:0] io_out
);
  assign io_out = io_in0 + io_in1; // @[Adder.scala 17:10]
endmodule
