module Max2(
  input        clock,
  input        reset,
  input  [7:0] io_in0,
  input  [7:0] io_in1,
  output [7:0] io_out
);
  wire  _T = io_in0 > io_in1; // @[Max2.scala 17:24]
  assign io_out = _T ? io_in0 : io_in1; // @[Max2.scala 17:10]
endmodule
