module Functionality(
  input         clock,
  input         reset,
  input  [15:0] io_x,
  input  [15:0] io_y,
  output [15:0] io_z
);
  wire [15:0] _T = io_x & io_y; // @[Functionality.scala 13:8]
  wire [15:0] _T_1 = ~io_x; // @[Functionality.scala 13:16]
  wire [15:0] _T_2 = _T_1 & io_y; // @[Functionality.scala 13:19]
  assign io_z = _T | _T_2; // @[Functionality.scala 14:8]
endmodule
