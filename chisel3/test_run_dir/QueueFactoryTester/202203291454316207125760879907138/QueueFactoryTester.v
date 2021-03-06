module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_valid,
  input  [3:0] io_enq_bits,
  input        io_deq_ready,
  output       io_deq_valid,
  output [3:0] io_deq_bits
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] ram [0:1]; // @[Decoupled.scala 259:44]
  wire  ram_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:44]
  wire  ram_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:44]
  wire [3:0] ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:44]
  wire [3:0] ram_MPORT_data; // @[Decoupled.scala 259:44]
  wire  ram_MPORT_addr; // @[Decoupled.scala 259:44]
  wire  ram_MPORT_mask; // @[Decoupled.scala 259:44]
  wire  ram_MPORT_en; // @[Decoupled.scala 259:44]
  reg  ram_io_deq_bits_MPORT_en_pipe_0;
  reg  ram_io_deq_bits_MPORT_addr_pipe_0;
  reg  value; // @[Counter.scala 62:40]
  reg  value_1; // @[Counter.scala 62:40]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  ptr_match = value == value_1; // @[Decoupled.scala 263:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 264:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 265:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 50:35]
  wire  _value_T_3 = value_1 + 1'h1; // @[Counter.scala 78:24]
  wire [1:0] _deq_ptr_next_T_1 = 2'h2 - 2'h1; // @[Decoupled.scala 292:57]
  wire [1:0] _GEN_15 = {{1'd0}, value_1}; // @[Decoupled.scala 292:42]
  assign ram_io_deq_bits_MPORT_en = ram_io_deq_bits_MPORT_en_pipe_0;
  assign ram_io_deq_bits_MPORT_addr = ram_io_deq_bits_MPORT_addr_pipe_0;
  assign ram_io_deq_bits_MPORT_data = ram[ram_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:44]
  assign ram_MPORT_data = io_enq_bits;
  assign ram_MPORT_addr = value;
  assign ram_MPORT_mask = 1'h1;
  assign ram_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits = ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 294:17]
  always @(posedge clock) begin
    if (ram_MPORT_en & ram_MPORT_mask) begin
      ram[ram_MPORT_addr] <= ram_MPORT_data; // @[Decoupled.scala 259:44]
    end
    ram_io_deq_bits_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      if (do_deq) begin
        if (_GEN_15 == _deq_ptr_next_T_1) begin // @[Decoupled.scala 292:27]
          ram_io_deq_bits_MPORT_addr_pipe_0 <= 1'h0;
        end else begin
          ram_io_deq_bits_MPORT_addr_pipe_0 <= _value_T_3;
        end
      end else begin
        ram_io_deq_bits_MPORT_addr_pipe_0 <= value_1;
      end
    end
    if (reset) begin // @[Counter.scala 62:40]
      value <= 1'h0; // @[Counter.scala 62:40]
    end else if (do_enq) begin // @[Decoupled.scala 272:16]
      value <= value + 1'h1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Counter.scala 62:40]
      value_1 <= 1'h0; // @[Counter.scala 62:40]
    end else if (do_deq) begin // @[Decoupled.scala 276:16]
      value_1 <= value_1 + 1'h1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Decoupled.scala 262:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 262:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 279:27]
      maybe_full <= do_enq; // @[Decoupled.scala 280:16]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    ram[initvar] = _RAND_0[3:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_io_deq_bits_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_io_deq_bits_MPORT_addr_pipe_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  value = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  value_1 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  maybe_full = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MaxPeriodFibonacciLFSR(
  input   clock,
  input   reset,
  output  io_out_0,
  output  io_out_1,
  output  io_out_2,
  output  io_out_3,
  output  io_out_4,
  output  io_out_5,
  output  io_out_6,
  output  io_out_7,
  output  io_out_8,
  output  io_out_9,
  output  io_out_10,
  output  io_out_11,
  output  io_out_12,
  output  io_out_13,
  output  io_out_14,
  output  io_out_15
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
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_REG_INIT
  reg  state_0; // @[PRNG.scala 55:49]
  reg  state_1; // @[PRNG.scala 55:49]
  reg  state_2; // @[PRNG.scala 55:49]
  reg  state_3; // @[PRNG.scala 55:49]
  reg  state_4; // @[PRNG.scala 55:49]
  reg  state_5; // @[PRNG.scala 55:49]
  reg  state_6; // @[PRNG.scala 55:49]
  reg  state_7; // @[PRNG.scala 55:49]
  reg  state_8; // @[PRNG.scala 55:49]
  reg  state_9; // @[PRNG.scala 55:49]
  reg  state_10; // @[PRNG.scala 55:49]
  reg  state_11; // @[PRNG.scala 55:49]
  reg  state_12; // @[PRNG.scala 55:49]
  reg  state_13; // @[PRNG.scala 55:49]
  reg  state_14; // @[PRNG.scala 55:49]
  reg  state_15; // @[PRNG.scala 55:49]
  wire  _T_2 = state_15 ^ state_13 ^ state_12 ^ state_10; // @[LFSR.scala 15:41]
  assign io_out_0 = state_0; // @[PRNG.scala 78:10]
  assign io_out_1 = state_1; // @[PRNG.scala 78:10]
  assign io_out_2 = state_2; // @[PRNG.scala 78:10]
  assign io_out_3 = state_3; // @[PRNG.scala 78:10]
  assign io_out_4 = state_4; // @[PRNG.scala 78:10]
  assign io_out_5 = state_5; // @[PRNG.scala 78:10]
  assign io_out_6 = state_6; // @[PRNG.scala 78:10]
  assign io_out_7 = state_7; // @[PRNG.scala 78:10]
  assign io_out_8 = state_8; // @[PRNG.scala 78:10]
  assign io_out_9 = state_9; // @[PRNG.scala 78:10]
  assign io_out_10 = state_10; // @[PRNG.scala 78:10]
  assign io_out_11 = state_11; // @[PRNG.scala 78:10]
  assign io_out_12 = state_12; // @[PRNG.scala 78:10]
  assign io_out_13 = state_13; // @[PRNG.scala 78:10]
  assign io_out_14 = state_14; // @[PRNG.scala 78:10]
  assign io_out_15 = state_15; // @[PRNG.scala 78:10]
  always @(posedge clock) begin
    state_0 <= reset | _T_2; // @[PRNG.scala 55:{49,49}]
    if (reset) begin // @[PRNG.scala 55:49]
      state_1 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_1 <= state_0;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_2 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_2 <= state_1;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_3 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_3 <= state_2;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_4 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_4 <= state_3;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_5 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_5 <= state_4;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_6 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_6 <= state_5;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_7 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_7 <= state_6;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_8 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_8 <= state_7;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_9 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_9 <= state_8;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_10 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_10 <= state_9;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_11 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_11 <= state_10;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_12 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_12 <= state_11;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_13 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_13 <= state_12;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_14 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_14 <= state_13;
    end
    if (reset) begin // @[PRNG.scala 55:49]
      state_15 <= 1'h0; // @[PRNG.scala 55:49]
    end else begin
      state_15 <= state_14;
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
  state_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  state_1 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  state_2 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state_3 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  state_4 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state_5 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  state_6 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  state_7 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  state_8 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  state_9 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  state_10 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  state_11 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  state_12 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  state_13 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  state_14 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  state_15 = _RAND_15[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module QueueFactoryTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  deq_clock; // @[Decoupled.scala 361:21]
  wire  deq_reset; // @[Decoupled.scala 361:21]
  wire  deq_io_enq_ready; // @[Decoupled.scala 361:21]
  wire  deq_io_enq_valid; // @[Decoupled.scala 361:21]
  wire [3:0] deq_io_enq_bits; // @[Decoupled.scala 361:21]
  wire  deq_io_deq_ready; // @[Decoupled.scala 361:21]
  wire  deq_io_deq_valid; // @[Decoupled.scala 361:21]
  wire [3:0] deq_io_deq_bits; // @[Decoupled.scala 361:21]
  wire  deq_io_deq_ready_prng_clock; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_reset; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  deq_io_deq_ready_prng_io_out_15; // @[PRNG.scala 91:22]
  reg [4:0] value; // @[Counter.scala 62:40]
  reg [4:0] value_1; // @[Counter.scala 62:40]
  wire  enq_valid = value < 5'h14; // @[QueueSpec.scala 194:29]
  wire [7:0] deq_io_deq_ready_lo = {deq_io_deq_ready_prng_io_out_7,deq_io_deq_ready_prng_io_out_6,
    deq_io_deq_ready_prng_io_out_5,deq_io_deq_ready_prng_io_out_4,deq_io_deq_ready_prng_io_out_3,
    deq_io_deq_ready_prng_io_out_2,deq_io_deq_ready_prng_io_out_1,deq_io_deq_ready_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [15:0] _deq_io_deq_ready_T = {deq_io_deq_ready_prng_io_out_15,deq_io_deq_ready_prng_io_out_14,
    deq_io_deq_ready_prng_io_out_13,deq_io_deq_ready_prng_io_out_12,deq_io_deq_ready_prng_io_out_11,
    deq_io_deq_ready_prng_io_out_10,deq_io_deq_ready_prng_io_out_9,deq_io_deq_ready_prng_io_out_8,deq_io_deq_ready_lo}; // @[PRNG.scala 95:17]
  wire [3:0] _GEN_1 = 5'h1 == value ? 4'h6 : 4'h7; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_2 = 5'h2 == value ? 4'h8 : _GEN_1; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_3 = 5'h3 == value ? 4'h7 : _GEN_2; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_4 = 5'h4 == value ? 4'h5 : _GEN_3; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_5 = 5'h5 == value ? 4'h3 : _GEN_4; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_6 = 5'h6 == value ? 4'h3 : _GEN_5; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_7 = 5'h7 == value ? 4'hb : _GEN_6; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_8 = 5'h8 == value ? 4'h1 : _GEN_7; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_9 = 5'h9 == value ? 4'he : _GEN_8; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_10 = 5'ha == value ? 4'h3 : _GEN_9; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_11 = 5'hb == value ? 4'h5 : _GEN_10; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_12 = 5'hc == value ? 4'h1 : _GEN_11; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_13 = 5'hd == value ? 4'h0 : _GEN_12; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_14 = 5'he == value ? 4'hc : _GEN_13; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_15 = 5'hf == value ? 4'h8 : _GEN_14; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_16 = 5'h10 == value ? 4'h8 : _GEN_15; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_17 = 5'h11 == value ? 4'h5 : _GEN_16; // @[QueueSpec.scala 197:{12,12}]
  wire [3:0] _GEN_18 = 5'h12 == value ? 4'hf : _GEN_17; // @[QueueSpec.scala 197:{12,12}]
  wire  enq_ready = deq_io_enq_ready; // @[QueueSpec.scala 185:17 Decoupled.scala 365:17]
  wire  _T = enq_ready & enq_valid; // @[Decoupled.scala 50:35]
  wire  wrap = value == 5'h14; // @[Counter.scala 74:24]
  wire [4:0] _value_T_1 = value + 5'h1; // @[Counter.scala 78:24]
  wire  _T_1 = deq_io_deq_ready & deq_io_deq_valid; // @[Decoupled.scala 50:35]
  wire [3:0] _GEN_23 = 5'h1 == value_1 ? 4'h6 : 4'h7; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_24 = 5'h2 == value_1 ? 4'h8 : _GEN_23; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_25 = 5'h3 == value_1 ? 4'h7 : _GEN_24; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_26 = 5'h4 == value_1 ? 4'h5 : _GEN_25; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_27 = 5'h5 == value_1 ? 4'h3 : _GEN_26; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_28 = 5'h6 == value_1 ? 4'h3 : _GEN_27; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_29 = 5'h7 == value_1 ? 4'hb : _GEN_28; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_30 = 5'h8 == value_1 ? 4'h1 : _GEN_29; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_31 = 5'h9 == value_1 ? 4'he : _GEN_30; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_32 = 5'ha == value_1 ? 4'h3 : _GEN_31; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_33 = 5'hb == value_1 ? 4'h5 : _GEN_32; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_34 = 5'hc == value_1 ? 4'h1 : _GEN_33; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_35 = 5'hd == value_1 ? 4'h0 : _GEN_34; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_36 = 5'he == value_1 ? 4'hc : _GEN_35; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_37 = 5'hf == value_1 ? 4'h8 : _GEN_36; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_38 = 5'h10 == value_1 ? 4'h8 : _GEN_37; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_39 = 5'h11 == value_1 ? 4'h5 : _GEN_38; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_40 = 5'h12 == value_1 ? 4'hf : _GEN_39; // @[QueueSpec.scala 203:{32,32}]
  wire [3:0] _GEN_41 = 5'h13 == value_1 ? 4'h0 : _GEN_40; // @[QueueSpec.scala 203:{32,32}]
  wire  _T_4 = ~reset; // @[QueueSpec.scala 203:11]
  wire  wrap_1 = value_1 == 5'h14; // @[Counter.scala 74:24]
  wire [4:0] _value_T_3 = value_1 + 5'h1; // @[Counter.scala 78:24]
  Queue deq ( // @[Decoupled.scala 361:21]
    .clock(deq_clock),
    .reset(deq_reset),
    .io_enq_ready(deq_io_enq_ready),
    .io_enq_valid(deq_io_enq_valid),
    .io_enq_bits(deq_io_enq_bits),
    .io_deq_ready(deq_io_deq_ready),
    .io_deq_valid(deq_io_deq_valid),
    .io_deq_bits(deq_io_deq_bits)
  );
  MaxPeriodFibonacciLFSR deq_io_deq_ready_prng ( // @[PRNG.scala 91:22]
    .clock(deq_io_deq_ready_prng_clock),
    .reset(deq_io_deq_ready_prng_reset),
    .io_out_0(deq_io_deq_ready_prng_io_out_0),
    .io_out_1(deq_io_deq_ready_prng_io_out_1),
    .io_out_2(deq_io_deq_ready_prng_io_out_2),
    .io_out_3(deq_io_deq_ready_prng_io_out_3),
    .io_out_4(deq_io_deq_ready_prng_io_out_4),
    .io_out_5(deq_io_deq_ready_prng_io_out_5),
    .io_out_6(deq_io_deq_ready_prng_io_out_6),
    .io_out_7(deq_io_deq_ready_prng_io_out_7),
    .io_out_8(deq_io_deq_ready_prng_io_out_8),
    .io_out_9(deq_io_deq_ready_prng_io_out_9),
    .io_out_10(deq_io_deq_ready_prng_io_out_10),
    .io_out_11(deq_io_deq_ready_prng_io_out_11),
    .io_out_12(deq_io_deq_ready_prng_io_out_12),
    .io_out_13(deq_io_deq_ready_prng_io_out_13),
    .io_out_14(deq_io_deq_ready_prng_io_out_14),
    .io_out_15(deq_io_deq_ready_prng_io_out_15)
  );
  assign deq_clock = clock;
  assign deq_reset = reset;
  assign deq_io_enq_valid = value < 5'h14; // @[QueueSpec.scala 194:29]
  assign deq_io_enq_bits = 5'h13 == value ? 4'h0 : _GEN_18; // @[QueueSpec.scala 197:{12,12}]
  assign deq_io_deq_ready = _deq_io_deq_ready_T[4]; // @[QueueSpec.scala 195:24]
  assign deq_io_deq_ready_prng_clock = clock;
  assign deq_io_deq_ready_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      value <= 5'h0; // @[Counter.scala 62:40]
    end else if (_T) begin // @[QueueSpec.scala 198:18]
      if (wrap) begin // @[Counter.scala 88:20]
        value <= 5'h0; // @[Counter.scala 88:28]
      end else begin
        value <= _value_T_1; // @[Counter.scala 78:15]
      end
    end
    if (reset) begin // @[Counter.scala 62:40]
      value_1 <= 5'h0; // @[Counter.scala 62:40]
    end else if (_T_1) begin // @[QueueSpec.scala 201:18]
      if (wrap_1) begin // @[Counter.scala 88:20]
        value_1 <= 5'h0; // @[Counter.scala 88:28]
      end else begin
        value_1 <= _value_T_3; // @[Counter.scala 78:15]
      end
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~reset & ~(_GEN_41 == deq_io_deq_bits)) begin
          $fatal; // @[QueueSpec.scala 203:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~reset & ~(_GEN_41 == deq_io_deq_bits)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueSpec.scala:203 assert(elems(outCnt.value) === deq.bits)\n"
            ); // @[QueueSpec.scala 203:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_1 & _T_4) begin
          $finish; // @[QueueSpec.scala 207:9]
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
  value = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  value_1 = _RAND_1[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
