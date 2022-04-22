module IsOneOfTester(
  input   clock,
  input   reset
);
  wire  _T_3 = ~reset; // @[StrongEnum.scala 312:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $finish; // @[StrongEnum.scala 340:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
