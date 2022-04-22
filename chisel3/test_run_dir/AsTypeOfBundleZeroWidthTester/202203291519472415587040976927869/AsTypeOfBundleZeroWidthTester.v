module AsTypeOfBundleZeroWidthTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[AsTypeOfTester.scala 38:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[AsTypeOfTester.scala 42:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
