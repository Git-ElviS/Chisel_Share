module HasDeadCodeChild(
  input  [31:0] io_a,
  output [31:0] io_b
);
  assign io_b = io_a; // @[DontTouchSpec.scala 14:8]
endmodule
module HasDeadCode(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  output [31:0] io_b
);
  wire [31:0] inst_io_a; // @[DontTouchSpec.scala 26:20]
  wire [31:0] inst_io_b; // @[DontTouchSpec.scala 26:20]
  HasDeadCodeChild inst ( // @[DontTouchSpec.scala 26:20]
    .io_a(inst_io_a),
    .io_b(inst_io_b)
  );
  assign io_b = inst_io_b; // @[DontTouchSpec.scala 28:8]
  assign inst_io_a = io_a; // @[DontTouchSpec.scala 27:13]
endmodule
