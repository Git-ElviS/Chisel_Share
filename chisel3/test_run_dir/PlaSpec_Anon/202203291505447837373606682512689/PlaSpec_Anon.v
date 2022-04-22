module PlaSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_18 = ~reset; // @[PlaSpec.scala 26:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_18) begin
          $finish; // @[PlaSpec.scala 32:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
