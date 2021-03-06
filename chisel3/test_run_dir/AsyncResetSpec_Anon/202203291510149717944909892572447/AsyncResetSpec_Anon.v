module AsyncResetSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] reg_x; // @[AsyncResetSpec.scala 249:16]
  reg [15:0] reg_y; // @[AsyncResetSpec.scala 249:16]
  reg [1:0] count; // @[Counter.scala 62:40]
  wire  wrap_wrap = count == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = count + 2'h1; // @[Counter.scala 78:24]
  wire  _T = count == 2'h0; // @[AsyncResetSpec.scala 252:18]
  wire [31:0] _T_1 = {reg_x,reg_y}; // @[AsyncResetSpec.scala 253:28]
  wire  _T_4 = ~reset; // @[AsyncResetSpec.scala 253:23]
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
        if (_T & ~reset & ~(_T_1 == 32'hdeadbeef)) begin
          $fatal; // @[AsyncResetSpec.scala 253:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(_T_1 == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsyncResetSpec.scala:253 chisel3.assert(reg.asUInt === 0xdeadbeefL.U)\n"); // @[AsyncResetSpec.scala 253:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & _T_4 & ~(_T_1 == 32'hbad0cad0)) begin
          $fatal; // @[AsyncResetSpec.scala 255:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & _T_4 & ~(_T_1 == 32'hbad0cad0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsyncResetSpec.scala:255 chisel3.assert(reg.asUInt === 0xbad0cad0L.U)\n"); // @[AsyncResetSpec.scala 255:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_4) begin
          $finish; // @[AsyncResetSpec.scala 257:24]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin // @[AsyncResetSpec.scala 249:{39,39}]
      reg_x <= 16'hdead;
    end else begin
      reg_x <= 16'hbad0;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin // @[AsyncResetSpec.scala 249:{39,39}]
      reg_y <= 16'hbeef;
    end else begin
      reg_y <= 16'hcad0;
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
  reg_x = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  reg_y = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  count = _RAND_2[1:0];
`endif // RANDOMIZE_REG_INIT
  if (reset) begin
    reg_x = 16'hdead;
  end
  if (reset) begin
    reg_y = 16'hbeef;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
