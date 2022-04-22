module UsesExtModuleMinusViaResource(
  input         clock,
  input         reset,
  input  [15:0] io_in1,
  input  [15:0] io_in2,
  output [15:0] io_out
);
  wire [15:0] mod0_io_in1; // @[ExtModuleImpl.scala 77:20]
  wire [15:0] mod0_io_in2; // @[ExtModuleImpl.scala 77:20]
  wire [15:0] mod0_io_out; // @[ExtModuleImpl.scala 77:20]
  ExtModuleMinus mod0 ( // @[ExtModuleImpl.scala 77:20]
    .io_in1(mod0_io_in1),
    .io_in2(mod0_io_in2),
    .io_out(mod0_io_out)
  );
  assign io_out = mod0_io_out; // @[ExtModuleImpl.scala 81:10]
  assign mod0_io_in1 = io_in1; // @[ExtModuleImpl.scala 79:15]
  assign mod0_io_in2 = io_in2; // @[ExtModuleImpl.scala 80:15]
endmodule
