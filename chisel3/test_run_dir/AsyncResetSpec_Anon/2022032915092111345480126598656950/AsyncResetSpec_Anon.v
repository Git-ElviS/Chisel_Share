module AsyncResetSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [6:0] reg_; // @[AsyncResetSpec.scala 199:54]
  reg [1:0] count; // @[Counter.scala 62:40]
  wire  wrap_wrap = count == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = count + 2'h1; // @[Counter.scala 78:24]
  wire  _T = count == 2'h0; // @[AsyncResetSpec.scala 202:18]
  wire  _T_3 = ~reset; // @[AsyncResetSpec.scala 203:23]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      count <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      count <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~($signed(reg_) == 7'sh1b)) begin
          $fatal; // @[AsyncResetSpec.scala 203:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~($signed(reg_) == 7'sh1b)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:203 chisel3.assert(reg === 27.S)\n"); // @[AsyncResetSpec.scala 203:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & _T_3 & ~($signed(reg_) == -7'sh2b)) begin
          $fatal; // @[AsyncResetSpec.scala 205:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & _T_3 & ~($signed(reg_) == -7'sh2b)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:205 chisel3.assert(reg === -43.S)\n"); // @[AsyncResetSpec.scala 205:23]
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
          $finish; // @[AsyncResetSpec.scala 207:24]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin // @[AsyncResetSpec.scala 198:27 200:17]
      reg_ <= 7'sh1b;
    end else begin
      reg_ <= -7'sh2b;
    end
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
  reg_ = _RAND_0[6:0];
  _RAND_1 = {1{`RANDOM}};
  count = _RAND_1[1:0];
`endif // RANDOMIZE_REG_INIT
  if (reset) begin
    reg_ = 7'sh1b;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
