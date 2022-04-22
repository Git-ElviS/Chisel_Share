module AnnotationTest(
  input        clock,
  input        reset,
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire  _T_2 = ~reset; // @[VerificationSpec.scala 76:22]
  assign io_out = io_in; // @[VerificationSpec.scala 75:14]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(io_in != 8'h2)) begin
          $fwrite(32'h80000002,
            "Assumption failed\n    at VerificationSpec.scala:77 val assm = chisel3.assume(io.in =/= 2.U)\n"); // @[VerificationSpec.scala 77:32]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(io_out == io_in)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at VerificationSpec.scala:78 val asst = chisel3.assert(io.out === io.in)\n"); // @[VerificationSpec.scala 78:32]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock) begin
    //
    if (~reset) begin
      cover(io_in == 8'h3); // @[VerificationSpec.scala 76:22]
    end
    //
    if (_T_2) begin
      assume(io_in != 8'h2); // @[VerificationSpec.scala 77:32]
    end
    //
    if (_T_2) begin
      assert(io_out == io_in); // @[VerificationSpec.scala 78:32]
    end
  end
endmodule
