module IntervalWrapTester(
  input   clock,
  input   reset
);
  wire [5:0] _GEN_0 = 5'sh6 - 5'sh8; // @[IntervalSpec.scala 313:{21,21}]
  wire [3:0] w1 = _GEN_0[3:0]; // @[IntervalSpec.scala 313:{21,21}]
  wire [5:0] _GEN_2 = 5'sh6 - 5'sh9; // @[IntervalSpec.scala 315:{21,21}]
  wire [4:0] w3 = _GEN_2[4:0]; // @[IntervalSpec.scala 315:{21,21}]
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 321:9]
  wire  _T_3 = ~($signed(w1) == -4'sh2); // @[IntervalSpec.scala 321:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~($signed(w1) == -4'sh2)) begin
          $fatal; // @[IntervalSpec.scala 321:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~($signed(w1) == -4'sh2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:321 assert(w1 === (-2).I)\n"); // @[IntervalSpec.scala 321:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~($signed(w3) == -5'sh3)) begin
          $fatal; // @[IntervalSpec.scala 323:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~($signed(w3) == -5'sh3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:323 assert(w3 === (-3).I)\n"); // @[IntervalSpec.scala 323:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & _T_3) begin
          $fatal; // @[IntervalSpec.scala 325:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & _T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:325 assert(w7 === (-2).I)\n"); // @[IntervalSpec.scala 325:9]
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
          $finish; // @[IntervalSpec.scala 327:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
