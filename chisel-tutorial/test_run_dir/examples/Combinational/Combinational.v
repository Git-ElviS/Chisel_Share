module Combinational(
  input         clock,
  input         reset,
  input  [15:0] io_x,
  input  [15:0] io_y,
  output [15:0] io_z
);
  assign io_z = io_x + io_y; // @[Combinational.scala 12:8]
endmodule
