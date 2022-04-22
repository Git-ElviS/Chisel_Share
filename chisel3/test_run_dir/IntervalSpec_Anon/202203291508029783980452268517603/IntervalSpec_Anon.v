module IntervalSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 817:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[IntervalSpec.scala 819:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
