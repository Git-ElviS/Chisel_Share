module UsesBlackBoxAddViaInline(
  input         clock,
  input         reset,
  input  [15:0] io_in,
  output [15:0] io_out
);
  wire [15:0] blackBoxAdd_in; // @[BlackBoxImpl.scala 41:27]
  wire [15:0] blackBoxAdd_out; // @[BlackBoxImpl.scala 41:27]
  BlackBoxAdd blackBoxAdd ( // @[BlackBoxImpl.scala 41:27]
    .in(blackBoxAdd_in),
    .out(blackBoxAdd_out)
  );
  assign io_out = blackBoxAdd_out; // @[BlackBoxImpl.scala 43:10]
  assign blackBoxAdd_in = io_in; // @[BlackBoxImpl.scala 42:21]
endmodule
