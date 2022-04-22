module SyncReadMemWriteCollisionTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] m0 [0:1]; // @[Mem.scala 40:23]
  wire  m0_rd0_en; // @[Mem.scala 40:23]
  wire  m0_rd0_addr; // @[Mem.scala 40:23]
  wire [1:0] m0_rd0_data; // @[Mem.scala 40:23]
  wire [1:0] m0_MPORT_data; // @[Mem.scala 40:23]
  wire  m0_MPORT_addr; // @[Mem.scala 40:23]
  wire  m0_MPORT_mask; // @[Mem.scala 40:23]
  wire  m0_MPORT_en; // @[Mem.scala 40:23]
  reg  m0_rd0_en_pipe_0;
  reg  m0_rd0_addr_pipe_0;
  reg [1:0] m1 [0:1]; // @[Mem.scala 45:23]
  wire  m1_rd1_en; // @[Mem.scala 45:23]
  wire  m1_rd1_addr; // @[Mem.scala 45:23]
  wire [1:0] m1_rd1_data; // @[Mem.scala 45:23]
  wire [1:0] m1_MPORT_1_data; // @[Mem.scala 45:23]
  wire  m1_MPORT_1_addr; // @[Mem.scala 45:23]
  wire  m1_MPORT_1_mask; // @[Mem.scala 45:23]
  wire  m1_MPORT_1_en; // @[Mem.scala 45:23]
  reg [1:0] m1_rd1_data_pipe_0;
  reg [2:0] cnt; // @[Counter.scala 62:40]
  wire  cnt_wrap_wrap = cnt == 3'h4; // @[Counter.scala 74:24]
  wire [2:0] _cnt_wrap_value_T_1 = cnt + 3'h1; // @[Counter.scala 78:24]
  wire  _T_2 = cnt == 3'h3; // @[Mem.scala 50:12]
  wire  _T_5 = ~reset; // @[Mem.scala 51:11]
  wire  _GEN_8 = _T_2 & ~reset; // @[Mem.scala 51:11]
  assign m0_rd0_en = m0_rd0_en_pipe_0;
  assign m0_rd0_addr = m0_rd0_addr_pipe_0;
  assign m0_rd0_data = m0[m0_rd0_addr]; // @[Mem.scala 40:23]
  assign m0_MPORT_data = cnt[1:0];
  assign m0_MPORT_addr = cnt[0];
  assign m0_MPORT_mask = 1'h1;
  assign m0_MPORT_en = 1'h1;
  assign m1_rd1_en = 1'h1;
  assign m1_rd1_addr = cnt[0];
  assign m1_rd1_data = m1[m1_rd1_addr]; // @[Mem.scala 45:23]
  assign m1_MPORT_1_data = cnt[1:0];
  assign m1_MPORT_1_addr = cnt[0];
  assign m1_MPORT_1_mask = 1'h1;
  assign m1_MPORT_1_en = 1'h1;
  always @(posedge clock) begin
    if (m0_MPORT_en & m0_MPORT_mask) begin
      m0[m0_MPORT_addr] <= m0_MPORT_data; // @[Mem.scala 40:23]
    end
    m0_rd0_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      m0_rd0_addr_pipe_0 <= cnt[0];
    end
    if (m1_MPORT_1_en & m1_MPORT_1_mask) begin
      m1[m1_MPORT_1_addr] <= m1_MPORT_1_data; // @[Mem.scala 45:23]
    end
    if (1'h1) begin
      m1_rd1_data_pipe_0 <= m1_rd1_data;
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
        if (_T_2 & ~reset & ~(m0_rd0_data == 2'h2)) begin
          $fatal; // @[Mem.scala 51:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~reset & ~(m0_rd0_data == 2'h2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Mem.scala:51 assert(rd0 === 2.U)\n"); // @[Mem.scala 51:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & ~(m1_rd1_data_pipe_0 == 2'h0)) begin
          $fatal; // @[Mem.scala 52:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_8 & ~(m1_rd1_data_pipe_0 == 2'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Mem.scala:52 assert(rd1 === 0.U)\n"); // @[Mem.scala 52:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (cnt_wrap_wrap & _T_5) begin
          $finish; // @[Mem.scala 56:9]
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
    m0[initvar] = _RAND_0[1:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    m1[initvar] = _RAND_3[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  m0_rd0_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  m0_rd0_addr_pipe_0 = _RAND_2[0:0];
  _RAND_4 = {1{`RANDOM}};
  m1_rd1_data_pipe_0 = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  cnt = _RAND_5[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
