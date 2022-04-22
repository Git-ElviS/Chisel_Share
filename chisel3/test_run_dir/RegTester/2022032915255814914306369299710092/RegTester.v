module RegTesterMod(
  input        clock,
  input        reset,
  output [1:0] io_out_2,
  output [1:0] io_out_3,
  output [1:0] io_out_4,
  output [1:0] io_out_5,
  output [1:0] io_out_6
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] vecReg_2; // @[Vec.scala 26:23]
  reg [1:0] vecReg_3; // @[Vec.scala 26:23]
  reg [1:0] vecReg_4; // @[Vec.scala 26:23]
  reg [1:0] vecReg_5; // @[Vec.scala 26:23]
  reg [1:0] vecReg_6; // @[Vec.scala 26:23]
  assign io_out_2 = vecReg_2; // @[Vec.scala 27:10]
  assign io_out_3 = vecReg_3; // @[Vec.scala 27:10]
  assign io_out_4 = vecReg_4; // @[Vec.scala 27:10]
  assign io_out_5 = vecReg_5; // @[Vec.scala 27:10]
  assign io_out_6 = vecReg_6; // @[Vec.scala 27:10]
  always @(posedge clock) begin
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_2 <= 2'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_2 <= 2'h2; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_3 <= 2'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_3 <= 2'h1; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_4 <= 2'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_4 <= 2'h1; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_5 <= 2'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_5 <= 2'h1; // @[Vec.scala 26:23]
    end
    if (reset) begin // @[Vec.scala 26:23]
      vecReg_6 <= 2'h0; // @[Vec.scala 26:23]
    end else begin
      vecReg_6 <= 2'h2; // @[Vec.scala 26:23]
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
  vecReg_2 = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  vecReg_3 = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  vecReg_4 = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  vecReg_5 = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  vecReg_6 = _RAND_4[1:0];
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
  wire [1:0] dut_io_out_2; // @[Vec.scala 56:19]
  wire [1:0] dut_io_out_3; // @[Vec.scala 56:19]
  wire [1:0] dut_io_out_4; // @[Vec.scala 56:19]
  wire [1:0] dut_io_out_5; // @[Vec.scala 56:19]
  wire [1:0] dut_io_out_6; // @[Vec.scala 56:19]
  reg  doneReg; // @[Vec.scala 57:24]
  wire  _T_2 = ~reset; // @[Vec.scala 61:13]
  RegTesterMod dut ( // @[Vec.scala 56:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_out_2(dut_io_out_2),
    .io_out_3(dut_io_out_3),
    .io_out_4(dut_io_out_4),
    .io_out_5(dut_io_out_5),
    .io_out_6(dut_io_out_6)
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
        if (doneReg & ~reset & ~(dut_io_out_2 == 2'h2)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_2 == 2'h2)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_3 == 2'h1)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_3 == 2'h1)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_4 == 2'h1)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_4 == 2'h1)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_5 == 2'h1)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_5 == 2'h1)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_6 == 2'h2)) begin
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
        if (doneReg & ~reset & ~(dut_io_out_6 == 2'h2)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_2 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_2 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_3 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_3 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_4 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_4 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_5 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_5 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_6 == 2'h0)) begin
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
        if (~doneReg & _T_2 & ~(dut_io_out_6 == 2'h0)) begin
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
