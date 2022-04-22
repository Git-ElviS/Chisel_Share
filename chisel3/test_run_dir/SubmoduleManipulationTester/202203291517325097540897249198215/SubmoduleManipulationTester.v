module SubmoduleManipulationTester(
  input   clock,
  input   reset
);
  wire  moduleSubmoduleC_io_in; // @[InjectionSpec.scala 110:36]
  SubmoduleC moduleSubmoduleC ( // @[InjectionSpec.scala 110:36]
    .io_in(moduleSubmoduleC_io_in)
  );
  assign moduleSubmoduleC_io_in = 1'h0;
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset) begin
          $finish; // @[InjectionSpec.scala 112:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
