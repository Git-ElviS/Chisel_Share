module PrintfAnnotationTest(
  input   clock,
  input   reset
);
  wire  _T_1 = ~reset; // @[PrintableSpec.scala 224:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"hello AnonymousBundle(foo -> %d, bar -> %d)",32'h0,32'h0); // @[PrintableSpec.scala 224:25]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"goodbye AnonymousBundle(foo -> %d, bar -> %d)",32'h0,32'h0); // @[PrintableSpec.scala 226:39]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"adieu AnonymousBundle(foo -> %d, bar -> %d)",32'h0,32'h0); // @[PrintableSpec.scala 227:39]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
