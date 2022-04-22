module BundleWireTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[BundleWire.scala 50:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[BundleWire.scala 53:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
