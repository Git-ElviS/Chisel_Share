module WhenTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] value; // @[Counter.scala 62:40]
  wire  wrap = value == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _value_T_1 = value + 2'h1; // @[Counter.scala 78:24]
  wire [1:0] _GEN_1 = value == 2'h2 ? 2'h3 : 2'h0; // @[When.scala 19:33 20:9 22:9]
  wire [1:0] _GEN_2 = value == 2'h1 ? 2'h2 : _GEN_1; // @[When.scala 17:33 18:9]
  wire [1:0] _GEN_3 = value == 2'h0 ? 2'h1 : _GEN_2; // @[When.scala 15:27 16:9]
  wire [2:0] out = {{1'd0}, _GEN_3}; // @[When.scala 14:17]
  wire [2:0] _GEN_4 = {{1'd0}, _value_T_1}; // @[When.scala 25:14]
  wire  _T_7 = ~reset; // @[When.scala 25:9]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      value <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      value <= _value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(out == _GEN_4)) begin
          $fatal; // @[When.scala 25:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(out == _GEN_4)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:25 assert(out === cnt.value + 1.U)\n"); // @[When.scala 25:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_7) begin
          $finish; // @[When.scala 28:9]
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
  value = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
