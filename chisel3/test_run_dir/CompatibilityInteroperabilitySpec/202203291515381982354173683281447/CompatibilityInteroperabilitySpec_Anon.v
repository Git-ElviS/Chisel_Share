module Child(
  input  [7:0] deq_bidir1_a,
  output [7:0] deq_bidir1_b,
  output [7:0] deq_bidir2_a,
  input  [7:0] deq_bidir2_b,
  output [7:0] deq_struct1_a,
  input  [7:0] deq_struct2_a,
  output [7:0] enq_bidir1_a,
  input  [7:0] enq_bidir1_b,
  input  [7:0] enq_bidir2_a,
  output [7:0] enq_bidir2_b,
  input  [7:0] enq_struct1_a,
  output [7:0] enq_struct2_a
);
  assign deq_bidir1_b = enq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 311:13]
  assign deq_bidir2_a = enq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 311:13]
  assign deq_struct1_a = enq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 311:13]
  assign enq_bidir1_a = deq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 311:13]
  assign enq_bidir2_b = deq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 311:13]
  assign enq_struct2_a = deq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 311:13]
endmodule
module CompatibilityInteroperabilitySpec_Anon(
  input  [7:0] deq_bidir1_a,
  output [7:0] deq_bidir1_b,
  output [7:0] deq_bidir2_a,
  input  [7:0] deq_bidir2_b,
  output [7:0] deq_struct1_a,
  input  [7:0] deq_struct2_a,
  output [7:0] enq_bidir1_a,
  input  [7:0] enq_bidir1_b,
  input  [7:0] enq_bidir2_a,
  output [7:0] enq_bidir2_b,
  input  [7:0] enq_struct1_a,
  output [7:0] enq_struct2_a
);
  wire [7:0] c1_deq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_deq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_deq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_deq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_deq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_deq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_enq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_enq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_enq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_enq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_enq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c1_enq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 317:24]
  wire [7:0] c2_deq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_deq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_deq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_deq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_deq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_deq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_enq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_enq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_enq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_enq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_enq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  wire [7:0] c2_enq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 318:24]
  Child c1 ( // @[CompatibilityInteroperabilitySpec.scala 317:24]
    .deq_bidir1_a(c1_deq_bidir1_a),
    .deq_bidir1_b(c1_deq_bidir1_b),
    .deq_bidir2_a(c1_deq_bidir2_a),
    .deq_bidir2_b(c1_deq_bidir2_b),
    .deq_struct1_a(c1_deq_struct1_a),
    .deq_struct2_a(c1_deq_struct2_a),
    .enq_bidir1_a(c1_enq_bidir1_a),
    .enq_bidir1_b(c1_enq_bidir1_b),
    .enq_bidir2_a(c1_enq_bidir2_a),
    .enq_bidir2_b(c1_enq_bidir2_b),
    .enq_struct1_a(c1_enq_struct1_a),
    .enq_struct2_a(c1_enq_struct2_a)
  );
  Child c2 ( // @[CompatibilityInteroperabilitySpec.scala 318:24]
    .deq_bidir1_a(c2_deq_bidir1_a),
    .deq_bidir1_b(c2_deq_bidir1_b),
    .deq_bidir2_a(c2_deq_bidir2_a),
    .deq_bidir2_b(c2_deq_bidir2_b),
    .deq_struct1_a(c2_deq_struct1_a),
    .deq_struct2_a(c2_deq_struct2_a),
    .enq_bidir1_a(c2_enq_bidir1_a),
    .enq_bidir1_b(c2_enq_bidir1_b),
    .enq_bidir2_a(c2_enq_bidir2_a),
    .enq_bidir2_b(c2_enq_bidir2_b),
    .enq_struct1_a(c2_enq_struct1_a),
    .enq_struct2_a(c2_enq_struct2_a)
  );
  assign deq_bidir1_b = c2_deq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 324:16]
  assign deq_bidir2_a = c2_deq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 324:16]
  assign deq_struct1_a = c2_deq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 324:16]
  assign enq_bidir1_a = c1_enq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 320:13]
  assign enq_bidir2_b = c1_enq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 320:13]
  assign enq_struct2_a = c1_enq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 320:13]
  assign c1_deq_bidir1_a = c2_enq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 322:16]
  assign c1_deq_bidir2_b = c2_enq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 322:16]
  assign c1_deq_struct2_a = c2_enq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 322:16]
  assign c1_enq_bidir1_b = enq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 320:13]
  assign c1_enq_bidir2_a = enq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 320:13]
  assign c1_enq_struct1_a = enq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 320:13]
  assign c2_deq_bidir1_a = deq_bidir1_a; // @[CompatibilityInteroperabilitySpec.scala 324:16]
  assign c2_deq_bidir2_b = deq_bidir2_b; // @[CompatibilityInteroperabilitySpec.scala 324:16]
  assign c2_deq_struct2_a = deq_struct2_a; // @[CompatibilityInteroperabilitySpec.scala 324:16]
  assign c2_enq_bidir1_b = c1_deq_bidir1_b; // @[CompatibilityInteroperabilitySpec.scala 322:16]
  assign c2_enq_bidir2_a = c1_deq_bidir2_a; // @[CompatibilityInteroperabilitySpec.scala 322:16]
  assign c2_enq_struct1_a = c1_deq_struct1_a; // @[CompatibilityInteroperabilitySpec.scala 322:16]
endmodule
