module Child(
  input   reset,
  input   io_in,
  input   io_en,
  output  io_out
);
  assign io_out = io_en ? io_in : reset; // @[CompatibilityInteroperabilitySpec.scala 250:22]
endmodule
module CompatibilityInteroperabilitySpec_Anon(
  input   clock,
  input   reset,
  input   io_in,
  input   io_en,
  output  io_out
);
  wire  child_reset; // @[CompatibilityInteroperabilitySpec.scala 254:27]
  wire  child_io_in; // @[CompatibilityInteroperabilitySpec.scala 254:27]
  wire  child_io_en; // @[CompatibilityInteroperabilitySpec.scala 254:27]
  wire  child_io_out; // @[CompatibilityInteroperabilitySpec.scala 254:27]
  Child child ( // @[CompatibilityInteroperabilitySpec.scala 254:27]
    .reset(child_reset),
    .io_in(child_io_in),
    .io_en(child_io_en),
    .io_out(child_io_out)
  );
  assign io_out = child_io_out; // @[CompatibilityInteroperabilitySpec.scala 255:12]
  assign child_reset = reset;
  assign child_io_in = io_in; // @[CompatibilityInteroperabilitySpec.scala 255:12]
  assign child_io_en = io_en; // @[CompatibilityInteroperabilitySpec.scala 255:12]
endmodule
