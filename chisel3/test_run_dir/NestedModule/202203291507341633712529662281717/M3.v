module Not(
  input   io_i,
  output  io_o
);
  assign io_o = ~io_i; // @[TraceSpec.scala 270:15]
endmodule
module M2(
  input   io_i,
  output  io_o
);
  wire  m1_io_i;
  wire  m1_io_o;
  wire  m1_not_io_i; // @[TraceSpec.scala 275:23]
  wire  m1_not_io_o; // @[TraceSpec.scala 275:23]
  wire  not__io_i; // @[TraceSpec.scala 282:23]
  wire  not__io_o; // @[TraceSpec.scala 282:23]
  Not m1_not ( // @[TraceSpec.scala 275:23]
    .io_i(m1_not_io_i),
    .io_o(m1_not_io_o)
  );
  Not not_ ( // @[TraceSpec.scala 282:23]
    .io_i(not__io_i),
    .io_o(not__io_o)
  );
  assign m1_io_o = m1_not_io_o; // @[TraceSpec.scala 276:14]
  assign m1_not_io_i = m1_io_i; // @[TraceSpec.scala 276:14]
  assign io_o = m1_io_o & not__io_o; // @[TraceSpec.scala 287:23]
  assign m1_io_i = io_i; // @[TraceSpec.scala 284:15]
  assign not__io_i = io_i; // @[TraceSpec.scala 285:16]
endmodule
module M3(
  input   clock,
  input   reset,
  input   io_i,
  output  io_o
);
  wire  m2_io_i; // @[TraceSpec.scala 292:22]
  wire  m2_io_o; // @[TraceSpec.scala 292:22]
  M2 m2 ( // @[TraceSpec.scala 292:22]
    .io_i(m2_io_i),
    .io_o(m2_io_o)
  );
  assign io_o = m2_io_o; // @[TraceSpec.scala 293:10]
  assign m2_io_i = io_i; // @[TraceSpec.scala 293:10]
endmodule
