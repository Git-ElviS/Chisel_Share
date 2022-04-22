module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [31:0] io_enq_bits,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram [0:3]; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire [1:0] ram_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [31:0] ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [31:0] ram_MPORT_data; // @[Decoupled.scala 259:95]
  wire [1:0] ram_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_en; // @[Decoupled.scala 259:95]
  reg [1:0] enq_ptr_value; // @[Counter.scala 62:40]
  reg [1:0] deq_ptr_value; // @[Counter.scala 62:40]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 263:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 264:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 265:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 50:35]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 78:24]
  wire [1:0] _value_T_3 = deq_ptr_value + 2'h1; // @[Counter.scala 78:24]
  assign ram_io_deq_bits_MPORT_en = 1'h1;
  assign ram_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_io_deq_bits_MPORT_data = ram[ram_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  assign ram_MPORT_data = io_enq_bits;
  assign ram_MPORT_addr = enq_ptr_value;
  assign ram_MPORT_mask = 1'h1;
  assign ram_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits = ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  always @(posedge clock) begin
    if (ram_MPORT_en & ram_MPORT_mask) begin
      ram[ram_MPORT_addr] <= ram_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (reset) begin // @[Counter.scala 62:40]
      enq_ptr_value <= 2'h0; // @[Counter.scala 62:40]
    end else if (do_enq) begin // @[Decoupled.scala 272:16]
      enq_ptr_value <= _value_T_1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Counter.scala 62:40]
      deq_ptr_value <= 2'h0; // @[Counter.scala 62:40]
    end else if (do_deq) begin // @[Decoupled.scala 276:16]
      deq_ptr_value <= _value_T_3; // @[Counter.scala 78:15]
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
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  enq_ptr_value = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  deq_ptr_value = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  maybe_full = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DedupQueues(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits
);
  wire  queues_0_clock; // @[DedupSpec.scala 16:34]
  wire  queues_0_reset; // @[DedupSpec.scala 16:34]
  wire  queues_0_io_enq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_0_io_enq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_0_io_enq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_0_io_deq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_0_io_deq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_0_io_deq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_1_clock; // @[DedupSpec.scala 16:34]
  wire  queues_1_reset; // @[DedupSpec.scala 16:34]
  wire  queues_1_io_enq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_1_io_enq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_1_io_enq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_1_io_deq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_1_io_deq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_1_io_deq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_2_clock; // @[DedupSpec.scala 16:34]
  wire  queues_2_reset; // @[DedupSpec.scala 16:34]
  wire  queues_2_io_enq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_2_io_enq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_2_io_enq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_2_io_deq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_2_io_deq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_2_io_deq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_3_clock; // @[DedupSpec.scala 16:34]
  wire  queues_3_reset; // @[DedupSpec.scala 16:34]
  wire  queues_3_io_enq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_3_io_enq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_3_io_enq_bits; // @[DedupSpec.scala 16:34]
  wire  queues_3_io_deq_ready; // @[DedupSpec.scala 16:34]
  wire  queues_3_io_deq_valid; // @[DedupSpec.scala 16:34]
  wire [31:0] queues_3_io_deq_bits; // @[DedupSpec.scala 16:34]
  Queue queues_0 ( // @[DedupSpec.scala 16:34]
    .clock(queues_0_clock),
    .reset(queues_0_reset),
    .io_enq_ready(queues_0_io_enq_ready),
    .io_enq_valid(queues_0_io_enq_valid),
    .io_enq_bits(queues_0_io_enq_bits),
    .io_deq_ready(queues_0_io_deq_ready),
    .io_deq_valid(queues_0_io_deq_valid),
    .io_deq_bits(queues_0_io_deq_bits)
  );
  Queue queues_1 ( // @[DedupSpec.scala 16:34]
    .clock(queues_1_clock),
    .reset(queues_1_reset),
    .io_enq_ready(queues_1_io_enq_ready),
    .io_enq_valid(queues_1_io_enq_valid),
    .io_enq_bits(queues_1_io_enq_bits),
    .io_deq_ready(queues_1_io_deq_ready),
    .io_deq_valid(queues_1_io_deq_valid),
    .io_deq_bits(queues_1_io_deq_bits)
  );
  Queue queues_2 ( // @[DedupSpec.scala 16:34]
    .clock(queues_2_clock),
    .reset(queues_2_reset),
    .io_enq_ready(queues_2_io_enq_ready),
    .io_enq_valid(queues_2_io_enq_valid),
    .io_enq_bits(queues_2_io_enq_bits),
    .io_deq_ready(queues_2_io_deq_ready),
    .io_deq_valid(queues_2_io_deq_valid),
    .io_deq_bits(queues_2_io_deq_bits)
  );
  Queue queues_3 ( // @[DedupSpec.scala 16:34]
    .clock(queues_3_clock),
    .reset(queues_3_reset),
    .io_enq_ready(queues_3_io_enq_ready),
    .io_enq_valid(queues_3_io_enq_valid),
    .io_enq_bits(queues_3_io_enq_bits),
    .io_deq_ready(queues_3_io_deq_ready),
    .io_deq_valid(queues_3_io_deq_valid),
    .io_deq_bits(queues_3_io_deq_bits)
  );
  assign io_in_ready = queues_0_io_enq_ready; // @[DedupSpec.scala 19:14]
  assign io_out_valid = queues_3_io_deq_valid; // @[DedupSpec.scala 22:10]
  assign io_out_bits = queues_3_io_deq_bits; // @[DedupSpec.scala 22:10]
  assign queues_0_clock = clock;
  assign queues_0_reset = reset;
  assign queues_0_io_enq_valid = io_in_valid; // @[DedupSpec.scala 19:14]
  assign queues_0_io_enq_bits = io_in_bits; // @[DedupSpec.scala 19:14]
  assign queues_0_io_deq_ready = queues_1_io_enq_ready; // @[DedupSpec.scala 19:14]
  assign queues_1_clock = clock;
  assign queues_1_reset = reset;
  assign queues_1_io_enq_valid = queues_0_io_deq_valid; // @[DedupSpec.scala 19:14]
  assign queues_1_io_enq_bits = queues_0_io_deq_bits; // @[DedupSpec.scala 19:14]
  assign queues_1_io_deq_ready = queues_2_io_enq_ready; // @[DedupSpec.scala 19:14]
  assign queues_2_clock = clock;
  assign queues_2_reset = reset;
  assign queues_2_io_enq_valid = queues_1_io_deq_valid; // @[DedupSpec.scala 19:14]
  assign queues_2_io_enq_bits = queues_1_io_deq_bits; // @[DedupSpec.scala 19:14]
  assign queues_2_io_deq_ready = queues_3_io_enq_ready; // @[DedupSpec.scala 19:14]
  assign queues_3_clock = clock;
  assign queues_3_reset = reset;
  assign queues_3_io_enq_valid = queues_2_io_deq_valid; // @[DedupSpec.scala 19:14]
  assign queues_3_io_enq_bits = queues_2_io_deq_bits; // @[DedupSpec.scala 19:14]
  assign queues_3_io_deq_ready = io_out_ready; // @[DedupSpec.scala 22:10]
endmodule
