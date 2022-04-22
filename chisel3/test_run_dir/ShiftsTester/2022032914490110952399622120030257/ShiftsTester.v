module ShiftsTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[Reg.scala 81:15]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[Reg.scala 83:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
