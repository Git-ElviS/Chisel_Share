module IntervalChainedSubTester(
  input   clock,
  input   reset
);
  wire [6:0] _GEN_0 = 6'sh11 - 6'sh2; // @[IntervalSpec.scala 403:{27,27}]
  wire [4:0] _intervalResult1_T = _GEN_0[4:0]; // @[IntervalSpec.scala 403:{27,27}]
  wire [5:0] _GEN_2 = $signed(_intervalResult1_T) - 5'sh2; // @[IntervalSpec.scala 403:{33,33}]
  wire [4:0] _intervalResult1_T_1 = _GEN_2[4:0]; // @[IntervalSpec.scala 403:{33,33}]
  wire [5:0] _GEN_4 = $signed(_intervalResult1_T_1) - 5'sh2; // @[IntervalSpec.scala 403:{39,39}]
  wire [4:0] _intervalResult1_T_2 = _GEN_4[4:0]; // @[IntervalSpec.scala 403:{39,39}]
  wire [5:0] _GEN_6 = $signed(_intervalResult1_T_2) - 5'sh2; // @[IntervalSpec.scala 403:{45,45}]
  wire [4:0] _intervalResult1_T_3 = _GEN_6[4:0]; // @[IntervalSpec.scala 403:{45,45}]
  wire [5:0] _GEN_8 = $signed(_intervalResult1_T_3) - 5'sh2; // @[IntervalSpec.scala 403:{51,51}]
  wire [3:0] _intervalResult1_T_4 = _GEN_8[3:0]; // @[IntervalSpec.scala 403:{51,51}]
  wire [4:0] _GEN_10 = $signed(_intervalResult1_T_4) - 4'sh2; // @[IntervalSpec.scala 403:{57,57}]
  wire [3:0] intervalResult1 = _GEN_10[3:0]; // @[IntervalSpec.scala 403:{57,57}]
  wire [5:0] _uIntResult_T = 5'h11 - 5'h2; // @[IntervalSpec.scala 405:22]
  wire [6:0] _uIntResult_T_2 = _uIntResult_T - 6'h2; // @[IntervalSpec.scala 405:29]
  wire [7:0] _uIntResult_T_4 = _uIntResult_T_2 - 7'h2; // @[IntervalSpec.scala 405:36]
  wire [8:0] _uIntResult_T_6 = _uIntResult_T_4 - 8'h2; // @[IntervalSpec.scala 405:43]
  wire [9:0] _uIntResult_T_8 = _uIntResult_T_6 - 9'h2; // @[IntervalSpec.scala 405:50]
  wire [10:0] uIntResult = _uIntResult_T_8 - 10'h2; // @[IntervalSpec.scala 405:57]
  wire [7:0] _fixedResult_T_1 = $signed(_GEN_0) - 7'sh2; // @[IntervalSpec.scala 406:46]
  wire [8:0] _fixedResult_T_2 = $signed(_fixedResult_T_1) - 8'sh2; // @[IntervalSpec.scala 406:61]
  wire [9:0] _fixedResult_T_3 = $signed(_fixedResult_T_2) - 9'sh2; // @[IntervalSpec.scala 406:76]
  wire [10:0] _fixedResult_T_4 = $signed(_fixedResult_T_3) - 10'sh2; // @[IntervalSpec.scala 407:14]
  wire [11:0] fixedResult = $signed(_fixedResult_T_4) - 11'sh2; // @[IntervalSpec.scala 407:29]
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 410:9]
  wire [11:0] _T_8 = $signed(_fixedResult_T_4) - 11'sh2; // @[IntervalSpec.scala 412:22]
  wire  _T_16 = ~($signed(intervalResult1) == 4'sh5); // @[IntervalSpec.scala 413:9]
  wire [7:0] _GEN_24 = 7'sh0 - -7'sh38; // @[IntervalSpec.scala 420:{10,10}]
  wire [6:0] _T_25 = _GEN_24[6:0]; // @[IntervalSpec.scala 420:{10,10}]
  wire [7:0] _GEN_26 = 7'sh0 - 7'sh38; // @[IntervalSpec.scala 421:{31,31}]
  wire [6:0] _T_30 = _GEN_26[6:0]; // @[IntervalSpec.scala 421:{31,31}]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(uIntResult == 11'h5)) begin
          $fatal; // @[IntervalSpec.scala 410:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(uIntResult == 11'h5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:410 assert(uIntResult === 5.U)\n"); // @[IntervalSpec.scala 410:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~($signed(fixedResult) == 12'sh5)) begin
          $fatal; // @[IntervalSpec.scala 411:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~($signed(fixedResult) == 12'sh5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:411 assert(sIntResult === 5.S)\n"); // @[IntervalSpec.scala 411:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(_T_8 == 12'h5)) begin
          $fatal; // @[IntervalSpec.scala 412:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(_T_8 == 12'h5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:412 assert(fixedResult.asUInt === 5.U)\n"); // @[IntervalSpec.scala 412:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~($signed(intervalResult1) == 4'sh5)) begin
          $fatal; // @[IntervalSpec.scala 413:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~($signed(intervalResult1) == 4'sh5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:413 assert(intervalResult1 === 5.I)\n"); // @[IntervalSpec.scala 413:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & _T_16) begin
          $fatal; // @[IntervalSpec.scala 414:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & _T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:414 assert(intervalResult2 === 5.I)\n"); // @[IntervalSpec.scala 414:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~($signed(_T_25) == 7'sh38)) begin
          $fatal; // @[IntervalSpec.scala 420:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~($signed(_T_25) == 7'sh38)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at IntervalSpec.scala:420 assert(-negativeInterval === positiveInterval)\n"); // @[IntervalSpec.scala 420:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(-7'sh38 == $signed(_T_30))) begin
          $fatal; // @[IntervalSpec.scala 421:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(-7'sh38 == $signed(_T_30))) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at IntervalSpec.scala:421 assert(negativeInterval === -positiveInterval)\n"); // @[IntervalSpec.scala 421:9]
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
          $finish; // @[IntervalSpec.scala 423:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
