module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  output        io_deq_valid,
  output [31:0] io_deq_bits_bar,
  output [31:0] io_deq_bits_foo
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram_bar [0:3]; // @[Decoupled.scala 259:95]
  wire  ram_bar_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire [1:0] ram_bar_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [31:0] ram_bar_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [31:0] ram_bar_MPORT_data; // @[Decoupled.scala 259:95]
  wire [1:0] ram_bar_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_bar_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_bar_MPORT_en; // @[Decoupled.scala 259:95]
  reg [31:0] ram_foo [0:3]; // @[Decoupled.scala 259:95]
  wire  ram_foo_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire [1:0] ram_foo_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [31:0] ram_foo_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [31:0] ram_foo_MPORT_data; // @[Decoupled.scala 259:95]
  wire [1:0] ram_foo_MPORT_addr; // @[Decoupled.scala 259:95]
  wire  ram_foo_MPORT_mask; // @[Decoupled.scala 259:95]
  wire  ram_foo_MPORT_en; // @[Decoupled.scala 259:95]
  reg [1:0] enq_ptr_value; // @[Counter.scala 62:40]
  reg [1:0] deq_ptr_value; // @[Counter.scala 62:40]
  reg  maybe_full; // @[Decoupled.scala 262:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 263:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 264:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 265:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 50:35]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 78:24]
  wire [1:0] _value_T_3 = deq_ptr_value + 2'h1; // @[Counter.scala 78:24]
  assign ram_bar_io_deq_bits_MPORT_en = 1'h1;
  assign ram_bar_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_bar_io_deq_bits_MPORT_data = ram_bar[ram_bar_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  assign ram_bar_MPORT_data = 32'h162e;
  assign ram_bar_MPORT_addr = enq_ptr_value;
  assign ram_bar_MPORT_mask = 1'h1;
  assign ram_bar_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_foo_io_deq_bits_MPORT_en = 1'h1;
  assign ram_foo_io_deq_bits_MPORT_addr = deq_ptr_value;
  assign ram_foo_io_deq_bits_MPORT_data = ram_foo[ram_foo_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  assign ram_foo_MPORT_data = 32'h4d2;
  assign ram_foo_MPORT_addr = enq_ptr_value;
  assign ram_foo_MPORT_mask = 1'h1;
  assign ram_foo_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits_bar = ram_bar_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  assign io_deq_bits_foo = ram_foo_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  always @(posedge clock) begin
    if (ram_bar_MPORT_en & ram_bar_MPORT_mask) begin
      ram_bar[ram_bar_MPORT_addr] <= ram_bar_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (ram_foo_MPORT_en & ram_foo_MPORT_mask) begin
      ram_foo[ram_foo_MPORT_addr] <= ram_foo_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (reset) begin // @[Counter.scala 62:40]
      enq_ptr_value <= 2'h0; // @[Counter.scala 62:40]
    end else if (do_enq) begin // @[Decoupled.scala 272:16]
      enq_ptr_value <= _value_T_1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Counter.scala 62:40]
      deq_ptr_value <= 2'h0; // @[Counter.scala 62:40]
    end else if (io_deq_valid) begin // @[Decoupled.scala 276:16]
      deq_ptr_value <= _value_T_3; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[Decoupled.scala 262:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 262:27]
    end else if (do_enq != io_deq_valid) begin // @[Decoupled.scala 279:27]
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
    ram_bar[initvar] = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    ram_foo[initvar] = _RAND_1[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  enq_ptr_value = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  deq_ptr_value = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  maybe_full = _RAND_4[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RecordQueueTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  queue_clock; // @[RecordSpec.scala 59:23]
  wire  queue_reset; // @[RecordSpec.scala 59:23]
  wire  queue_io_enq_ready; // @[RecordSpec.scala 59:23]
  wire  queue_io_enq_valid; // @[RecordSpec.scala 59:23]
  wire  queue_io_deq_valid; // @[RecordSpec.scala 59:23]
  wire [31:0] queue_io_deq_bits_bar; // @[RecordSpec.scala 59:23]
  wire [31:0] queue_io_deq_bits_foo; // @[RecordSpec.scala 59:23]
  reg [1:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cycle + 2'h1; // @[Counter.scala 78:24]
  wire  _T_1 = cycle == 2'h1; // @[RecordSpec.scala 69:16]
  wire  _T_4 = ~reset; // @[RecordSpec.scala 71:13]
  wire  _GEN_6 = _T_1 & ~reset; // @[RecordSpec.scala 71:13]
  Queue queue ( // @[RecordSpec.scala 59:23]
    .clock(queue_clock),
    .reset(queue_reset),
    .io_enq_ready(queue_io_enq_ready),
    .io_enq_valid(queue_io_enq_valid),
    .io_deq_valid(queue_io_deq_valid),
    .io_deq_bits_bar(queue_io_deq_bits_bar),
    .io_deq_bits_foo(queue_io_deq_bits_foo)
  );
  assign queue_clock = clock;
  assign queue_reset = reset;
  assign queue_io_enq_valid = cycle == 2'h0; // @[RecordSpec.scala 64:16]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      cycle <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~reset & ~queue_io_deq_valid) begin
          $fatal; // @[RecordSpec.scala 71:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~reset & ~queue_io_deq_valid) begin
          $fwrite(32'h80000002,"Assertion failed\n    at RecordSpec.scala:71 assert(queue.io.deq.valid === true.B)\n"); // @[RecordSpec.scala 71:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_6 & ~(queue_io_deq_bits_foo == 32'h4d2)) begin
          $fatal; // @[RecordSpec.scala 72:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_6 & ~(queue_io_deq_bits_foo == 32'h4d2)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at RecordSpec.scala:72 assert(queue.io.deq.bits(\"foo\").asUInt === 1234.U)\n"); // @[RecordSpec.scala 72:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_6 & ~(queue_io_deq_bits_bar == 32'h162e)) begin
          $fatal; // @[RecordSpec.scala 73:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_6 & ~(queue_io_deq_bits_bar == 32'h162e)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at RecordSpec.scala:73 assert(queue.io.deq.bits(\"bar\").asUInt === 5678.U)\n"); // @[RecordSpec.scala 73:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_4) begin
          $finish; // @[RecordSpec.scala 76:11]
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
  cycle = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
