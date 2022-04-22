module ShiftResetTester(
  input   clock,
  input   reset
);
  wire  _T_4 = ~reset; // @[Reg.scala 59:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $finish; // @[Reg.scala 60:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
