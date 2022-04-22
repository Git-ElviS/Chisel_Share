module ModuloAssertTester(
  input   clock,
  input   reset
);
  wire [2:0] _GEN_0 = 3'h4 % 3'h2; // @[Assert.scala 48:15]
  wire  _T_3 = ~reset; // @[Assert.scala 48:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(_GEN_0[1:0] == 2'h0)) begin
          $fatal; // @[Assert.scala 48:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_GEN_0[1:0] == 2'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Assert.scala:48 assert((4.U %% 2.U) === 0.U)\n"); // @[Assert.scala 48:9]
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
          $finish; // @[Assert.scala 49:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
