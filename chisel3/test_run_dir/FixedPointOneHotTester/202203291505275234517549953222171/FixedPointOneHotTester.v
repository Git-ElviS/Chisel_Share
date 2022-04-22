module FixedPointOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[OneHotMuxSpec.scala 100:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[OneHotMuxSpec.scala 102:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
