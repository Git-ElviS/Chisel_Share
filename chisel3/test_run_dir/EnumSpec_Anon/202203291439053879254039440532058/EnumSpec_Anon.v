module EnumSpec_Anon(
  input   clock,
  input   reset
);
  wire  _T_2 = ~reset; // @[EnumSpec.scala 15:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[EnumSpec.scala 16:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
