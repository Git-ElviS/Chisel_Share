module LitInsideOutsideTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[LiteralExtractorSpec.scala 121:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[LiteralExtractorSpec.scala 126:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
