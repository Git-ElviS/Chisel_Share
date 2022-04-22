module SIntLitExtractTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[SIntOps.scala 88:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[SIntOps.scala 98:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
