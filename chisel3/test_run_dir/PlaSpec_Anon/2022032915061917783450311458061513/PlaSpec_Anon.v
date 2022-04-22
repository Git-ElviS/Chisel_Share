module PlaSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_7 = ~reset; // @[PlaSpec.scala 72:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7) begin
          $finish; // @[PlaSpec.scala 74:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
