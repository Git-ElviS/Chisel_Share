module RealGCD(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [15:0] io_in_bits_a,
  input  [15:0] io_in_bits_b,
  output        io_out_valid,
  output [15:0] io_out_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] x; // @[RealGCD.scala 22:14]
  reg [15:0] y; // @[RealGCD.scala 23:14]
  reg  p; // @[RealGCD.scala 24:18]
  wire  _T = ~p; // @[RealGCD.scala 26:18]
  wire  _T_2 = io_in_valid & _T; // @[RealGCD.scala 28:21]
  wire  _GEN_2 = _T_2 | p; // @[RealGCD.scala 28:28]
  wire  _T_3 = x > y; // @[RealGCD.scala 35:13]
  wire [15:0] _T_5 = y - x; // @[RealGCD.scala 36:28]
  wire  _T_6 = y == 16'h0; // @[RealGCD.scala 40:21]
  assign io_in_ready = ~p; // @[RealGCD.scala 26:15]
  assign io_out_valid = _T_6 & p; // @[RealGCD.scala 40:16]
  assign io_out_bits = x; // @[RealGCD.scala 39:16]
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
  x = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  y = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  p = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (p) begin
      if (_T_3) begin
        x <= y;
      end else if (_T_2) begin
        x <= io_in_bits_a;
      end
    end else if (_T_2) begin
      x <= io_in_bits_a;
    end
    if (p) begin
      if (_T_3) begin
        y <= x;
      end else begin
        y <= _T_5;
      end
    end else if (_T_2) begin
      y <= io_in_bits_b;
    end
    if (reset) begin
      p <= 1'h0;
    end else if (io_out_valid) begin
      p <= 1'h0;
    end else begin
      p <= _GEN_2;
    end
  end
endmodule
