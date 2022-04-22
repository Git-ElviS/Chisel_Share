module ParameterizedOneHot(
  input        io_selectors_0,
  input        io_selectors_1,
  input        io_selectors_2,
  input        io_selectors_3,
  output [7:0] io_out
);
  wire [4:0] _io_out_T_8 = io_selectors_0 ? $signed(-5'sh3) : $signed(5'sh0); // @[Mux.scala 27:73]
  wire [4:0] _io_out_T_9 = io_selectors_1 ? $signed(-5'sh5) : $signed(5'sh0); // @[Mux.scala 27:73]
  wire [4:0] _io_out_T_10 = io_selectors_2 ? $signed(-5'sh7) : $signed(5'sh0); // @[Mux.scala 27:73]
  wire [4:0] _io_out_T_11 = io_selectors_3 ? $signed(-5'shb) : $signed(5'sh0); // @[Mux.scala 27:73]
  wire [4:0] _io_out_T_13 = $signed(_io_out_T_8) | $signed(_io_out_T_9); // @[Mux.scala 27:73]
  wire [4:0] _io_out_T_15 = $signed(_io_out_T_13) | $signed(_io_out_T_10); // @[Mux.scala 27:73]
  wire [4:0] _io_out_T_19 = $signed(_io_out_T_15) | $signed(_io_out_T_11); // @[Mux.scala 27:73]
  assign io_out = {{3{_io_out_T_19[4]}},_io_out_T_19}; // @[OneHotMuxSpec.scala 200:10]
endmodule
module ParameterizedOneHotTester(
  input   clock,
  input   reset
);
  wire  dut_io_selectors_0; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_io_selectors_1; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_io_selectors_2; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_io_selectors_3; // @[OneHotMuxSpec.scala 125:21]
  wire [7:0] dut_io_out; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_1_io_selectors_0; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_1_io_selectors_1; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_1_io_selectors_2; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_1_io_selectors_3; // @[OneHotMuxSpec.scala 125:21]
  wire [7:0] dut_1_io_out; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_2_io_selectors_0; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_2_io_selectors_1; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_2_io_selectors_2; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_2_io_selectors_3; // @[OneHotMuxSpec.scala 125:21]
  wire [7:0] dut_2_io_out; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_3_io_selectors_0; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_3_io_selectors_1; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_3_io_selectors_2; // @[OneHotMuxSpec.scala 125:21]
  wire  dut_3_io_selectors_3; // @[OneHotMuxSpec.scala 125:21]
  wire [7:0] dut_3_io_out; // @[OneHotMuxSpec.scala 125:21]
  wire  _T_4 = ~reset; // @[OneHotMuxSpec.scala 128:11]
  ParameterizedOneHot dut ( // @[OneHotMuxSpec.scala 125:21]
    .io_selectors_0(dut_io_selectors_0),
    .io_selectors_1(dut_io_selectors_1),
    .io_selectors_2(dut_io_selectors_2),
    .io_selectors_3(dut_io_selectors_3),
    .io_out(dut_io_out)
  );
  ParameterizedOneHot dut_1 ( // @[OneHotMuxSpec.scala 125:21]
    .io_selectors_0(dut_1_io_selectors_0),
    .io_selectors_1(dut_1_io_selectors_1),
    .io_selectors_2(dut_1_io_selectors_2),
    .io_selectors_3(dut_1_io_selectors_3),
    .io_out(dut_1_io_out)
  );
  ParameterizedOneHot dut_2 ( // @[OneHotMuxSpec.scala 125:21]
    .io_selectors_0(dut_2_io_selectors_0),
    .io_selectors_1(dut_2_io_selectors_1),
    .io_selectors_2(dut_2_io_selectors_2),
    .io_selectors_3(dut_2_io_selectors_3),
    .io_out(dut_2_io_out)
  );
  ParameterizedOneHot dut_3 ( // @[OneHotMuxSpec.scala 125:21]
    .io_selectors_0(dut_3_io_selectors_0),
    .io_selectors_1(dut_3_io_selectors_1),
    .io_selectors_2(dut_3_io_selectors_2),
    .io_selectors_3(dut_3_io_selectors_3),
    .io_out(dut_3_io_out)
  );
  assign dut_io_selectors_0 = 1'h1; // @[OneHotMuxSpec.scala 126:22]
  assign dut_io_selectors_1 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_io_selectors_2 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_io_selectors_3 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_1_io_selectors_0 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_1_io_selectors_1 = 1'h1; // @[OneHotMuxSpec.scala 126:22]
  assign dut_1_io_selectors_2 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_1_io_selectors_3 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_2_io_selectors_0 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_2_io_selectors_1 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_2_io_selectors_2 = 1'h1; // @[OneHotMuxSpec.scala 126:22]
  assign dut_2_io_selectors_3 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_3_io_selectors_0 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_3_io_selectors_1 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_3_io_selectors_2 = 1'h0; // @[OneHotMuxSpec.scala 126:22]
  assign dut_3_io_selectors_3 = 1'h1; // @[OneHotMuxSpec.scala 126:22]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(dut_io_out == 8'hfd)) begin
          $fatal; // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(dut_io_out == 8'hfd)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:128 assert(dut.io.out.asUInt() === v.S(8.W).asUInt())\n"); // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(dut_1_io_out == 8'hfb)) begin
          $fatal; // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(dut_1_io_out == 8'hfb)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:128 assert(dut.io.out.asUInt() === v.S(8.W).asUInt())\n"); // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(dut_2_io_out == 8'hf9)) begin
          $fatal; // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(dut_2_io_out == 8'hf9)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:128 assert(dut.io.out.asUInt() === v.S(8.W).asUInt())\n"); // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(dut_3_io_out == 8'hf5)) begin
          $fatal; // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(dut_3_io_out == 8'hf5)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:128 assert(dut.io.out.asUInt() === v.S(8.W).asUInt())\n"); // @[OneHotMuxSpec.scala 128:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4) begin
          $finish; // @[OneHotMuxSpec.scala 131:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
