module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_valid,
  input  [2:0] io_enq_bits,
  input        io_deq_ready,
  output       io_deq_valid,
  output [2:0] io_deq_bits,
  output [1:0] io_count,
  input        io_flush
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] ram [0:2]; // @[Decoupled.scala 259:95]
  wire  ram_io_deq_bits_MPORT_en; // @[Decoupled.scala 259:95]
  wire [1:0] ram_io_deq_bits_MPORT_addr; // @[Decoupled.scala 259:95]
  wire [2:0] ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 259:95]
  wire [2:0] ram_MPORT_data; // @[Decoupled.scala 259:95]
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
  wire  wrap = enq_ptr_value == 2'h2; // @[Counter.scala 74:24]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 78:24]
  wire  wrap_1 = deq_ptr_value == 2'h2; // @[Counter.scala 74:24]
  wire [1:0] _value_T_3 = deq_ptr_value + 2'h1; // @[Counter.scala 78:24]
  wire [1:0] ptr_diff = enq_ptr_value - deq_ptr_value; // @[Decoupled.scala 312:32]
  wire [1:0] _io_count_T = maybe_full ? 2'h3 : 2'h0; // @[Decoupled.scala 319:10]
  wire [1:0] _io_count_T_3 = 2'h3 + ptr_diff; // @[Decoupled.scala 320:57]
  wire [1:0] _io_count_T_4 = deq_ptr_value > enq_ptr_value ? _io_count_T_3 : ptr_diff; // @[Decoupled.scala 320:10]
  assign ram_io_deq_bits_MPORT_en = 1'h1;
  assign ram_io_deq_bits_MPORT_addr = deq_ptr_value;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign ram_io_deq_bits_MPORT_data = ram[ram_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  `else
  assign ram_io_deq_bits_MPORT_data = ram_io_deq_bits_MPORT_addr >= 2'h3 ? _RAND_1[2:0] :
    ram[ram_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 259:95]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign ram_MPORT_data = io_enq_bits;
  assign ram_MPORT_addr = enq_ptr_value;
  assign ram_MPORT_mask = 1'h1;
  assign ram_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~full; // @[Decoupled.scala 289:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 288:19]
  assign io_deq_bits = ram_io_deq_bits_MPORT_data; // @[Decoupled.scala 296:17]
  assign io_count = ptr_match ? _io_count_T : _io_count_T_4; // @[Decoupled.scala 317:20]
  always @(posedge clock) begin
    if (ram_MPORT_en & ram_MPORT_mask) begin
      ram[ram_MPORT_addr] <= ram_MPORT_data; // @[Decoupled.scala 259:95]
    end
    if (reset) begin // @[Counter.scala 62:40]
      enq_ptr_value <= 2'h0; // @[Counter.scala 62:40]
    end else if (io_flush) begin // @[Decoupled.scala 282:15]
      enq_ptr_value <= 2'h0; // @[Counter.scala 99:11]
    end else if (do_enq) begin // @[Decoupled.scala 272:16]
      if (wrap) begin // @[Counter.scala 88:20]
        enq_ptr_value <= 2'h0; // @[Counter.scala 88:28]
      end else begin
        enq_ptr_value <= _value_T_1; // @[Counter.scala 78:15]
      end
    end
    if (reset) begin // @[Counter.scala 62:40]
      deq_ptr_value <= 2'h0; // @[Counter.scala 62:40]
    end else if (io_flush) begin // @[Decoupled.scala 282:15]
      deq_ptr_value <= 2'h0; // @[Counter.scala 99:11]
    end else if (do_deq) begin // @[Decoupled.scala 276:16]
      if (wrap_1) begin // @[Counter.scala 88:20]
        deq_ptr_value <= 2'h0; // @[Counter.scala 88:28]
      end else begin
        deq_ptr_value <= _value_T_3; // @[Counter.scala 78:15]
      end
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
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_1 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    ram[initvar] = _RAND_0[2:0];
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
module DequeueFullQueueEdgecaseTester(
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
  wire [2:0] q_io_enq_bits; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_deq_ready; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_deq_valid; // @[QueueFlushSpec.scala 42:17]
  wire [2:0] q_io_deq_bits; // @[QueueFlushSpec.scala 42:17]
  wire [1:0] q_io_count; // @[QueueFlushSpec.scala 42:17]
  wire  q_io_flush; // @[QueueFlushSpec.scala 42:17]
  reg [4:0] value; // @[Counter.scala 62:40]
  reg [4:0] outCnt; // @[QueueFlushSpec.scala 45:23]
  reg [2:0] currQCnt; // @[QueueFlushSpec.scala 46:25]
  reg  flushRegister; // @[QueueFlushSpec.scala 49:30]
  wire [2:0] _GEN_1 = 5'h1 == value ? 3'h6 : 3'h4; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_2 = 5'h2 == value ? 3'h3 : _GEN_1; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_3 = 5'h3 == value ? 3'h0 : _GEN_2; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_4 = 5'h4 == value ? 3'h3 : _GEN_3; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_5 = 5'h5 == value ? 3'h2 : _GEN_4; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_6 = 5'h6 == value ? 3'h5 : _GEN_5; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_7 = 5'h7 == value ? 3'h4 : _GEN_6; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_8 = 5'h8 == value ? 3'h4 : _GEN_7; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_9 = 5'h9 == value ? 3'h6 : _GEN_8; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_10 = 5'ha == value ? 3'h2 : _GEN_9; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_11 = 5'hb == value ? 3'h0 : _GEN_10; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_12 = 5'hc == value ? 3'h4 : _GEN_11; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_13 = 5'hd == value ? 3'h7 : _GEN_12; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_14 = 5'he == value ? 3'h3 : _GEN_13; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_15 = 5'hf == value ? 3'h5 : _GEN_14; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_16 = 5'h10 == value ? 3'h6 : _GEN_15; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_17 = 5'h11 == value ? 3'h4 : _GEN_16; // @[QueueFlushSpec.scala 54:{17,17}]
  wire [2:0] _GEN_18 = 5'h12 == value ? 3'h4 : _GEN_17; // @[QueueFlushSpec.scala 54:{17,17}]
  wire  _T = q_io_enq_ready & q_io_enq_valid; // @[Decoupled.scala 50:35]
  wire  wrap = value == 5'h14; // @[Counter.scala 74:24]
  wire [4:0] _value_T_1 = value + 5'h1; // @[Counter.scala 78:24]
  wire [2:0] _currQCnt_T_1 = currQCnt + 3'h1; // @[QueueFlushSpec.scala 57:26]
  wire  _T_1 = q_io_deq_ready & q_io_deq_valid; // @[Decoupled.scala 50:35]
  wire  _T_4 = ~reset; // @[QueueFlushSpec.scala 60:11]
  wire  flush = currQCnt == 3'h1; // @[QueueFlushSpec.scala 211:21]
  wire [2:0] _GEN_24 = 5'h1 == outCnt ? 3'h6 : 3'h4; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_25 = 5'h2 == outCnt ? 3'h3 : _GEN_24; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_26 = 5'h3 == outCnt ? 3'h0 : _GEN_25; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_27 = 5'h4 == outCnt ? 3'h3 : _GEN_26; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_28 = 5'h5 == outCnt ? 3'h2 : _GEN_27; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_29 = 5'h6 == outCnt ? 3'h5 : _GEN_28; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_30 = 5'h7 == outCnt ? 3'h4 : _GEN_29; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_31 = 5'h8 == outCnt ? 3'h4 : _GEN_30; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_32 = 5'h9 == outCnt ? 3'h6 : _GEN_31; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_33 = 5'ha == outCnt ? 3'h2 : _GEN_32; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_34 = 5'hb == outCnt ? 3'h0 : _GEN_33; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_35 = 5'hc == outCnt ? 3'h4 : _GEN_34; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_36 = 5'hd == outCnt ? 3'h7 : _GEN_35; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_37 = 5'he == outCnt ? 3'h3 : _GEN_36; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_38 = 5'hf == outCnt ? 3'h5 : _GEN_37; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_39 = 5'h10 == outCnt ? 3'h6 : _GEN_38; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_40 = 5'h11 == outCnt ? 3'h4 : _GEN_39; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_41 = 5'h12 == outCnt ? 3'h4 : _GEN_40; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [2:0] _GEN_42 = 5'h13 == outCnt ? 3'h6 : _GEN_41; // @[QueueFlushSpec.scala 218:{26,26}]
  wire [4:0] _GEN_45 = {{2'd0}, currQCnt}; // @[QueueFlushSpec.scala 223:22]
  wire [4:0] _outCnt_T_1 = outCnt + _GEN_45; // @[QueueFlushSpec.scala 223:22]
  wire [4:0] _outCnt_T_3 = _outCnt_T_1 + 5'h1; // @[QueueFlushSpec.scala 223:33]
  wire  _GEN_46 = _T_1 & ~reset; // @[QueueFlushSpec.scala 60:11]
  wire  _GEN_49 = flushRegister & _T_4; // @[QueueFlushSpec.scala 64:11]
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
  assign q_clock = clock;
  assign q_reset = reset;
  assign q_io_enq_valid = ~flushRegister; // @[QueueFlushSpec.scala 212:21]
  assign q_io_enq_bits = 5'h13 == value ? 3'h6 : _GEN_18; // @[QueueFlushSpec.scala 54:{17,17}]
  assign q_io_deq_ready = currQCnt == 3'h1; // @[QueueFlushSpec.scala 211:21]
  assign q_io_flush = currQCnt == 3'h1; // @[QueueFlushSpec.scala 211:21]
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
    end else if (flush) begin // @[QueueFlushSpec.scala 221:15]
      outCnt <= _outCnt_T_3; // @[QueueFlushSpec.scala 223:12]
    end
    if (reset) begin // @[QueueFlushSpec.scala 46:25]
      currQCnt <= 3'h0; // @[QueueFlushSpec.scala 46:25]
    end else if (flush) begin // @[QueueFlushSpec.scala 221:15]
      currQCnt <= 3'h0; // @[QueueFlushSpec.scala 224:14]
    end else if (_T) begin // @[QueueFlushSpec.scala 55:23]
      currQCnt <= _currQCnt_T_1; // @[QueueFlushSpec.scala 57:14]
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
        if (flushRegister & _T_4 & ~(q_io_count == 2'h0)) begin
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
        if (flushRegister & _T_4 & ~(q_io_count == 2'h0)) begin
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
        if (_GEN_49 & ~(~q_io_deq_valid)) begin
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
        if (_GEN_49 & ~(~q_io_deq_valid)) begin
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
        if (_GEN_49 & ~q_io_enq_ready) begin
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
        if (_GEN_49 & ~q_io_enq_ready) begin
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
        if (_GEN_46 & ~(currQCnt <= 3'h3)) begin
          $fatal; // @[QueueFlushSpec.scala 217:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_46 & ~(currQCnt <= 3'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueFlushSpec.scala:217 assert(currQCnt <= queueDepth.U)\n"); // @[QueueFlushSpec.scala 217:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_46 & ~(_GEN_42 == q_io_deq_bits)) begin
          $fatal; // @[QueueFlushSpec.scala 218:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_46 & ~(_GEN_42 == q_io_deq_bits)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at QueueFlushSpec.scala:218 assert(elems(outCnt) === q.io.deq.bits)\n"); // @[QueueFlushSpec.scala 218:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_46 & ~(currQCnt > 3'h0)) begin
          $fatal; // @[QueueFlushSpec.scala 219:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_46 & ~(currQCnt > 3'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueFlushSpec.scala:219 assert(currQCnt > 0.U)\n"); // @[QueueFlushSpec.scala 219:11]
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
          $fatal; // @[QueueFlushSpec.scala 225:11]
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
            "Assertion failed\n    at QueueFlushSpec.scala:225 assert(currQCnt === 0.U || q.io.deq.valid)\n"); // @[QueueFlushSpec.scala 225:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_49 & ~(~_T_1)) begin
          $fatal; // @[QueueFlushSpec.scala 229:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_49 & ~(~_T_1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueFlushSpec.scala:229 assert(q.io.deq.fire === false.B)\n"); // @[QueueFlushSpec.scala 229:11]
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
