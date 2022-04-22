module MuxTester(
  input   clock,
  input   reset
);
  wire  _T_3 = ~reset; // @[MuxSpec.scala 11:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $finish; // @[MuxSpec.scala 22:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
