module NoneOptionBundleTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[OptionBundle.scala 36:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[OptionBundle.scala 37:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
