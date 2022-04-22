module VecLiteralSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_3 = ~reset; // @[VecLiteralSpec.scala 168:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $finish; // @[VecLiteralSpec.scala 169:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
