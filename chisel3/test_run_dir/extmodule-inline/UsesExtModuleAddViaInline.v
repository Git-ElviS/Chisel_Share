module UsesExtModuleAddViaInline(
  input         clock,
  input         reset,
  input  [15:0] io_in,
  output [15:0] io_out
);
  wire [15:0] blackBoxAdd_io_in; // @[ExtModuleImpl.scala 45:27]
  wire [15:0] blackBoxAdd_io_out; // @[ExtModuleImpl.scala 45:27]
  ExtModuleAdd blackBoxAdd ( // @[ExtModuleImpl.scala 45:27]
    .io_in(blackBoxAdd_io_in),
    .io_out(blackBoxAdd_io_out)
  );
  assign io_out = blackBoxAdd_io_out; // @[ExtModuleImpl.scala 47:10]
  assign blackBoxAdd_io_in = io_in; // @[ExtModuleImpl.scala 46:21]
endmodule
