module PlaSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_19 = ~reset; // @[PlaSpec.scala 52:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_19) begin
          $finish; // @[PlaSpec.scala 58:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
