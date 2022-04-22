module PlaSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_34 = ~reset; // @[PlaSpec.scala 102:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_34) begin
          $finish; // @[PlaSpec.scala 108:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
