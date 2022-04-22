module RecordDigitTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[RecordSpec.scala 100:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[RecordSpec.scala 101:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
