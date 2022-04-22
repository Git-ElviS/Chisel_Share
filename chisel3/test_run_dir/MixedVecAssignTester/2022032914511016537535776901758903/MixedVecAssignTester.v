module MixedVecAssignTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[MixedVecSpec.scala 14:11]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[MixedVecSpec.scala 16:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
