module WhenCondTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 4'hf; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = cycle + 4'h1; // @[Counter.scala 78:24]
  wire  pred_0 = cycle[0]; // @[When.scala 98:17]
  wire  pred_1 = cycle[1]; // @[When.scala 98:17]
  wire  pred_2 = cycle[2]; // @[When.scala 98:17]
  wire  pred_3 = cycle[3]; // @[When.scala 98:17]
  wire  w2 = pred_0 & pred_1;
  wire  w3 = pred_0 & (~pred_1 & pred_2);
  wire  w4 = pred_0 & (~pred_1 & ~pred_2 & pred_3);
  wire  w5 = pred_0 & (~pred_1 & ~pred_2 & ~pred_3);
  wire  w6 = ~pred_0;
  wire  _T_6 = ~reset; // @[When.scala 119:9]
  wire  _T_14 = pred_0 & ~pred_1; // @[When.scala 121:20]
  wire  _T_23 = _T_14 & ~pred_2; // @[When.scala 122:26]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 4'h0; // @[Counter.scala 62:40]
    end else begin
      cycle <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & ~(w2 == w2)) begin
          $fatal; // @[When.scala 120:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6 & ~(w2 == w2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:120 assert(w2 === (a && b))\n"); // @[When.scala 120:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & ~(w3 == (pred_0 & ~pred_1 & pred_2))) begin
          $fatal; // @[When.scala 121:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6 & ~(w3 == (pred_0 & ~pred_1 & pred_2))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:121 assert(w3 === (a && !b && c))\n"); // @[When.scala 121:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & ~(w4 == (_T_14 & ~pred_2 & pred_3))) begin
          $fatal; // @[When.scala 122:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6 & ~(w4 == (_T_14 & ~pred_2 & pred_3))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:122 assert(w4 === (a && !b && !c && d))\n"); // @[When.scala 122:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & ~(w5 == (_T_23 & ~pred_3))) begin
          $fatal; // @[When.scala 123:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6 & ~(w5 == (_T_23 & ~pred_3))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:123 assert(w5 === (a && !b && !c && !d))\n"); // @[When.scala 123:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & ~(w6 == w6)) begin
          $fatal; // @[When.scala 124:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6 & ~(w6 == w6)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:124 assert(w6 === !a)\n"); // @[When.scala 124:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_6) begin
          $finish; // @[When.scala 127:20]
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
  cycle = _RAND_0[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
