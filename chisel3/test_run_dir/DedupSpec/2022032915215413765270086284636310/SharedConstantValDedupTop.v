module SharedConstantValDedup(
  input  [7:0] io_in,
  output [7:0] io_out
);
  assign io_out = io_in + 8'h3; // @[DedupSpec.scala 53:19]
endmodule
module SharedConstantValDedupTop(
  input        clock,
  input        reset,
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire [7:0] inst0_io_in; // @[DedupSpec.scala 61:21]
  wire [7:0] inst0_io_out; // @[DedupSpec.scala 61:21]
  wire [7:0] inst1_io_in; // @[DedupSpec.scala 62:21]
  wire [7:0] inst1_io_out; // @[DedupSpec.scala 62:21]
  SharedConstantValDedup inst0 ( // @[DedupSpec.scala 61:21]
    .io_in(inst0_io_in),
    .io_out(inst0_io_out)
  );
  SharedConstantValDedup inst1 ( // @[DedupSpec.scala 62:21]
    .io_in(inst1_io_in),
    .io_out(inst1_io_out)
  );
  assign io_out = inst0_io_out + inst1_io_out; // @[DedupSpec.scala 65:26]
  assign inst0_io_in = io_in; // @[DedupSpec.scala 63:15]
  assign inst1_io_in = io_in; // @[DedupSpec.scala 64:15]
endmodule
