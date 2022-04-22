module ShiftTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] cntVal; // @[Counter.scala 62:40]
  wire  wrap_wrap = cntVal == 2'h2; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cntVal + 2'h1; // @[Counter.scala 78:24]
  wire [4:0] _GEN_6 = {{3'd0}, cntVal}; // @[Reg.scala 47:33]
  reg [4:0] sr_r; // @[Reg.scala 16:16]
  reg [4:0] sr_r_1; // @[Reg.scala 16:16]
  reg [4:0] sr; // @[Reg.scala 16:16]
  wire  _T_2 = ~reset; // @[Reg.scala 49:11]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cntVal <= 2'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cntVal <= 2'h0; // @[Counter.scala 88:28]
    end else begin
      cntVal <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    sr_r <= _GEN_6 + 5'h17; // @[Reg.scala 47:33]
    sr_r_1 <= sr_r; // @[Reg.scala 16:16 17:{18,22}]
    sr <= sr_r_1; // @[Reg.scala 16:16 17:{18,22}]
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset & ~(sr == 5'h17)) begin
          $fatal; // @[Reg.scala 49:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wrap_wrap & ~reset & ~(sr == 5'h17)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:49 assert(sr === start)\n"); // @[Reg.scala 49:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_2) begin
          $finish; // @[Reg.scala 50:9]
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
  cntVal = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  sr_r = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  sr_r_1 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  sr = _RAND_3[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
