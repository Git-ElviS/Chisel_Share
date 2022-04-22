module HasDeadCodeChild(
  input  [31:0] io_a,
  output [31:0] io_b,
  output [31:0] io_c_0,
  output [31:0] io_c_1
);
  assign io_b = io_a; // @[DontTouchSpec.scala 14:8]
  assign io_c_0 = 32'h0;
  assign io_c_1 = 32'h0;
endmodule
module HasDeadCode(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  output [31:0] io_b
);
  wire [31:0] inst_io_a; // @[DontTouchSpec.scala 26:20]
  wire [31:0] inst_io_b; // @[DontTouchSpec.scala 26:20]
  wire [31:0] inst_io_c_0; // @[DontTouchSpec.scala 26:20]
  wire [31:0] inst_io_c_1; // @[DontTouchSpec.scala 26:20]
  wire [31:0] dead = io_a + 32'h1; // @[DontTouchSpec.scala 29:31]
  HasDeadCodeChild inst ( // @[DontTouchSpec.scala 26:20]
    .io_a(inst_io_a),
    .io_b(inst_io_b),
    .io_c_0(inst_io_c_0),
    .io_c_1(inst_io_c_1)
  );
  assign io_b = inst_io_b; // @[DontTouchSpec.scala 28:8]
  assign inst_io_a = io_a; // @[DontTouchSpec.scala 27:13]
endmodule
