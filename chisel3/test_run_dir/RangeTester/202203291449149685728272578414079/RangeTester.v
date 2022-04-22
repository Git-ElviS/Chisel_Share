module RangeTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] cnt; // @[Counter.scala 62:40]
  wire  wrap_wrap = cnt == 4'h6; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = cnt - 4'h1; // @[Counter.scala 81:24]
  reg  checkWrap; // @[Counter.scala 55:26]
  wire  _T_2 = ~reset; // @[Counter.scala 58:11]
  wire  _GEN_5 = wrap_wrap | checkWrap; // @[Counter.scala 60:20 62:15 55:26]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 4'hc; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cnt <= 4'hc; // @[Counter.scala 88:28]
    end else begin
      cnt <= _wrap_value_T_1; // @[Counter.scala 81:15]
    end
    if (reset) begin // @[Counter.scala 55:26]
      checkWrap <= 1'h0; // @[Counter.scala 55:26]
    end else if (!(checkWrap)) begin // @[Counter.scala 57:19]
      checkWrap <= _GEN_5;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (checkWrap & ~reset & ~(cnt == 4'hc)) begin
          $fatal; // @[Counter.scala 58:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (checkWrap & ~reset & ~(cnt == 4'hc)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Counter.scala:58 assert(cnt === r.head.U)\n"); // @[Counter.scala 58:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (checkWrap & _T_2) begin
          $finish; // @[Counter.scala 59:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~checkWrap & wrap_wrap & _T_2 & ~wrap_wrap) begin
          $fatal; // @[Counter.scala 61:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~checkWrap & wrap_wrap & _T_2 & ~wrap_wrap) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Counter.scala:61 assert(cnt === r.last.U)\n"); // @[Counter.scala 61:11]
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
  cnt = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  checkWrap = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
