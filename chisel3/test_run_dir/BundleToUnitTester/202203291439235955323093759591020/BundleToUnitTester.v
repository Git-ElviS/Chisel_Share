module BundleToUnitTester(
  input   clock,
  input   reset
);
  wire  _T_4 = ~reset; // @[BundleWire.scala 40:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $finish; // @[BundleWire.scala 42:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
