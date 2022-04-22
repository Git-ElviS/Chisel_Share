module BundleLiteralSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_4 = ~reset; // @[BundleLiteralSpec.scala 36:23]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $finish; // @[BundleLiteralSpec.scala 49:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
