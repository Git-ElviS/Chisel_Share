module CastFromLit(
  output [6:0] io_out,
  output       io_valid
);
  assign io_out = 7'h0; // @[StrongEnum.scala 62:10]
  assign io_valid = io_out == 7'h0 | io_out == 7'h1 | io_out == 7'h2 | io_out == 7'h64 | io_out == 7'h65; // @[StrongEnum.scala 63:22]
endmodule
module CastFromLit_1(
  output [6:0] io_out,
  output       io_valid
);
  assign io_out = 7'h1; // @[StrongEnum.scala 62:10]
  assign io_valid = io_out == 7'h0 | io_out == 7'h1 | io_out == 7'h2 | io_out == 7'h64 | io_out == 7'h65; // @[StrongEnum.scala 63:22]
endmodule
module CastFromLit_2(
  output [6:0] io_out,
  output       io_valid
);
  assign io_out = 7'h2; // @[StrongEnum.scala 62:10]
  assign io_valid = io_out == 7'h0 | io_out == 7'h1 | io_out == 7'h2 | io_out == 7'h64 | io_out == 7'h65; // @[StrongEnum.scala 63:22]
endmodule
module CastFromLit_3(
  output [6:0] io_out,
  output       io_valid
);
  assign io_out = 7'h64; // @[StrongEnum.scala 62:10]
  assign io_valid = io_out == 7'h0 | io_out == 7'h1 | io_out == 7'h2 | io_out == 7'h64 | io_out == 7'h65; // @[StrongEnum.scala 63:22]
endmodule
module CastFromLit_4(
  output [6:0] io_out,
  output       io_valid
);
  assign io_out = 7'h65; // @[StrongEnum.scala 62:10]
  assign io_valid = io_out == 7'h0 | io_out == 7'h1 | io_out == 7'h2 | io_out == 7'h64 | io_out == 7'h65; // @[StrongEnum.scala 63:22]
endmodule
module CastFromLitTester(
  input   clock,
  input   reset
);
  wire [6:0] mod_io_out; // @[StrongEnum.scala 177:21]
  wire  mod_io_valid; // @[StrongEnum.scala 177:21]
  wire [6:0] mod_1_io_out; // @[StrongEnum.scala 177:21]
  wire  mod_1_io_valid; // @[StrongEnum.scala 177:21]
  wire [6:0] mod_2_io_out; // @[StrongEnum.scala 177:21]
  wire  mod_2_io_valid; // @[StrongEnum.scala 177:21]
  wire [6:0] mod_3_io_out; // @[StrongEnum.scala 177:21]
  wire  mod_3_io_valid; // @[StrongEnum.scala 177:21]
  wire [6:0] mod_4_io_out; // @[StrongEnum.scala 177:21]
  wire  mod_4_io_valid; // @[StrongEnum.scala 177:21]
  wire  _T_2 = ~reset; // @[StrongEnum.scala 178:11]
  CastFromLit mod ( // @[StrongEnum.scala 177:21]
    .io_out(mod_io_out),
    .io_valid(mod_io_valid)
  );
  CastFromLit_1 mod_1 ( // @[StrongEnum.scala 177:21]
    .io_out(mod_1_io_out),
    .io_valid(mod_1_io_valid)
  );
  CastFromLit_2 mod_2 ( // @[StrongEnum.scala 177:21]
    .io_out(mod_2_io_out),
    .io_valid(mod_2_io_valid)
  );
  CastFromLit_3 mod_3 ( // @[StrongEnum.scala 177:21]
    .io_out(mod_3_io_out),
    .io_valid(mod_3_io_valid)
  );
  CastFromLit_4 mod_4 ( // @[StrongEnum.scala 177:21]
    .io_out(mod_4_io_out),
    .io_valid(mod_4_io_valid)
  );
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~mod_io_valid) begin
          $fatal; // @[StrongEnum.scala 179:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~mod_io_valid) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 179:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~mod_1_io_valid) begin
          $fatal; // @[StrongEnum.scala 179:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~mod_1_io_valid) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 179:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~mod_2_io_valid) begin
          $fatal; // @[StrongEnum.scala 179:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~mod_2_io_valid) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 179:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~mod_3_io_valid) begin
          $fatal; // @[StrongEnum.scala 179:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~mod_3_io_valid) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 179:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~mod_4_io_valid) begin
          $fatal; // @[StrongEnum.scala 179:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~mod_4_io_valid) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n"); // @[StrongEnum.scala 179:11]
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
          $finish; // @[StrongEnum.scala 181:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
