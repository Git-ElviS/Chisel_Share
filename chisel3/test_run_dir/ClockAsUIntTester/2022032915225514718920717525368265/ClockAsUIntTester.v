module ClockAsUIntTester(
  input   clock,
  input   reset
);
  wire  _T_4 = ~reset; // @[Clock.scala 10:9]
  wire  _T_5 = ~1'h1; // @[Clock.scala 10:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~1'h1) begin
          $fatal; // @[Clock.scala 10:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~1'h1) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Clock.scala:10 assert(true.B.asClock.asUInt === 1.U)\n"); // @[Clock.scala 10:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_5) begin
          $fatal; // @[Clock.scala 11:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4 & _T_5) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Clock.scala:11 assert(true.B.asClock.asBool === true.B)\n"); // @[Clock.scala 11:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $finish; // @[Clock.scala 12:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
