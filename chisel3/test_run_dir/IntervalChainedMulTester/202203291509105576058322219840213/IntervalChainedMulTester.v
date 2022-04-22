module IntervalChainedMulTester(
  input   clock,
  input   reset
);
  wire [5:0] _GEN_0 = 3'sh2 * 3'sh2; // @[IntervalSpec.scala 388:{25,25}]
  wire [3:0] _intervalResult_T = _GEN_0[3:0]; // @[IntervalSpec.scala 388:{25,25}]
  wire [6:0] _GEN_2 = $signed(_intervalResult_T) * 3'sh2; // @[IntervalSpec.scala 388:{31,31}]
  wire [4:0] _intervalResult_T_1 = _GEN_2[4:0]; // @[IntervalSpec.scala 388:{31,31}]
  wire [7:0] _GEN_4 = $signed(_intervalResult_T_1) * 3'sh2; // @[IntervalSpec.scala 388:{37,37}]
  wire [5:0] _intervalResult_T_2 = _GEN_4[5:0]; // @[IntervalSpec.scala 388:{37,37}]
  wire [8:0] _GEN_6 = $signed(_intervalResult_T_2) * 3'sh2; // @[IntervalSpec.scala 388:{43,43}]
  wire [6:0] _intervalResult_T_3 = _GEN_6[6:0]; // @[IntervalSpec.scala 388:{43,43}]
  wire [9:0] _GEN_8 = $signed(_intervalResult_T_3) * 3'sh2; // @[IntervalSpec.scala 388:{49,49}]
  wire [7:0] _intervalResult_T_4 = _GEN_8[7:0]; // @[IntervalSpec.scala 388:{49,49}]
  wire [10:0] _GEN_10 = $signed(_intervalResult_T_4) * 3'sh2; // @[IntervalSpec.scala 388:{55,55}]
  wire [8:0] intervalResult = _GEN_10[8:0]; // @[IntervalSpec.scala 388:{55,55}]
  wire [3:0] _uintResult_T = 2'h2 * 2'h2; // @[IntervalSpec.scala 389:21]
  wire [5:0] _uintResult_T_1 = _uintResult_T * 2'h2; // @[IntervalSpec.scala 389:27]
  wire [7:0] _uintResult_T_2 = _uintResult_T_1 * 2'h2; // @[IntervalSpec.scala 389:33]
  wire [9:0] _uintResult_T_3 = _uintResult_T_2 * 2'h2; // @[IntervalSpec.scala 389:39]
  wire [11:0] _uintResult_T_4 = _uintResult_T_3 * 2'h2; // @[IntervalSpec.scala 389:45]
  wire [13:0] uintResult = _uintResult_T_4 * 2'h2; // @[IntervalSpec.scala 389:51]
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 391:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~($signed(intervalResult) == 9'sh80)) begin
          $fatal; // @[IntervalSpec.scala 391:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~($signed(intervalResult) == 9'sh80)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:391 assert(intervalResult === 128.I)\n"); // @[IntervalSpec.scala 391:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(uintResult == 14'h80)) begin
          $fatal; // @[IntervalSpec.scala 392:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(uintResult == 14'h80)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:392 assert(uintResult === 128.U)\n"); // @[IntervalSpec.scala 392:9]
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
          $finish; // @[IntervalSpec.scala 393:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
