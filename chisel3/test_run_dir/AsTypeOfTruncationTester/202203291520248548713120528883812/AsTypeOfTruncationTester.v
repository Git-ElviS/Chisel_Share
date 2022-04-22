module AsTypeOfTruncationTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[AsTypeOfTester.scala 61:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[AsTypeOfTester.scala 65:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
