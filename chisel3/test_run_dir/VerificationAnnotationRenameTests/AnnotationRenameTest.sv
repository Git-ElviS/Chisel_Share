module AnnotationRenameTest(
  input        clock,
  input        reset,
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire  _T_2 = ~reset; // @[VerificationSpec.scala 123:35]
  assign io_out = io_in; // @[VerificationSpec.scala 121:14]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(io_in == 8'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at VerificationSpec.scala:123 val goodbye = chisel3.assert(io.in === 1.U)\n"); // @[VerificationSpec.scala 123:35]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(io_in != 8'h2)) begin
          $fwrite(32'h80000002,
            "Assumption failed\n    at VerificationSpec.scala:127 VerifAnnotation.annotate(chisel3.assume(io.in =/= 2.U).suggestName(\"howdy\"))\n"
            ); // @[VerificationSpec.scala 127:46]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock) begin
    //
    if (~reset) begin
      assert(io_in == 8'h1); // @[VerificationSpec.scala 123:35]
    end
    //
    if (_T_2) begin
      assume(io_in != 8'h2); // @[VerificationSpec.scala 127:46]
    end
  end
endmodule
