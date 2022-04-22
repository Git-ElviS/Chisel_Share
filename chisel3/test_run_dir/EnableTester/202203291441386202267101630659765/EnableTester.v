module EnableTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [28:0] ens; // @[Counter.scala 20:20]
  reg [4:0] cntEnVal; // @[Counter.scala 62:40]
  wire [4:0] _cntEnVal_wrap_value_T_1 = cntEnVal + 5'h1; // @[Counter.scala 78:24]
  reg [5:0] done_value; // @[Counter.scala 62:40]
  wire  done_wrap_wrap = done_value == 6'h20; // @[Counter.scala 74:24]
  wire [5:0] _done_wrap_value_T_1 = done_value + 6'h1; // @[Counter.scala 78:24]
  wire  _T_2 = ~reset; // @[Counter.scala 27:11]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 20:20]
      ens <= 29'h14b5af3e; // @[Counter.scala 20:20]
    end else begin
      ens <= {{1'd0}, ens[28:1]}; // @[Counter.scala 21:7]
    end
    if (reset) begin // @[Counter.scala 62:40]
      cntEnVal <= 5'h0; // @[Counter.scala 62:40]
    end else if (ens[0]) begin // @[Counter.scala 120:16]
      cntEnVal <= _cntEnVal_wrap_value_T_1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Counter.scala 62:40]
      done_value <= 6'h0; // @[Counter.scala 62:40]
    end else if (done_wrap_wrap) begin // @[Counter.scala 88:20]
      done_value <= 6'h0; // @[Counter.scala 88:28]
    end else begin
      done_value <= _done_wrap_value_T_1; // @[Counter.scala 78:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_wrap_wrap & ~reset & ~(cntEnVal == 5'h12)) begin
          $fatal; // @[Counter.scala 27:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (done_wrap_wrap & ~reset & ~(cntEnVal == 5'h12)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Counter.scala:27 assert(cntEnVal === popCount(seed).asUInt)\n"
            ); // @[Counter.scala 27:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_wrap_wrap & _T_2) begin
          $finish; // @[Counter.scala 28:9]
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
  ens = _RAND_0[28:0];
  _RAND_1 = {1{`RANDOM}};
  cntEnVal = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  done_value = _RAND_2[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
