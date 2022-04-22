module Tbl(
  input   clock,
  input   io_wi,
  input   io_ri,
  input   io_d,
  output  io_o
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg  m [0:1]; // @[Tbl.scala 17:14]
  wire  m_io_o_MPORT_en; // @[Tbl.scala 17:14]
  wire  m_io_o_MPORT_addr; // @[Tbl.scala 17:14]
  wire  m_io_o_MPORT_data; // @[Tbl.scala 17:14]
  wire  m_MPORT_data; // @[Tbl.scala 17:14]
  wire  m_MPORT_addr; // @[Tbl.scala 17:14]
  wire  m_MPORT_mask; // @[Tbl.scala 17:14]
  wire  m_MPORT_en; // @[Tbl.scala 17:14]
  assign m_io_o_MPORT_en = 1'h1;
  assign m_io_o_MPORT_addr = io_ri;
  assign m_io_o_MPORT_data = m[m_io_o_MPORT_addr]; // @[Tbl.scala 17:14]
  assign m_MPORT_data = io_d;
  assign m_MPORT_addr = io_wi;
  assign m_MPORT_mask = 1'h1;
  assign m_MPORT_en = 1'h1;
  assign io_o = io_ri == io_wi ? io_d : m_io_o_MPORT_data; // @[Tbl.scala 21:27 22:12 18:8]
  always @(posedge clock) begin
    if (m_MPORT_en & m_MPORT_mask) begin
      m[m_MPORT_addr] <= m_MPORT_data; // @[Tbl.scala 17:14]
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
    m[initvar] = _RAND_0[0:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TblTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[Tbl.scala 29:19]
  wire  dut_io_wi; // @[Tbl.scala 29:19]
  wire  dut_io_ri; // @[Tbl.scala 29:19]
  wire  dut_io_d; // @[Tbl.scala 29:19]
  wire  dut_io_o; // @[Tbl.scala 29:19]
  reg [2:0] cnt; // @[Counter.scala 62:40]
  wire  wrap_wrap = cnt == 3'h7; // @[Counter.scala 74:24]
  wire [2:0] _wrap_value_T_1 = cnt + 3'h1; // @[Counter.scala 78:24]
  wire [2:0] _prev_idx_T_1 = cnt - 3'h1; // @[Tbl.scala 32:28]
  wire  _GEN_4 = 3'h2 == cnt ? 1'h0 : 3'h1 == cnt; // @[Tbl.scala 34:{13,13}]
  wire  _GEN_5 = 3'h3 == cnt ? 1'h0 : _GEN_4; // @[Tbl.scala 34:{13,13}]
  wire  _GEN_6 = 3'h4 == cnt ? 1'h0 : _GEN_5; // @[Tbl.scala 34:{13,13}]
  wire  _GEN_36 = 3'h7 == cnt; // @[Tbl.scala 34:{13,13}]
  wire  _GEN_9 = 3'h7 == cnt | (3'h6 == cnt | (3'h5 == cnt | _GEN_6)); // @[Tbl.scala 34:{13,13}]
  wire  _GEN_12 = 3'h2 == _prev_idx_T_1 ? 1'h0 : 3'h1 == _prev_idx_T_1; // @[Tbl.scala 35:{13,13}]
  wire  _GEN_13 = 3'h3 == _prev_idx_T_1 ? 1'h0 : _GEN_12; // @[Tbl.scala 35:{13,13}]
  wire  _GEN_14 = 3'h4 == _prev_idx_T_1 ? 1'h0 : _GEN_13; // @[Tbl.scala 35:{13,13}]
  wire  _GEN_39 = 3'h7 == _prev_idx_T_1; // @[Tbl.scala 35:{13,13}]
  wire  _GEN_17 = 3'h7 == _prev_idx_T_1 | (3'h6 == _prev_idx_T_1 | (3'h5 == _prev_idx_T_1 | _GEN_14)); // @[Tbl.scala 35:{13,13}]
  wire  _GEN_22 = 3'h4 == cnt ? 1'h0 : 3'h3 == cnt; // @[Tbl.scala 37:{12,12}]
  wire  _GEN_23 = 3'h5 == cnt ? 1'h0 : _GEN_22; // @[Tbl.scala 37:{12,12}]
  wire  _GEN_24 = 3'h6 == cnt ? 1'h0 : _GEN_23; // @[Tbl.scala 37:{12,12}]
  wire  _GEN_25 = _GEN_36 | _GEN_24; // @[Tbl.scala 37:{12,12}]
  wire  _T = cnt > 3'h0; // @[Tbl.scala 38:12]
  wire  _T_1 = _GEN_17 == _GEN_9; // @[Tbl.scala 39:19]
  wire  _T_4 = ~reset; // @[Tbl.scala 40:13]
  wire  _GEN_30 = 3'h4 == _prev_idx_T_1 ? 1'h0 : 3'h3 == _prev_idx_T_1; // @[Tbl.scala 42:{23,23}]
  wire  _GEN_31 = 3'h5 == _prev_idx_T_1 ? 1'h0 : _GEN_30; // @[Tbl.scala 42:{23,23}]
  wire  _GEN_32 = 3'h6 == _prev_idx_T_1 ? 1'h0 : _GEN_31; // @[Tbl.scala 42:{23,23}]
  Tbl dut ( // @[Tbl.scala 29:19]
    .clock(dut_clock),
    .io_wi(dut_io_wi),
    .io_ri(dut_io_ri),
    .io_d(dut_io_d),
    .io_o(dut_io_o)
  );
  assign dut_clock = clock;
  assign dut_io_wi = 3'h7 == cnt | (3'h6 == cnt | (3'h5 == cnt | _GEN_6)); // @[Tbl.scala 34:{13,13}]
  assign dut_io_ri = 3'h7 == _prev_idx_T_1 | (3'h6 == _prev_idx_T_1 | (3'h5 == _prev_idx_T_1 | _GEN_14)); // @[Tbl.scala 35:{13,13}]
  assign dut_io_d = _GEN_36 | _GEN_24; // @[Tbl.scala 37:{12,12}]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 3'h0; // @[Counter.scala 62:40]
    end else begin
      cnt <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & _T_1 & ~reset & ~(dut_io_o == _GEN_25)) begin
          $fatal; // @[Tbl.scala 40:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & _T_1 & ~reset & ~(dut_io_o == _GEN_25)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n"); // @[Tbl.scala 40:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~_T_1 & _T_4 & ~(dut_io_o == (_GEN_39 | _GEN_32))) begin
          $fatal; // @[Tbl.scala 42:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~_T_1 & _T_4 & ~(dut_io_o == (_GEN_39 | _GEN_32))) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n"); // @[Tbl.scala 42:13]
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
          $finish; // @[Tbl.scala 46:9]
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
  cnt = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
