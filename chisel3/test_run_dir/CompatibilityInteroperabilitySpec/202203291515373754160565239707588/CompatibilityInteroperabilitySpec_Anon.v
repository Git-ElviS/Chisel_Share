module PassthroughModule(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[Util.scala 19:10]
endmodule
module PassthroughRawModule(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[Util.scala 19:10]
endmodule
module CompatibilityInteroperabilitySpec_Anon(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  input         io_cond,
  output [31:0] io_out
);
  wire [31:0] children_0_io_in; // @[CompatibilityInteroperabilitySpec.scala 229:21]
  wire [31:0] children_0_io_out; // @[CompatibilityInteroperabilitySpec.scala 229:21]
  wire [31:0] children_1_io_in; // @[CompatibilityInteroperabilitySpec.scala 229:52]
  wire [31:0] children_1_io_out; // @[CompatibilityInteroperabilitySpec.scala 229:52]
  wire [31:0] children_2_io_in; // @[CompatibilityInteroperabilitySpec.scala 229:90]
  wire [31:0] children_2_io_out; // @[CompatibilityInteroperabilitySpec.scala 229:90]
  wire [31:0] _io_out_T_1 = children_0_io_out + children_1_io_out; // @[CompatibilityInteroperabilitySpec.scala 230:51]
  PassthroughModule children_0 ( // @[CompatibilityInteroperabilitySpec.scala 229:21]
    .io_in(children_0_io_in),
    .io_out(children_0_io_out)
  );
  PassthroughModule children_1 ( // @[CompatibilityInteroperabilitySpec.scala 229:52]
    .io_in(children_1_io_in),
    .io_out(children_1_io_out)
  );
  PassthroughRawModule children_2 ( // @[CompatibilityInteroperabilitySpec.scala 229:90]
    .io_in(children_2_io_in),
    .io_out(children_2_io_out)
  );
  assign io_out = _io_out_T_1 + children_2_io_out; // @[CompatibilityInteroperabilitySpec.scala 230:51]
  assign children_0_io_in = io_in; // @[CompatibilityInteroperabilitySpec.scala 232:25 233:25]
  assign children_1_io_in = io_in; // @[CompatibilityInteroperabilitySpec.scala 232:25 233:25]
  assign children_2_io_in = io_in; // @[CompatibilityInteroperabilitySpec.scala 232:25 233:25]
endmodule
