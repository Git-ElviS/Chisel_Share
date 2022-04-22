module InternalBore(
  input   in,
  output  out
);
  assign out = in;
endmodule
module InternalBoreTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_in; // @[BoringUtilsSpec.scala 126:21]
  wire  dut_out; // @[BoringUtilsSpec.scala 126:21]
  reg  done_value; // @[Counter.scala 62:40]
  wire  _done_wrap_value_T_1 = done_value + 1'h1; // @[Counter.scala 78:24]
  wire  _T_1 = ~reset; // @[BoringUtilsSpec.scala 21:20]
  InternalBore dut ( // @[BoringUtilsSpec.scala 126:21]
    .in(dut_in),
    .out(dut_out)
  );
  assign dut_in = 1'h1; // @[BoringUtilsSpec.scala 127:12]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      done_value <= 1'h0; // @[Counter.scala 62:40]
    end else begin
      done_value <= _done_wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_value & ~reset) begin
          $finish; // @[BoringUtilsSpec.scala 21:20]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~dut_out & _T_1) begin
          $fatal; // @[BoringUtilsSpec.scala 128:19]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~dut_out) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BoringUtilsSpec.scala:128 chisel3.assert(dut.out === true.B)\n"
            ); // @[BoringUtilsSpec.scala 128:19]
        end
    `ifdef PRINTF_COND
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
  done_value = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
