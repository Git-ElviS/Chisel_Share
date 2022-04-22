module BundleLiteralSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[BundleLiteralSpec.scala 258:23]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[BundleLiteralSpec.scala 259:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
