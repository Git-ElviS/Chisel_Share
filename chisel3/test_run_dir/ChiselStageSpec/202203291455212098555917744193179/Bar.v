module Bar(
  input  [3:0] in,
  output [3:0] out
);
  assign out = ~in; // @[ChiselStageSpec.scala 21:12]
endmodule
