module VecShiftRegister(
  input        clock,
  input        reset,
  input  [3:0] io_ins_0,
  input  [3:0] io_ins_1,
  input  [3:0] io_ins_2,
  input  [3:0] io_ins_3,
  input        io_load,
  input        io_shift,
  output [3:0] io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] delays_0; // @[VecShiftRegister.scala 20:19]
  reg [3:0] delays_1; // @[VecShiftRegister.scala 20:19]
  reg [3:0] delays_2; // @[VecShiftRegister.scala 20:19]
  reg [3:0] delays_3; // @[VecShiftRegister.scala 20:19]
  assign io_out = delays_3; // @[VecShiftRegister.scala 32:10]
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
  delays_0 = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  delays_1 = _RAND_1[3:0];
  _RAND_2 = {1{`RANDOM}};
  delays_2 = _RAND_2[3:0];
  _RAND_3 = {1{`RANDOM}};
  delays_3 = _RAND_3[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (io_load) begin
      delays_0 <= io_ins_0;
    end else if (io_shift) begin
      delays_0 <= io_ins_0;
    end
    if (io_load) begin
      delays_1 <= io_ins_1;
    end else if (io_shift) begin
      delays_1 <= delays_0;
    end
    if (io_load) begin
      delays_2 <= io_ins_2;
    end else if (io_shift) begin
      delays_2 <= delays_1;
    end
    if (io_load) begin
      delays_3 <= io_ins_3;
    end else if (io_shift) begin
      delays_3 <= delays_2;
    end
  end
endmodule
