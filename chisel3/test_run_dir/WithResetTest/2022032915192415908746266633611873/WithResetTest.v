module WithResetTest(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] cycle; // @[Counter.scala 62:40]
  wire  _T = cycle < 4'h7; // @[MultiClockSpec.scala 62:14]
  wire  _T_5 = cycle == 4'h7; // @[MultiClockSpec.scala 64:20]
  wire  reset2 = cycle < 4'h7 ? 1'h0 : _T_5; // @[MultiClockSpec.scala 62:21]
  reg [7:0] reg_; // @[MultiClockSpec.scala 58:56]
  wire [7:0] _reg_T_3 = reg_ + 8'h1; // @[MultiClockSpec.scala 59:14]
  wire  wrap_wrap = cycle == 4'h9; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = cycle + 4'h1; // @[Counter.scala 78:24]
  wire [7:0] _GEN_5 = {{4'd0}, cycle}; // @[MultiClockSpec.scala 63:16]
  wire  _T_3 = ~reset; // @[MultiClockSpec.scala 63:11]
  wire  _T_6 = cycle == 4'h8; // @[MultiClockSpec.scala 66:20]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 4'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cycle <= 4'h0; // @[Counter.scala 88:28]
    end else begin
      cycle <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    if (reset2 | reset) begin // @[MultiClockSpec.scala 58:56]
      reg_ <= 8'h0; // @[MultiClockSpec.scala 58:56]
    end else begin
      reg_ <= _reg_T_3; // @[MultiClockSpec.scala 59:7]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(reg_ == _GEN_5)) begin
          $fatal; // @[MultiClockSpec.scala 63:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(reg_ == _GEN_5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MultiClockSpec.scala:63 assert(reg === cycle)\n"); // @[MultiClockSpec.scala 63:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & ~_T_5 & _T_6 & _T_3 & ~(reg_ == 8'h0)) begin
          $fatal; // @[MultiClockSpec.scala 67:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & ~_T_5 & _T_6 & _T_3 & ~(reg_ == 8'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MultiClockSpec.scala:67 assert(reg === 0.U)\n"); // @[MultiClockSpec.scala 67:11]
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
          $finish; // @[MultiClockSpec.scala 69:20]
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
  _RAND_1 = {1{`RANDOM}};
  reg_ = _RAND_1[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
