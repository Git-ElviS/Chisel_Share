module Queue(
  input   clock,
  input   reset,
  output  io_enq_ready,
  input   io_enq_valid,
  input   io_enq_bits,
  input   io_deq_ready,
  output  io_deq_valid,
  output  io_deq_bits,
  output  io_count,
  input   io_flush
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  ram [0:0]; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_data; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_en; // @[Decoupled.scala 259:95]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  empty = ~maybe_full; // @[Decoupled.scala 264:28]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 50:35]
  assign ram_io_deq_bits_MPORT_en = 1'h1;
  assign ram_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_io_deq_bits_MPORT_data = ram[ram_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  assign ram_MPORT_data = io_enq_bits;
  assign ram_MPORT_addr = 1'h0;
  assign ram_MPORT_mask = 1'h1;
  assign ram_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~maybe_full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits = ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  assign io_count = maybe_full; // @[Decoupled.scala 315:62]
  always @(posedge clock) begin
    if (ram_MPORT_en & ram_MPORT_mask) begin
      ram[ram_MPORT_addr] <= ram_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (reset) begin // @[Decoupled.scala 262:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 262:27]
    end else if (io_flush) begin // @[Decoupled.scala 282:15]
      maybe_full <= 1'h0; // @[Decoupled.scala 285:16]
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
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram[initvar] = _RAND_0[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  maybe_full = _RAND_1[0:0];
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
module QueueGetsFlushedTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  q_clock; // @[QueueFlushSpec.scala 42:17]
  wire  q_reset; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_enq_ready; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_enq_valid; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_enq_bits; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_deq_ready; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_deq_valid; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_deq_bits; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_count; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_flush; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_deq_ready_prng_clock; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_reset; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  q_io_deq_ready_prng_io_out_15; // @[PRNG.scala 91:22]
  wire  flush_prng_clock; // @[PRNG.scala 91:22]
  wire  flush_prng_reset; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_0; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_1; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_2; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_3; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_4; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_5; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_6; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_7; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_8; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_9; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_10; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_11; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_12; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_13; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_14; // @[PRNG.scala 91:22]
  wire  flush_prng_io_out_15; // @[PRNG.scala 91:22]
  reg [4:0] value; // @[Counter.scala 62:40]
  reg [4:0] outCnt; // @[QueueFlushSpec.scala 45:23]
  reg [2:0] currQCnt; // @[QueueFlushSpec.scala 46:25]
  reg  flushRegister; // @[QueueFlushSpec.scala 49:30]
  wire [7:0] q_io_deq_ready_lo = {q_io_deq_ready_prng_io_out_7,q_io_deq_ready_prng_io_out_6,q_io_deq_ready_prng_io_out_5
    ,q_io_deq_ready_prng_io_out_4,q_io_deq_ready_prng_io_out_3,q_io_deq_ready_prng_io_out_2,q_io_deq_ready_prng_io_out_1
    ,q_io_deq_ready_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [15:0] _q_io_deq_ready_T = {q_io_deq_ready_prng_io_out_15,q_io_deq_ready_prng_io_out_14,
    q_io_deq_ready_prng_io_out_13,q_io_deq_ready_prng_io_out_12,q_io_deq_ready_prng_io_out_11,
    q_io_deq_ready_prng_io_out_10,q_io_deq_ready_prng_io_out_9,q_io_deq_ready_prng_io_out_8,q_io_deq_ready_lo}; // @[PRNG.scala 95:17]
  wire  _GEN_2 = 5'h2 == value ? 1'h0 : 1'h1; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_3 = 5'h3 == value ? 1'h0 : _GEN_2; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_4 = 5'h4 == value ? 1'h0 : _GEN_3; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_5 = 5'h5 == value ? 1'h0 : _GEN_4; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_6 = 5'h6 == value ? 1'h0 : _GEN_5; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_9 = 5'h9 == value ? 1'h0 : 5'h8 == value | (5'h7 == value | _GEN_6); // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_10 = 5'ha == value ? 1'h0 : _GEN_9; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_12 = 5'hc == value ? 1'h0 : 5'hb == value | _GEN_10; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_13 = 5'hd == value ? 1'h0 : _GEN_12; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_14 = 5'he == value ? 1'h0 : _GEN_13; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_15 = 5'hf == value ? 1'h0 : _GEN_14; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_16 = 5'h10 == value ? 1'h0 : _GEN_15; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_17 = 5'h11 == value ? 1'h0 : _GEN_16; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _GEN_18 = 5'h12 == value ? 1'h0 : _GEN_17; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _T = q_io_enq_ready & q_io_enq_valid; // @[Decoupled.scala 50:35]
  wire  wrap = value == 5'h14; // @[Counter.scala 74:24]
  wire [4:0] _value_T_1 = value + 5'h1; // @[Counter.scala 78:24]
  wire [2:0] _currQCnt_T_1 = currQCnt + 3'h1; // @[QueueFlushSpec.scala 57:26]
  wire [2:0] _GEN_22 = _T ? _currQCnt_T_1 : currQCnt; // @[QueueFlushSpec.scala 55:23 57:14 46:25]
  wire  _T_1 = q_io_deq_ready & q_io_deq_valid; // @[Decoupled.scala 50:35]
  wire  _T_4 = ~reset; // @[QueueFlushSpec.scala 60:11]
  wire [7:0] flush_lo = {flush_prng_io_out_7,flush_prng_io_out_6,flush_prng_io_out_5,flush_prng_io_out_4,
    flush_prng_io_out_3,flush_prng_io_out_2,flush_prng_io_out_1,flush_prng_io_out_0}; // @[PRNG.scala 95:17]
  wire [15:0] _flush_T = {flush_prng_io_out_15,flush_prng_io_out_14,flush_prng_io_out_13,flush_prng_io_out_12,
    flush_prng_io_out_11,flush_prng_io_out_10,flush_prng_io_out_9,flush_prng_io_out_8,flush_lo}; // @[PRNG.scala 95:17]
  wire  flush = _flush_T[13]; // @[QueueFlushSpec.scala 86:20]
  wire  _GEN_25 = 5'h2 == outCnt ? 1'h0 : 1'h1; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_26 = 5'h3 == outCnt ? 1'h0 : _GEN_25; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_27 = 5'h4 == outCnt ? 1'h0 : _GEN_26; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_28 = 5'h5 == outCnt ? 1'h0 : _GEN_27; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_29 = 5'h6 == outCnt ? 1'h0 : _GEN_28; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_32 = 5'h9 == outCnt ? 1'h0 : 5'h8 == outCnt | (5'h7 == outCnt | _GEN_29); // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_33 = 5'ha == outCnt ? 1'h0 : _GEN_32; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_35 = 5'hc == outCnt ? 1'h0 : 5'hb == outCnt | _GEN_33; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_36 = 5'hd == outCnt ? 1'h0 : _GEN_35; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_37 = 5'he == outCnt ? 1'h0 : _GEN_36; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_38 = 5'hf == outCnt ? 1'h0 : _GEN_37; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_39 = 5'h10 == outCnt ? 1'h0 : _GEN_38; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_40 = 5'h11 == outCnt ? 1'h0 : _GEN_39; // @[QueueFlushSpec.scala 92:{26,26}]
  wire  _GEN_41 = 5'h12 == outCnt ? 1'h0 : _GEN_40; // @[QueueFlushSpec.scala 92:{26,26}]
  wire [4:0] _outCnt_T_1 = outCnt + 5'h1; // @[QueueFlushSpec.scala 93:22]
  wire [2:0] _currQCnt_T_4 = currQCnt - 3'h1; // @[QueueFlushSpec.scala 95:58]
  wire [2:0] _currQCnt_T_5 = _T ? currQCnt : _currQCnt_T_4; // @[QueueFlushSpec.scala 95:22]
  wire [4:0] _GEN_56 = {{2'd0}, _GEN_22}; // @[QueueFlushSpec.scala 100:22]
  wire [4:0] _outCnt_T_7 = outCnt + _GEN_56; // @[QueueFlushSpec.scala 100:22]
  wire  _GEN_58 = _T_1 & ~reset; // @[QueueFlushSpec.scala 60:11]
  wire  _GEN_61 = flushRegister & _T_4; // @[QueueFlushSpec.scala 64:11]
  Queue q ( // @[QueueFlushSpec.scala 42:17]
    .clock(q_clock),
    .reset(q_reset),
    .io_enq_ready(q_io_enq_ready),
    .io_enq_valid(q_io_enq_valid),
    .io_enq_bits(q_io_enq_bits),
    .io_deq_ready(q_io_deq_ready),
    .io_deq_valid(q_io_deq_valid),
    .io_deq_bits(q_io_deq_bits),
    .io_count(q_io_count),
    .io_flush(q_io_flush)
  );
  MaxPeriodFibonacciLFSR q_io_deq_ready_prng ( // @[PRNG.scala 91:22]
    .clock(q_io_deq_ready_prng_clock),
    .reset(q_io_deq_ready_prng_reset),
    .io_out_0(q_io_deq_ready_prng_io_out_0),
    .io_out_1(q_io_deq_ready_prng_io_out_1),
    .io_out_2(q_io_deq_ready_prng_io_out_2),
    .io_out_3(q_io_deq_ready_prng_io_out_3),
    .io_out_4(q_io_deq_ready_prng_io_out_4),
    .io_out_5(q_io_deq_ready_prng_io_out_5),
    .io_out_6(q_io_deq_ready_prng_io_out_6),
    .io_out_7(q_io_deq_ready_prng_io_out_7),
    .io_out_8(q_io_deq_ready_prng_io_out_8),
    .io_out_9(q_io_deq_ready_prng_io_out_9),
    .io_out_10(q_io_deq_ready_prng_io_out_10),
    .io_out_11(q_io_deq_ready_prng_io_out_11),
    .io_out_12(q_io_deq_ready_prng_io_out_12),
    .io_out_13(q_io_deq_ready_prng_io_out_13),
    .io_out_14(q_io_deq_ready_prng_io_out_14),
    .io_out_15(q_io_deq_ready_prng_io_out_15)
  );
  MaxPeriodFibonacciLFSR flush_prng ( // @[PRNG.scala 91:22]
    .clock(flush_prng_clock),
    .reset(flush_prng_reset),
    .io_out_0(flush_prng_io_out_0),
    .io_out_1(flush_prng_io_out_1),
    .io_out_2(flush_prng_io_out_2),
    .io_out_3(flush_prng_io_out_3),
    .io_out_4(flush_prng_io_out_4),
    .io_out_5(flush_prng_io_out_5),
    .io_out_6(flush_prng_io_out_6),
    .io_out_7(flush_prng_io_out_7),
    .io_out_8(flush_prng_io_out_8),
    .io_out_9(flush_prng_io_out_9),
    .io_out_10(flush_prng_io_out_10),
    .io_out_11(flush_prng_io_out_11),
    .io_out_12(flush_prng_io_out_12),
    .io_out_13(flush_prng_io_out_13),
    .io_out_14(flush_prng_io_out_14),
    .io_out_15(flush_prng_io_out_15)
  );
  assign q_clock = clock;
  assign q_reset = reset;
  assign q_io_enq_valid = value < 5'h14; // @[QueueFlushSpec.scala 51:34]
  assign q_io_enq_bits = 5'h13 == value | _GEN_18; // @[QueueFlushSpec.scala 54:{17,17}]
  assign q_io_deq_ready = _q_io_deq_ready_T[10]; // @[QueueFlushSpec.scala 52:29]
  assign q_io_flush = _flush_T[13]; // @[QueueFlushSpec.scala 86:20]
  assign q_io_deq_ready_prng_clock = clock;
  assign q_io_deq_ready_prng_reset = reset;
  assign flush_prng_clock = clock;
  assign flush_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      value <= 5'h0; // @[Counter.scala 62:40]
    end else if (_T) begin // @[QueueFlushSpec.scala 55:23]
      if (wrap) begin // @[Counter.scala 88:20]
        value <= 5'h0; // @[Counter.scala 88:28]
      end else begin
        value <= _value_T_1; // @[Counter.scala 78:15]
      end
    end
    if (reset) begin // @[QueueFlushSpec.scala 45:23]
      outCnt <= 5'h0; // @[QueueFlushSpec.scala 45:23]
    end else if (flush) begin // @[QueueFlushSpec.scala 98:15]
      outCnt <= _outCnt_T_7; // @[QueueFlushSpec.scala 100:12]
    end else if (_T_1) begin // @[QueueFlushSpec.scala 89:23]
      outCnt <= _outCnt_T_1; // @[QueueFlushSpec.scala 93:12]
    end
    if (reset) begin // @[QueueFlushSpec.scala 46:25]
      currQCnt <= 3'h0; // @[QueueFlushSpec.scala 46:25]
    end else if (flush) begin // @[QueueFlushSpec.scala 98:15]
      currQCnt <= 3'h0; // @[QueueFlushSpec.scala 101:14]
    end else if (_T_1) begin // @[QueueFlushSpec.scala 89:23]
      if (currQCnt > 3'h0) begin // @[QueueFlushSpec.scala 94:26]
        currQCnt <= _currQCnt_T_5; // @[QueueFlushSpec.scala 95:16]
      end else begin
        currQCnt <= _GEN_22;
      end
    end else begin
      currQCnt <= _GEN_22;
    end
    if (reset) begin // @[QueueFlushSpec.scala 49:30]
      flushRegister <= 1'h0; // @[QueueFlushSpec.scala 49:30]
    end else begin
      flushRegister <= flush; // @[QueueFlushSpec.scala 49:30]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~reset & ~(~flushRegister)) begin
          $fatal; // @[QueueFlushSpec.scala 60:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~reset & ~(~flushRegister)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at QueueFlushSpec.scala:60 assert(flushRegister === false.B) //check queue isn't flushed (can't dequeue an empty queue)\n"
            ); // @[QueueFlushSpec.scala 60:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (flushRegister & _T_4 & ~(~q_io_count)) begin
          $fatal; // @[QueueFlushSpec.scala 64:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (flushRegister & _T_4 & ~(~q_io_count)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n"); // @[QueueFlushSpec.scala 64:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_61 & ~(~q_io_deq_valid)) begin
          $fatal; // @[QueueFlushSpec.scala 65:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_61 & ~(~q_io_deq_valid)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n"
            ); // @[QueueFlushSpec.scala 65:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_61 & ~q_io_enq_ready) begin
          $fatal; // @[QueueFlushSpec.scala 66:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_61 & ~q_io_enq_ready) begin
          $fwrite(32'h80000002,
            "Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n"
            ); // @[QueueFlushSpec.scala 66:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_4) begin
          $finish; // @[QueueFlushSpec.scala 72:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_58 & ~(currQCnt <= 3'h1)) begin
          $fatal; // @[QueueFlushSpec.scala 91:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_58 & ~(currQCnt <= 3'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueFlushSpec.scala:91 assert(currQCnt <= queueDepth.U)\n"); // @[QueueFlushSpec.scala 91:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_58 & ~((5'h13 == outCnt | _GEN_41) == q_io_deq_bits)) begin
          $fatal; // @[QueueFlushSpec.scala 92:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_58 & ~((5'h13 == outCnt | _GEN_41) == q_io_deq_bits)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at QueueFlushSpec.scala:92 assert(elems(outCnt) === q.io.deq.bits)\n"); // @[QueueFlushSpec.scala 92:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (flush & _T_4 & ~(currQCnt == 3'h0 | q_io_deq_valid)) begin
          $fatal; // @[QueueFlushSpec.scala 99:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (flush & _T_4 & ~(currQCnt == 3'h0 | q_io_deq_valid)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at QueueFlushSpec.scala:99 assert(currQCnt === 0.U || q.io.deq.valid)\n"); // @[QueueFlushSpec.scala 99:11]
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
  value = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  outCnt = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  currQCnt = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  flushRegister = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
