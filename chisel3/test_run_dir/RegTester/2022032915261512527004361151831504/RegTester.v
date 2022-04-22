module RegTesterMod(
  input        clock,
  input        reset,
  output [2:0] io_out_0,
  output [2:0] io_out_1,
  output [2:0] io_out_2,
  output [2:0] io_out_3,
  output [2:0] io_out_4,
  output [2:0] io_out_5,
  output [2:0] io_out_6,
  output [2:0] io_out_7
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] vecReg_0; // @[Vec.scala 26:23]
  reg [2:0] vecReg_1; // @[Vec.scala 26:23]
  reg [2:0] vecReg_2; // @[Vec.scala 26:23]
  reg [2:0] vecReg_3; // @[Vec.scala 26:23]
  reg [2:0] vecReg_4; // @[Vec.scala 26:23]
  reg [2:0] vecReg_5; // @[Vec.scala 26:23]
  reg [2:0] vecReg_6; // @[Vec.scala 26:23]
  reg [2:0] vecReg_7; // @[Vec.scala 26:23]
  assign io_out_0 = vecReg_0; // @[Vec.scala 27:10]
  assign io_out_1 = vecReg_1; // @[Vec.scala 27:10]
  assign io_out_2 = vecReg_2; // @[Vec.scala 27:10]
  assign io_out_3 = vecReg_3; // @[Vec.scala 27:10]
  assign io_out_4 = vecReg_4; // @[Vec.scala 27:10]
  assign io_out_5 = vecReg_5; // @[Vec.scala 27:10]
  assign io_out_6 = vecReg_6; // @[Vec.scala 27:10]
  assign io_out_7 = vecReg_7; // @[Vec.scala 27:10]
  always @(posedge clock) begin
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_0 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_0 <= 3'h7; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_1 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_1 <= 3'h4; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_2 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_2 <= 3'h3; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_3 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_3 <= 3'h7; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_4 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_4 <= 3'h3; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_5 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_5 <= 3'h6; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_6 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_6 <= 3'h6; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_7 <= 3'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_7 <= 3'h5; // @[Vec.scala 26:23]
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
  vecReg_0 = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  vecReg_1 = _RAND_1[2:0];
  _RAND_2 = {1{`RANDOM}};
  vecReg_2 = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  vecReg_3 = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  vecReg_4 = _RAND_4[2:0];
  _RAND_5 = {1{`RANDOM}};
  vecReg_5 = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  vecReg_6 = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  vecReg_7 = _RAND_7[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RegTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[Vec.scala 56:19]
  wire  dut_reset; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_0; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_1; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_2; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_3; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_4; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_5; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_6; // @[Vec.scala 56:19]
  wire [2:0] dut_io_out_7; // @[Vec.scala 56:19]
  reg  doneReg; // @[Vec.scala 57:24]
  wire  _T_2 = ~reset; // @[Vec.scala 61:13]
  RegTesterMod dut ( // @[Vec.scala 56:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_out_0(dut_io_out_0),
    .io_out_1(dut_io_out_1),
    .io_out_2(dut_io_out_2),
    .io_out_3(dut_io_out_3),
    .io_out_4(dut_io_out_4),
    .io_out_5(dut_io_out_5),
    .io_out_6(dut_io_out_6),
    .io_out_7(dut_io_out_7)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[Vec.scala 57:24]
      doneReg <= 1'h0; // @[Vec.scala 57:24]
    end else if (!(doneReg)) begin // @[Vec.scala 59:17]
      doneReg <= 1'h1; // @[Vec.scala 64:13]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_0 == 3'h7)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_0 == 3'h7)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_1 == 3'h4)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_1 == 3'h4)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_2 == 3'h3)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_2 == 3'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_3 == 3'h7)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_3 == 3'h7)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_4 == 3'h3)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_4 == 3'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_5 == 3'h6)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_5 == 3'h6)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_6 == 3'h6)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_6 == 3'h6)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_7 == 3'h5)) begin
          $fatal; // @[Vec.scala 61:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doneReg & ~reset & ~(dut_io_out_7 == 3'h5)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n"); // @[Vec.scala 61:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doneReg & _T_2) begin
          $finish; // @[Vec.scala 62:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_0 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_0 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_1 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_1 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_2 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_2 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_3 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_3 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_4 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_4 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_5 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_5 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_6 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_6 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_7 == 3'h0)) begin
          $fatal; // @[Vec.scala 66:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~doneReg & _T_2 & ~(dut_io_out_7 == 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n"); // @[Vec.scala 66:13]
        end
    `ifdef PRINTF_COND
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
  doneReg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
