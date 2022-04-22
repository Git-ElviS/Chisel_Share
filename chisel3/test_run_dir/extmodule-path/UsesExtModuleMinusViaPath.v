module UsesExtModuleMinusViaPath(
  input         clock,
  input         reset,
  input  [15:0] io_in1,
  input  [15:0] io_in2,
  output [15:0] io_out
);
  wire [15:0] mod0_io_in1; // @[ExtModuleImpl.scala 91:20]
  wire [15:0] mod0_io_in2; // @[ExtModuleImpl.scala 91:20]
  wire [15:0] mod0_io_out; // @[ExtModuleImpl.scala 91:20]
  ExtModuleMinusPath mod0 ( // @[ExtModuleImpl.scala 91:20]
    .io_in1(mod0_io_in1),
    .io_in2(mod0_io_in2),
    .io_out(mod0_io_out)
  );
  assign io_out = mod0_io_out; // @[ExtModuleImpl.scala 95:10]
  assign mod0_io_in1 = io_in1; // @[ExtModuleImpl.scala 93:15]
  assign mod0_io_in2 = io_in2; // @[ExtModuleImpl.scala 94:15]
endmodule
