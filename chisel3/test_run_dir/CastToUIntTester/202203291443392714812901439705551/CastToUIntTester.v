module CastToUInt(
  input  [6:0] io_in,
  output [6:0] io_out
);
  assign io_out = io_in; // @[StrongEnum.scala 53:25]
endmodule
module CastToUIntTester(
  input   clock,
  input   reset
);
  wire [6:0] mod_io_in; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_io_out; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_1_io_in; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_1_io_out; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_2_io_in; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_2_io_out; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_3_io_in; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_3_io_out; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_4_io_in; // @[StrongEnum.scala 168:21]
  wire [6:0] mod_4_io_out; // @[StrongEnum.scala 168:21]
  wire  _T_2 = ~reset; // @[StrongEnum.scala 170:11]
  CastToUInt mod ( // @[StrongEnum.scala 168:21]
    .io_in(mod_io_in),
    .io_out(mod_io_out)
  );
  CastToUInt mod_1 ( // @[StrongEnum.scala 168:21]
    .io_in(mod_1_io_in),
    .io_out(mod_1_io_out)
  );
  CastToUInt mod_2 ( // @[StrongEnum.scala 168:21]
    .io_in(mod_2_io_in),
    .io_out(mod_2_io_out)
  );
  CastToUInt mod_3 ( // @[StrongEnum.scala 168:21]
    .io_in(mod_3_io_in),
    .io_out(mod_3_io_out)
  );
  CastToUInt mod_4 ( // @[StrongEnum.scala 168:21]
    .io_in(mod_4_io_in),
    .io_out(mod_4_io_out)
  );
  assign mod_io_in = 7'h0; // @[StrongEnum.scala 169:15]
  assign mod_1_io_in = 7'h1; // @[StrongEnum.scala 169:15]
  assign mod_2_io_in = 7'h2; // @[StrongEnum.scala 169:15]
  assign mod_3_io_in = 7'h64; // @[StrongEnum.scala 169:15]
  assign mod_4_io_in = 7'h65; // @[StrongEnum.scala 169:15]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(mod_io_out == 7'h0)) begin
          $fatal; // @[StrongEnum.scala 170:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(mod_io_out == 7'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 170:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(mod_1_io_out == 7'h1)) begin
          $fatal; // @[StrongEnum.scala 170:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(mod_1_io_out == 7'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 170:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(mod_2_io_out == 7'h2)) begin
          $fatal; // @[StrongEnum.scala 170:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(mod_2_io_out == 7'h2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 170:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(mod_3_io_out == 7'h64)) begin
          $fatal; // @[StrongEnum.scala 170:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(mod_3_io_out == 7'h64)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 170:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(mod_4_io_out == 7'h65)) begin
          $fatal; // @[StrongEnum.scala 170:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(mod_4_io_out == 7'h65)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n"); // @[StrongEnum.scala 170:11]
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
          $finish; // @[StrongEnum.scala 172:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
