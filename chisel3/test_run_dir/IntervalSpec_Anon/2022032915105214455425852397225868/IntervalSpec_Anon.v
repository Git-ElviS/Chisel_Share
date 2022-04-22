module IntervalSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_3 = ~reset; // @[IntervalSpec.scala 960:23]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $finish; // @[IntervalSpec.scala 961:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
