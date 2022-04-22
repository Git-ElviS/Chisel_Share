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
  reg [31:0] ram [0:1]; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [31:0] ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [31:0] ram_MPORT_data; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_MPORT_en; // @[Decoupled.scala 259:95]
  reg  enq_ptr_value; // @[Counter.scala 62:40]
  reg  deq_ptr_value; // @[Counter.scala 62:40]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 263:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 264:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 265:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 50:35]
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
      enq_ptr_value <= 1'h0; // @[Counter.scala 62:40]
    end else if (do_enq) begin // @[Decoupled.scala 272:16]
      enq_ptr_value <= enq_ptr_value + 1'h1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Counter.scala 62:40]
      deq_ptr_value <= 1'h0; // @[Counter.scala 62:40]
    end else if (do_deq) begin // @[Decoupled.scala 276:16]
      deq_ptr_value <= deq_ptr_value + 1'h1; // @[Counter.scala 78:15]
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
    ram[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  enq_ptr_value = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  deq_ptr_value = _RAND_2[0:0];
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
module QueueClone(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits
);
  wire  q1_clock; // @[CloneModuleSpec.scala 37:20]
  wire  q1_reset; // @[CloneModuleSpec.scala 37:20]
  wire  q1_io_enq_ready; // @[CloneModuleSpec.scala 37:20]
  wire  q1_io_enq_valid; // @[CloneModuleSpec.scala 37:20]
  wire [31:0] q1_io_enq_bits; // @[CloneModuleSpec.scala 37:20]
  wire  q1_io_deq_ready; // @[CloneModuleSpec.scala 37:20]
  wire  q1_io_deq_valid; // @[CloneModuleSpec.scala 37:20]
  wire [31:0] q1_io_deq_bits; // @[CloneModuleSpec.scala 37:20]
  wire  q2_io_clock; // @[CloneModuleSpec.scala 38:36]
  wire  q2_io_reset; // @[CloneModuleSpec.scala 38:36]
  wire  q2_io_io_enq_ready; // @[CloneModuleSpec.scala 38:36]
  wire  q2_io_io_enq_valid; // @[CloneModuleSpec.scala 38:36]
  wire [31:0] q2_io_io_enq_bits; // @[CloneModuleSpec.scala 38:36]
  wire  q2_io_io_deq_ready; // @[CloneModuleSpec.scala 38:36]
  wire  q2_io_io_deq_valid; // @[CloneModuleSpec.scala 38:36]
  wire [31:0] q2_io_io_deq_bits; // @[CloneModuleSpec.scala 38:36]
  Queue q1 ( // @[CloneModuleSpec.scala 37:20]
    .clock(q1_clock),
    .reset(q1_reset),
    .io_enq_ready(q1_io_enq_ready),
    .io_enq_valid(q1_io_enq_valid),
    .io_enq_bits(q1_io_enq_bits),
    .io_deq_ready(q1_io_deq_ready),
    .io_deq_valid(q1_io_deq_valid),
    .io_deq_bits(q1_io_deq_bits)
  );
  Queue q2_io ( // @[CloneModuleSpec.scala 38:36]
    .clock(q2_io_clock),
    .reset(q2_io_reset),
    .io_enq_ready(q2_io_io_enq_ready),
    .io_enq_valid(q2_io_io_enq_valid),
    .io_enq_bits(q2_io_io_enq_bits),
    .io_deq_ready(q2_io_io_deq_ready),
    .io_deq_valid(q2_io_io_deq_valid),
    .io_deq_bits(q2_io_io_deq_bits)
  );
  assign io_enq_ready = q1_io_enq_ready; // @[CloneModuleSpec.scala 39:15]
  assign io_deq_valid = q2_io_io_deq_valid; // @[CloneModuleSpec.scala 42:12]
  assign io_deq_bits = q2_io_io_deq_bits; // @[CloneModuleSpec.scala 42:12]
  assign q1_clock = clock;
  assign q1_reset = reset;
  assign q1_io_enq_valid = io_enq_valid; // @[CloneModuleSpec.scala 39:15]
  assign q1_io_enq_bits = 32'h2a; // @[CloneModuleSpec.scala 39:15]
  assign q1_io_deq_ready = q2_io_io_enq_ready; // @[CloneModuleSpec.scala 41:22]
  assign q2_io_clock = clock; // @[CloneModuleSpec.scala 38:36]
  assign q2_io_reset = reset; // @[CloneModuleSpec.scala 38:36]
  assign q2_io_io_enq_valid = q1_io_deq_valid; // @[CloneModuleSpec.scala 41:22]
  assign q2_io_io_enq_bits = q1_io_deq_bits; // @[CloneModuleSpec.scala 41:22]
  assign q2_io_io_deq_ready = io_deq_ready; // @[CloneModuleSpec.scala 42:12]
endmodule
module QueueCloneTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[CloneModuleSpec.scala 48:19]
  wire  dut_reset; // @[CloneModuleSpec.scala 48:19]
  wire  dut_io_enq_ready; // @[CloneModuleSpec.scala 48:19]
  wire  dut_io_enq_valid; // @[CloneModuleSpec.scala 48:19]
  wire  dut_io_deq_ready; // @[CloneModuleSpec.scala 48:19]
  wire  dut_io_deq_valid; // @[CloneModuleSpec.scala 48:19]
  wire [31:0] dut_io_deq_bits; // @[CloneModuleSpec.scala 48:19]
  wire  _start_T = dut_io_enq_ready & dut_io_enq_valid; // @[Decoupled.scala 50:35]
  reg  start; // @[CloneModuleSpec.scala 49:22]
  reg  accept; // @[CloneModuleSpec.scala 50:23]
  wire  _T = dut_io_deq_ready & dut_io_deq_valid; // @[Decoupled.scala 50:35]
  wire  _T_3 = ~reset; // @[CloneModuleSpec.scala 55:11]
  QueueClone dut ( // @[CloneModuleSpec.scala 48:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_enq_ready(dut_io_enq_ready),
    .io_enq_valid(dut_io_enq_valid),
    .io_deq_ready(dut_io_deq_ready),
    .io_deq_valid(dut_io_deq_valid),
    .io_deq_bits(dut_io_deq_bits)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_enq_valid = start; // @[CloneModuleSpec.scala 52:20]
  assign dut_io_deq_ready = accept; // @[CloneModuleSpec.scala 53:20]
  always @(posedge clock) begin
    start <= reset | _start_T; // @[CloneModuleSpec.scala 49:{22,22,22}]
    if (reset) begin // @[CloneModuleSpec.scala 50:23]
      accept <= 1'h0; // @[CloneModuleSpec.scala 50:23]
    end else begin
      accept <= dut_io_deq_valid; // @[CloneModuleSpec.scala 50:23]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(dut_io_deq_bits == 32'h2a)) begin
          $fatal; // @[CloneModuleSpec.scala 55:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(dut_io_deq_bits == 32'h2a)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at CloneModuleSpec.scala:55 assert(dut.io.deq.bits === x.U)\n"); // @[CloneModuleSpec.scala 55:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & _T_3) begin
          $finish; // @[CloneModuleSpec.scala 56:9]
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
  start = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  accept = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
