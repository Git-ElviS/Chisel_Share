module MultiPrintfTester(
  input   clock,
  input   reset
);
  wire  _T_1 = ~reset; // @[Printf.scala 22:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"x=%x y=%x",8'hfe,8'hff); // @[Printf.scala 22:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1) begin
          $finish; // @[Printf.scala 23:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
