module ShiftRegisterTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] cnt; // @[Counter.scala 62:40]
  wire  wrap_wrap = cnt == 3'h7; // @[Counter.scala 74:24]
  wire [2:0] _wrap_value_T_1 = cnt + 3'h1; // @[Counter.scala 78:24]
  reg [1:0] shifter_0; // @[Vec.scala 245:20]
  reg [1:0] shifter_1; // @[Vec.scala 245:20]
  reg [1:0] shifter_2; // @[Vec.scala 245:20]
  reg [1:0] shifter_3; // @[Vec.scala 245:20]
  wire  _T = cnt >= 3'h4; // @[Vec.scala 248:12]
  wire [2:0] expected = cnt - 3'h4; // @[Vec.scala 249:24]
  wire [2:0] _GEN_2 = {{1'd0}, shifter_0}; // @[Vec.scala 250:23]
  wire  _T_3 = ~reset; // @[Vec.scala 250:11]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 3'h0; // @[Counter.scala 62:40]
    end else begin
      cnt <= _wrap_value_T_1;
    end
    shifter_0 <= shifter_1; // @[Vec.scala 246:47]
    shifter_1 <= shifter_2; // @[Vec.scala 246:47]
    shifter_2 <= shifter_3; // @[Vec.scala 246:47]
    shifter_3 <= cnt[1:0]; // @[Vec.scala 247:18]
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(_GEN_2 == expected)) begin
          $fatal; // @[Vec.scala 250:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(_GEN_2 == expected)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:250 assert(shifter(0) === expected)\n"); // @[Vec.scala 250:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_3) begin
          $finish; // @[Vec.scala 253:9]
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
  cnt = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  shifter_0 = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  shifter_1 = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  shifter_2 = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  shifter_3 = _RAND_4[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
