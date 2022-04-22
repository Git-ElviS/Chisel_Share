module NextTester(
  input   clock,
  input   reset
);
  wire  _T_11 = ~reset; // @[StrongEnum.scala 270:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_11) begin
          $finish; // @[StrongEnum.scala 272:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
