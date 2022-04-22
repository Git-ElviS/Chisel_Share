module SIntOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[OneHotMuxSpec.scala 83:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[OneHotMuxSpec.scala 85:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
