module BitwiseOpsTester(
  input   clock,
  input   reset
);
  wire  _T_3 = ~reset; // @[BitwiseOps.scala 12:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $finish; // @[BitwiseOps.scala 18:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
