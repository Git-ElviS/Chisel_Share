module GCD(
  input         clock,
  input         reset,
  input  [15:0] io_a,
  input  [15:0] io_b,
  input         io_load,
  output [15:0] io_out,
  output        io_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] x; // @[GCD.scala 20:14]
  reg [15:0] y; // @[GCD.scala 21:14]
  wire  _T = x > y; // @[GCD.scala 26:13]
  wire [15:0] _T_2 = x - y; // @[GCD.scala 27:14]
  wire  _T_3 = x <= y; // @[GCD.scala 28:20]
  wire [15:0] _T_5 = y - x; // @[GCD.scala 29:14]
  assign io_out = x; // @[GCD.scala 33:10]
  assign io_valid = y == 16'h0; // @[GCD.scala 34:12]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (io_load) begin
      x <= io_a;
    end else if (_T) begin
      x <= _T_2;
    end
    if (io_load) begin
      y <= io_b;
    end else if (!(_T)) begin
      if (_T_3) begin
        y <= _T_5;
      end
    end
  end
endmodule
