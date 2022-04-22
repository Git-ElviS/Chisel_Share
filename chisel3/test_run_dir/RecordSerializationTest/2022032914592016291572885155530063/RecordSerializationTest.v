module RecordSerializationTest(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[RecordSpec.scala 50:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[RecordSpec.scala 55:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
