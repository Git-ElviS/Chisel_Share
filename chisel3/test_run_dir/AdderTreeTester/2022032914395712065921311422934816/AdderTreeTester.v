module AdderTreeTester(
  input   clock,
  input   reset
);
  wire  _T_1 = ~reset; // @[AdderTree.scala 21:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1) begin
          $finish; // @[AdderTree.scala 22:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
