module ResetTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  wasReset; // @[Counter.scala 34:25]
  reg [2:0] value; // @[Counter.scala 62:40]
  wire [2:0] _value_wrap_value_T_1 = value + 3'h1; // @[Counter.scala 78:24]
  wire  triggerReset = value == 3'h3; // @[Counter.scala 37:25]
  wire  _T_2 = ~reset; // @[Counter.scala 40:11]
  always @(posedge clock) begin
    wasReset <= value == 3'h3; // @[Counter.scala 37:25]
    if (reset) begin // @[Counter.scala 62:40]
      value <= 3'h0; // @[Counter.scala 62:40]
    end else if (triggerReset) begin // @[Counter.scala 137:17]
      value <= 3'h0; // @[Counter.scala 99:11]
    end else begin
      value <= _value_wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wasReset & ~reset & ~(value == 3'h0)) begin
          $fatal; // @[Counter.scala 40:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wasReset & ~reset & ~(value == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Counter.scala:40 assert(value === 0.U)\n"); // @[Counter.scala 40:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wasReset & _T_2) begin
          $finish; // @[Counter.scala 41:9]
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
  wasReset = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  value = _RAND_1[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
