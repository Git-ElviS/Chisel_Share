module HiLoMultiplier(
  input         clock,
  input         reset,
  input  [15:0] io_A,
  input  [15:0] io_B,
  output [15:0] io_Hi,
  output [15:0] io_Lo
);
  wire [31:0] mult = io_A * io_B; // @[HiLoMultiplier.scala 14:19]
  assign io_Hi = mult[31:16]; // @[HiLoMultiplier.scala 16:9]
  assign io_Lo = mult[15:0]; // @[HiLoMultiplier.scala 15:9]
endmodule
