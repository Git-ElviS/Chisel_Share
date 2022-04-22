module Module1(
  input   clock,
  input   reset,
  input   i,
  output  o
);
  wire  m0_i;
  wire  m0_o;
  assign m0_o = ~m0_i; // @[TraceSpec.scala 228:12]
  assign o = m0_o; // @[TraceSpec.scala 236:9]
  assign m0_i = i; // @[TraceSpec.scala 235:12]
endmodule
