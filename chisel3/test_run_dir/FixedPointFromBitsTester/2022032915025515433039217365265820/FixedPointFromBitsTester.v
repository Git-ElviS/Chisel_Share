module FixedPointFromBitsTester(
  input   clock,
  input   reset
);
  wire [6:0] _T_2 = 7'sh0 - 7'sh38; // @[FixedPointSpec.scala 63:10]
  wire  _T_5 = ~reset; // @[FixedPointSpec.scala 63:9]
  wire [6:0] _T_9 = 7'sh0 - -7'sh38; // @[FixedPointSpec.scala 64:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~($signed(_T_2) == -7'sh38)) begin
          $fatal; // @[FixedPointSpec.scala 63:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~($signed(_T_2) == -7'sh38)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at FixedPointSpec.scala:63 assert(-positivefp === negativefp)\n"); // @[FixedPointSpec.scala 63:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(7'sh38 == $signed(_T_9))) begin
          $fatal; // @[FixedPointSpec.scala 64:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(7'sh38 == $signed(_T_9))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at FixedPointSpec.scala:64 assert(positivefp === -negativefp)\n"); // @[FixedPointSpec.scala 64:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~($signed(_T_9) == 7'sh38)) begin
          $fatal; // @[FixedPointSpec.scala 75:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~($signed(_T_9) == 7'sh38)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at FixedPointSpec.scala:75 assert(negativefp.abs() === positivefp)\n"); // @[FixedPointSpec.scala 75:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~($signed(_T_9) != -7'sh38)) begin
          $fatal; // @[FixedPointSpec.scala 76:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~($signed(_T_9) != -7'sh38)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at FixedPointSpec.scala:76 assert(negativefp.abs() =/= negativefp)\n"); // @[FixedPointSpec.scala 76:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5) begin
          $finish; // @[FixedPointSpec.scala 97:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
