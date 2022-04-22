module IterateTester(
  input   clock,
  input   reset
);
  wire  _T_4 = ~reset; // @[Vec.scala 236:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $finish; // @[Vec.scala 240:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
