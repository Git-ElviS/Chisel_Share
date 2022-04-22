module VecLiteralSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_3 = ~reset; // @[VecLiteralSpec.scala 355:15]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"vw1(0) %x  vw1(1) %x\n",8'h18,8'h8); // @[VecLiteralSpec.scala 355:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $finish; // @[VecLiteralSpec.scala 359:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
