module ComposedMultiIOTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[MultiIOModule.scala 44:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[MultiIOModule.scala 46:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
