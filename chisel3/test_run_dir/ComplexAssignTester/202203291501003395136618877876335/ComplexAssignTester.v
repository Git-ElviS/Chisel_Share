module ComplexAssign(
  input         io_e,
  input  [31:0] io_in_re,
  input  [31:0] io_in_im
);
endmodule
module ComplexAssignTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_io_e; // @[ComplexAssign.scala 31:19]
  wire [31:0] dut_io_in_re; // @[ComplexAssign.scala 31:19]
  wire [31:0] dut_io_in_im; // @[ComplexAssign.scala 31:19]
  reg  cnt; // @[Counter.scala 62:40]
  wire  _wrap_value_T_1 = cnt + 1'h1; // @[Counter.scala 78:24]
  wire [31:0] _re_correct_T = dut_io_e ? dut_io_in_re : 32'h0; // @[ComplexAssign.scala 35:41]
  wire  re_correct = 32'h2780e507 == _re_correct_T; // @[ComplexAssign.scala 35:34]
  wire [31:0] _im_correct_T = dut_io_e ? dut_io_in_im : 32'h0; // @[ComplexAssign.scala 36:41]
  wire  im_correct = 32'he310d69 == _im_correct_T; // @[ComplexAssign.scala 36:34]
  wire  _T_2 = ~reset; // @[ComplexAssign.scala 37:9]
  ComplexAssign dut ( // @[ComplexAssign.scala 31:19]
    .io_e(dut_io_e),
    .io_in_re(dut_io_in_re),
    .io_in_im(dut_io_in_im)
  );
  assign dut_io_e = 1'h1; // @[ComplexAssign.scala 34:{12,12}]
  assign dut_io_in_re = 32'h2780e507; // @[ComplexAssign.scala 32:16]
  assign dut_io_in_im = 32'he310d69; // @[ComplexAssign.scala 33:16]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 1'h0; // @[Counter.scala 62:40]
    end else begin
      cnt <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(re_correct & im_correct)) begin
          $fatal; // @[ComplexAssign.scala 37:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(re_correct & im_correct)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at ComplexAssign.scala:37 assert(re_correct && im_correct)\n"); // @[ComplexAssign.scala 37:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (cnt & _T_2) begin
          $finish; // @[ComplexAssign.scala 39:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  cnt = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
