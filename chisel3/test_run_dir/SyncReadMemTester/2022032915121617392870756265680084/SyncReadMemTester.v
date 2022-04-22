module SyncReadMemTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] mem [0:1]; // @[Mem.scala 24:24]
  wire  mem_rdata_en; // @[Mem.scala 24:24]
  wire  mem_rdata_addr; // @[Mem.scala 24:24]
  wire [1:0] mem_rdata_data; // @[Mem.scala 24:24]
  wire [1:0] mem_MPORT_data; // @[Mem.scala 24:24]
  wire  mem_MPORT_addr; // @[Mem.scala 24:24]
  wire  mem_MPORT_mask; // @[Mem.scala 24:24]
  wire  mem_MPORT_en; // @[Mem.scala 24:24]
  wire [1:0] mem_MPORT_1_data; // @[Mem.scala 24:24]
  wire  mem_MPORT_1_addr; // @[Mem.scala 24:24]
  wire  mem_MPORT_1_mask; // @[Mem.scala 24:24]
  wire  mem_MPORT_1_en; // @[Mem.scala 24:24]
  reg  mem_rdata_en_pipe_0;
  reg  mem_rdata_addr_pipe_0;
  reg [2:0] cnt; // @[Counter.scala 62:40]
  wire  cnt_wrap_wrap = cnt == 3'h4; // @[Counter.scala 74:24]
  wire [2:0] _cnt_wrap_value_T_1 = cnt + 3'h1; // @[Counter.scala 78:24]
  wire [2:0] _rdata_T_1 = cnt - 3'h1; // @[Mem.scala 25:28]
  wire  _T = 3'h0 == cnt; // @[Mem.scala 27:15]
  wire  _T_2 = 3'h1 == cnt; // @[Mem.scala 27:15]
  wire  _T_4 = 3'h2 == cnt; // @[Mem.scala 27:15]
  wire  _T_7 = ~reset; // @[Mem.scala 30:21]
  wire  _T_9 = 3'h3 == cnt; // @[Mem.scala 27:15]
  wire  _T_14 = 3'h4 == cnt; // @[Mem.scala 27:15]
  wire  _GEN_24 = ~_T & ~_T_2; // @[Mem.scala 30:21]
  wire  _GEN_37 = _GEN_24 & ~_T_4; // @[Mem.scala 31:21]
  assign mem_rdata_en = mem_rdata_en_pipe_0;
  assign mem_rdata_addr = mem_rdata_addr_pipe_0;
  assign mem_rdata_data = mem[mem_rdata_addr]; // @[Mem.scala 24:24]
  assign mem_MPORT_data = 2'h3;
  assign mem_MPORT_addr = cnt[0];
  assign mem_MPORT_mask = 1'h1;
  assign mem_MPORT_en = 3'h0 == cnt;
  assign mem_MPORT_1_data = 2'h2;
  assign mem_MPORT_1_addr = cnt[0];
  assign mem_MPORT_1_mask = 1'h1;
  assign mem_MPORT_1_en = _T ? 1'h0 : _T_2;
  always @(posedge clock) begin
    if (mem_MPORT_en & mem_MPORT_mask) begin
      mem[mem_MPORT_addr] <= mem_MPORT_data; // @[Mem.scala 24:24]
    end
    if (mem_MPORT_1_en & mem_MPORT_1_mask) begin
      mem[mem_MPORT_1_addr] <= mem_MPORT_1_data; // @[Mem.scala 24:24]
    end
    mem_rdata_en_pipe_0 <= cnt != 3'h0;
    if (cnt != 3'h0) begin
      mem_rdata_addr_pipe_0 <= _rdata_T_1[0];
    end
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 3'h0; // @[Counter.scala 62:40]
    end else if (cnt_wrap_wrap) begin // @[Counter.scala 88:20]
      cnt <= 3'h0; // @[Counter.scala 88:28]
    end else begin
      cnt <= _cnt_wrap_value_T_1; // @[Counter.scala 78:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & ~_T_2 & _T_4 & ~reset & ~(mem_rdata_data == 2'h3)) begin
          $fatal; // @[Mem.scala 30:21]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & ~_T_2 & _T_4 & ~reset & ~(mem_rdata_data == 2'h3)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Mem.scala:30 is(2.U) { assert(rdata === 3.U) }\n"); // @[Mem.scala 30:21]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_24 & ~_T_4 & _T_9 & _T_7 & ~(mem_rdata_data == 2'h2)) begin
          $fatal; // @[Mem.scala 31:21]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_24 & ~_T_4 & _T_9 & _T_7 & ~(mem_rdata_data == 2'h2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Mem.scala:31 is(3.U) { assert(rdata === 2.U) }\n"); // @[Mem.scala 31:21]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_37 & ~_T_9 & _T_14 & _T_7) begin
          $finish; // @[Mem.scala 32:19]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    mem[initvar] = _RAND_0[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mem_rdata_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mem_rdata_addr_pipe_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  cnt = _RAND_3[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
