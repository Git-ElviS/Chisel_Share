module IntegerMathTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[IntegerMathSpec.scala 19:9]
  wire [2:0] _T_7 = 3'sh0 - -3'sh3; // @[IntegerMathSpec.scala 20:18]
  wire [3:0] _GEN_0 = {{1{_T_7[2]}},_T_7}; // @[IntegerMathSpec.scala 23:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~($signed(_T_7) == 3'sh3)) begin
          $fatal; // @[IntegerMathSpec.scala 20:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~($signed(_T_7) == 3'sh3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntegerMathSpec.scala:20 assert(sint.abs() === sintpos)\n"); // @[IntegerMathSpec.scala 20:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~($signed(_GEN_0) != 4'sh4)) begin
          $fatal; // @[IntegerMathSpec.scala 23:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~($signed(_GEN_0) != 4'sh4)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntegerMathSpec.scala:23 assert(sint.abs() =/= wrongSIntPos)\n"
            ); // @[IntegerMathSpec.scala 23:9]
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
          $finish; // @[IntegerMathSpec.scala 25:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
