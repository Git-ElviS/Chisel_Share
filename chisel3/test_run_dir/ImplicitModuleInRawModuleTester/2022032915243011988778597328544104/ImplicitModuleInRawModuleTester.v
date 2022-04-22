module ImplicitModuleInRawModuleTester(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[RawModuleSpec.scala 49:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[RawModuleSpec.scala 50:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
