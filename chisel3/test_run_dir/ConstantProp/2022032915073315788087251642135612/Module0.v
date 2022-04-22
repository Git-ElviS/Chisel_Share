module Module0(
  input        clock,
  input        reset,
  output [1:0] o
);
  wire  i0 = 1'h0; // @[TraceSpec.scala 249:18]
  assign o = {{1'd0}, i0}; // @[TraceSpec.scala 252:9]
endmodule
