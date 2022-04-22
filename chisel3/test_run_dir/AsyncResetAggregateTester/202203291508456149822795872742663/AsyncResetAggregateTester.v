module AsyncResetAggregateTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] cDiv_value; // @[Counter.scala 62:40]
  wire [1:0] _cDiv_wrap_value_T_1 = cDiv_value + 2'h1; // @[Counter.scala 78:24]
  wire  slowClk = cDiv_value == 2'h3; // @[AsyncResetSpec.scala 48:22]
  reg [3:0] count; // @[Counter.scala 62:40]
  wire  wrap_wrap = count == 4'hf; // @[Counter.scala 74:24]
  wire [3:0] _wrap_value_T_1 = count + 4'h1; // @[Counter.scala 78:24]
  reg  asyncResetNext; // @[AsyncResetSpec.scala 52:31]
  reg [7:0] reg_0_x; // @[AsyncResetSpec.scala 62:12]
  reg [7:0] reg_0_y; // @[AsyncResetSpec.scala 62:12]
  reg [7:0] reg_1_x; // @[AsyncResetSpec.scala 62:12]
  reg [7:0] reg_1_y; // @[AsyncResetSpec.scala 62:12]
  wire  _T = count == 4'h3; // @[AsyncResetSpec.scala 69:14]
  wire  _T_3 = ~reset; // @[AsyncResetSpec.scala 70:11]
  wire  _T_4 = ~(reg_0_x == 8'h5); // @[AsyncResetSpec.scala 70:11]
  wire  _T_8 = ~(reg_0_y == 8'h6); // @[AsyncResetSpec.scala 71:11]
  wire  _T_12 = ~(reg_1_x == 8'h7); // @[AsyncResetSpec.scala 72:11]
  wire  _T_16 = ~(reg_1_y == 8'h8); // @[AsyncResetSpec.scala 73:11]
  wire  _T_19 = count >= 4'h5 & count < 4'h7; // @[AsyncResetSpec.scala 75:21]
  wire  _T_36 = count >= 4'h7; // @[AsyncResetSpec.scala 80:20]
  wire  _GEN_4 = _T & ~reset; // @[AsyncResetSpec.scala 70:11]
  wire  _GEN_16 = _T_19 & _T_3; // @[AsyncResetSpec.scala 76:11]
  wire  _GEN_30 = ~_T_19 & _T_36 & _T_3; // @[AsyncResetSpec.scala 81:11]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cDiv_value <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      cDiv_value <= _cDiv_wrap_value_T_1;
    end
    if (reset) begin // @[Counter.scala 62:40]
      count <= 4'h0; // @[Counter.scala 62:40]
    end else begin
      count <= _wrap_value_T_1;
    end
    if (reset) begin // @[AsyncResetSpec.scala 52:31]
      asyncResetNext <= 1'h0; // @[AsyncResetSpec.scala 52:31]
    end else begin
      asyncResetNext <= count == 4'h4; // @[AsyncResetSpec.scala 53:18]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(reg_0_x == 8'h5)) begin
          $fatal; // @[AsyncResetSpec.scala 70:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(reg_0_x == 8'h5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:70 assert(reg(0).x === 5.U)\n"); // @[AsyncResetSpec.scala 70:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_4 & ~(reg_0_y == 8'h6)) begin
          $fatal; // @[AsyncResetSpec.scala 71:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_4 & ~(reg_0_y == 8'h6)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:71 assert(reg(0).y === 6.U)\n"); // @[AsyncResetSpec.scala 71:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_4 & ~(reg_1_x == 8'h7)) begin
          $fatal; // @[AsyncResetSpec.scala 72:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_4 & ~(reg_1_x == 8'h7)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:72 assert(reg(1).x === 7.U)\n"); // @[AsyncResetSpec.scala 72:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_4 & ~(reg_1_y == 8'h8)) begin
          $fatal; // @[AsyncResetSpec.scala 73:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_4 & ~(reg_1_y == 8'h8)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:73 assert(reg(1).y === 8.U)\n"); // @[AsyncResetSpec.scala 73:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_19 & _T_3 & ~(reg_0_x == 8'h0)) begin
          $fatal; // @[AsyncResetSpec.scala 76:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_19 & _T_3 & ~(reg_0_x == 8'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:76 assert(reg(0).x === 0.U)\n"); // @[AsyncResetSpec.scala 76:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_16 & ~(reg_0_y == 8'h0)) begin
          $fatal; // @[AsyncResetSpec.scala 77:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_16 & ~(reg_0_y == 8'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:77 assert(reg(0).y === 0.U)\n"); // @[AsyncResetSpec.scala 77:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_16 & ~(reg_1_x == 8'h0)) begin
          $fatal; // @[AsyncResetSpec.scala 78:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_16 & ~(reg_1_x == 8'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:78 assert(reg(1).x === 0.U)\n"); // @[AsyncResetSpec.scala 78:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_16 & ~(reg_1_y == 8'h0)) begin
          $fatal; // @[AsyncResetSpec.scala 79:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_16 & ~(reg_1_y == 8'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:79 assert(reg(1).y === 0.U)\n"); // @[AsyncResetSpec.scala 79:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T_19 & _T_36 & _T_3 & _T_4) begin
          $fatal; // @[AsyncResetSpec.scala 81:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T_19 & _T_36 & _T_3 & _T_4) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:81 assert(reg(0).x === 5.U)\n"); // @[AsyncResetSpec.scala 81:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_30 & _T_8) begin
          $fatal; // @[AsyncResetSpec.scala 82:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_30 & _T_8) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:82 assert(reg(0).y === 6.U)\n"); // @[AsyncResetSpec.scala 82:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_30 & _T_12) begin
          $fatal; // @[AsyncResetSpec.scala 83:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_30 & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:83 assert(reg(1).x === 7.U)\n"); // @[AsyncResetSpec.scala 83:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_30 & _T_16) begin
          $fatal; // @[AsyncResetSpec.scala 84:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_30 & _T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:84 assert(reg(1).y === 8.U)\n"); // @[AsyncResetSpec.scala 84:11]
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
          $finish; // @[AsyncResetSpec.scala 88:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge slowClk or posedge asyncResetNext) begin
    if (asyncResetNext) begin // @[AsyncResetSpec.scala 62:12]
      reg_0_x <= 8'h0; // @[AsyncResetSpec.scala 62:12]
    end else begin
      reg_0_x <= 8'h5; // @[AsyncResetSpec.scala 64:12]
    end
  end
  always @(posedge slowClk or posedge asyncResetNext) begin
    if (asyncResetNext) begin // @[AsyncResetSpec.scala 62:12]
      reg_0_y <= 8'h0; // @[AsyncResetSpec.scala 62:12]
    end else begin
      reg_0_y <= 8'h6; // @[AsyncResetSpec.scala 65:12]
    end
  end
  always @(posedge slowClk or posedge asyncResetNext) begin
    if (asyncResetNext) begin // @[AsyncResetSpec.scala 62:12]
      reg_1_x <= 8'h0; // @[AsyncResetSpec.scala 62:12]
    end else begin
      reg_1_x <= 8'h7; // @[AsyncResetSpec.scala 66:12]
    end
  end
  always @(posedge slowClk or posedge asyncResetNext) begin
    if (asyncResetNext) begin // @[AsyncResetSpec.scala 62:12]
      reg_1_y <= 8'h0; // @[AsyncResetSpec.scala 62:12]
    end else begin
      reg_1_y <= 8'h8; // @[AsyncResetSpec.scala 67:12]
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
  cDiv_value = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  count = _RAND_1[3:0];
  _RAND_2 = {1{`RANDOM}};
  asyncResetNext = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  reg_0_x = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  reg_0_y = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  reg_1_x = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  reg_1_y = _RAND_6[7:0];
`endif // RANDOMIZE_REG_INIT
  if (asyncResetNext) begin
    reg_0_x = 8'h0;
  end
  if (asyncResetNext) begin
    reg_0_y = 8'h0;
  end
  if (asyncResetNext) begin
    reg_1_x = 8'h0;
  end
  if (asyncResetNext) begin
    reg_1_y = 8'h0;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
