module GCD(
  input         clock,
  input         io_e,
  output [31:0] io_z,
  output        io_v
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] x; // @[GCD.scala 17:14]
  reg [31:0] y; // @[GCD.scala 18:14]
  wire [31:0] _x_T_1 = x - y; // @[GCD.scala 19:24]
  wire [31:0] _y_T_1 = y - x; // @[GCD.scala 19:50]
  assign io_z = x; // @[GCD.scala 21:8]
  assign io_v = y == 32'h0; // @[GCD.scala 22:13]
  always @(posedge clock) begin
    if (io_e) begin // @[GCD.scala 20:14]
      x <= 32'hc; // @[GCD.scala 20:18]
    end else if (x > y) begin // @[GCD.scala 19:15]
      x <= _x_T_1; // @[GCD.scala 19:19]
    end
    if (io_e) begin // @[GCD.scala 20:14]
      y <= 32'h9; // @[GCD.scala 20:29]
    end else if (!(x > y)) begin // @[GCD.scala 19:15]
      y <= _y_T_1; // @[GCD.scala 19:45]
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
  x = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  y = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module GCDTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[GCD.scala 26:19]
  wire  dut_io_e; // @[GCD.scala 26:19]
  wire [31:0] dut_io_z; // @[GCD.scala 26:19]
  wire  dut_io_v; // @[GCD.scala 26:19]
  reg  first; // @[GCD.scala 27:22]
  wire  _GEN_0 = first ? 1'h0 : first; // @[GCD.scala 31:15 27:22 31:23]
  wire  _T_1 = ~first & dut_io_v; // @[GCD.scala 32:15]
  wire  _T_4 = ~reset; // @[GCD.scala 33:11]
  GCD dut ( // @[GCD.scala 26:19]
    .clock(dut_clock),
    .io_e(dut_io_e),
    .io_z(dut_io_z),
    .io_v(dut_io_v)
  );
  assign dut_clock = clock;
  assign dut_io_e = first; // @[GCD.scala 30:12]
  always @(posedge clock) begin
    first <= reset | _GEN_0; // @[GCD.scala 27:{22,22}]
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~reset & ~(dut_io_z == 32'h3)) begin
          $fatal; // @[GCD.scala 33:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~reset & ~(dut_io_z == 32'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at GCD.scala:33 assert(dut.io.z === z.U)\n"); // @[GCD.scala 33:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & _T_4) begin
          $finish; // @[GCD.scala 34:9]
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
  first = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
