module PassthroughModule(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[Util.scala 19:10]
endmodule
module BidirectionalTester3DTabulate(
  input   clock,
  input   reset
);
  wire [31:0] PassthroughModule_io_in; // @[Vec.scala 225:30]
  wire [31:0] PassthroughModule_io_out; // @[Vec.scala 225:30]
  wire [31:0] PassthroughModule_1_io_in; // @[Vec.scala 225:30]
  wire [31:0] PassthroughModule_1_io_out; // @[Vec.scala 225:30]
  wire [31:0] PassthroughModule_2_io_in; // @[Vec.scala 225:30]
  wire [31:0] PassthroughModule_2_io_out; // @[Vec.scala 225:30]
  wire  _T_2 = ~reset; // @[Vec.scala 227:13]
  PassthroughModule PassthroughModule ( // @[Vec.scala 225:30]
    .io_in(PassthroughModule_io_in),
    .io_out(PassthroughModule_io_out)
  );
  PassthroughModule PassthroughModule_1 ( // @[Vec.scala 225:30]
    .io_in(PassthroughModule_1_io_in),
    .io_out(PassthroughModule_1_io_out)
  );
  PassthroughModule PassthroughModule_2 ( // @[Vec.scala 225:30]
    .io_in(PassthroughModule_2_io_in),
    .io_out(PassthroughModule_2_io_out)
  );
  assign PassthroughModule_io_in = 32'h1; // @[Vec.scala 217:{43,43}]
  assign PassthroughModule_1_io_in = 32'h2; // @[Vec.scala 217:{43,43}]
  assign PassthroughModule_2_io_in = 32'h3; // @[Vec.scala 217:{43,43}]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(PassthroughModule_io_out == 32'h1)) begin
          $fatal; // @[Vec.scala 227:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(PassthroughModule_io_out == 32'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n"); // @[Vec.scala 227:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(PassthroughModule_1_io_out == 32'h2)) begin
          $fatal; // @[Vec.scala 227:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(PassthroughModule_1_io_out == 32'h2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n"); // @[Vec.scala 227:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(PassthroughModule_2_io_out == 32'h3)) begin
          $fatal; // @[Vec.scala 227:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(PassthroughModule_2_io_out == 32'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n"); // @[Vec.scala 227:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[Vec.scala 229:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
