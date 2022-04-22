module MultiClockMemTest(
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
  reg [31:0] mem [0:7]; // @[MultiClockSpec.scala 78:16]
  wire  mem_rdata_en; // @[MultiClockSpec.scala 78:16]
  wire [2:0] mem_rdata_addr; // @[MultiClockSpec.scala 78:16]
  wire [31:0] mem_rdata_data; // @[MultiClockSpec.scala 78:16]
  wire [31:0] mem_MPORT_data; // @[MultiClockSpec.scala 78:16]
  wire [2:0] mem_MPORT_addr; // @[MultiClockSpec.scala 78:16]
  wire  mem_MPORT_mask; // @[MultiClockSpec.scala 78:16]
  wire  mem_MPORT_en; // @[MultiClockSpec.scala 78:16]
  wire [31:0] mem_MPORT_1_data; // @[MultiClockSpec.scala 78:16]
  wire [2:0] mem_MPORT_1_addr; // @[MultiClockSpec.scala 78:16]
  wire  mem_MPORT_1_mask; // @[MultiClockSpec.scala 78:16]
  wire  mem_MPORT_1_en; // @[MultiClockSpec.scala 78:16]
  wire  mem_clock;
  reg  cDiv; // @[MultiClockSpec.scala 74:21]
  reg [4:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 5'h13; // @[Counter.scala 74:24]
  wire [4:0] _wrap_value_T_1 = cycle + 5'h1; // @[Counter.scala 78:24]
  reg [2:0] waddr; // @[MultiClockSpec.scala 83:22]
  wire [2:0] _waddr_T_1 = waddr + 3'h1; // @[MultiClockSpec.scala 84:18]
  wire [2:0] raddr = waddr - 3'h1; // @[MultiClockSpec.scala 89:21]
  wire  _T_3 = cycle > 5'h0 & cycle < 5'h9; // @[MultiClockSpec.scala 93:20]
  wire  _T_6 = ~reset; // @[MultiClockSpec.scala 94:11]
  wire  _T_7 = ~(mem_rdata_data == 32'h7b); // @[MultiClockSpec.scala 94:11]
  wire  _T_8 = cycle >= 5'h8; // @[MultiClockSpec.scala 99:16]
  wire  _T_9 = cycle < 5'h10; // @[MultiClockSpec.scala 99:32]
  wire  _T_13 = cycle > 5'h8 & cycle < 5'h11; // @[MultiClockSpec.scala 105:20]
  wire [2:0] _GEN_1 = raddr % 3'h2; // @[MultiClockSpec.scala 106:16]
  wire  _T_15 = _GEN_1[1:0] == 2'h0; // @[MultiClockSpec.scala 106:22]
  assign mem_rdata_en = 1'h1;
  assign mem_rdata_addr = waddr - 3'h1;
  assign mem_rdata_data = mem[mem_rdata_addr]; // @[MultiClockSpec.scala 78:16]
  assign mem_MPORT_data = 32'h7b;
  assign mem_MPORT_addr = waddr;
  assign mem_MPORT_mask = 1'h1;
  assign mem_MPORT_en = cycle < 5'h8;
  assign mem_MPORT_1_data = 32'h1c8;
  assign mem_MPORT_1_addr = waddr;
  assign mem_MPORT_1_mask = 1'h1;
  assign mem_MPORT_1_en = _T_8 & _T_9;
  assign mem_clock = cDiv;
  always @(posedge clock) begin
    if (mem_MPORT_en & mem_MPORT_mask) begin
      mem[mem_MPORT_addr] <= mem_MPORT_data; // @[MultiClockSpec.scala 78:16]
    end
    cDiv <= reset | ~cDiv; // @[MultiClockSpec.scala 74:{21,21} 75:8]
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 5'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cycle <= 5'h0; // @[Counter.scala 88:28]
    end else begin
      cycle <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    if (reset) begin // @[MultiClockSpec.scala 83:22]
      waddr <= 3'h0; // @[MultiClockSpec.scala 83:22]
    end else begin
      waddr <= _waddr_T_1; // @[MultiClockSpec.scala 84:9]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3 & ~reset & ~(mem_rdata_data == 32'h7b)) begin
          $fatal; // @[MultiClockSpec.scala 94:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & ~reset & ~(mem_rdata_data == 32'h7b)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MultiClockSpec.scala:94 assert(rdata === 123.U)\n"); // @[MultiClockSpec.scala 94:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_13 & _T_15 & _T_6 & ~(mem_rdata_data == 32'h1c8)) begin
          $fatal; // @[MultiClockSpec.scala 107:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_13 & _T_15 & _T_6 & ~(mem_rdata_data == 32'h1c8)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MultiClockSpec.scala:107 assert(rdata === 456.U)\n"); // @[MultiClockSpec.scala 107:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_13 & ~_T_15 & _T_6 & _T_7) begin
          $fatal; // @[MultiClockSpec.scala 109:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_13 & ~_T_15 & _T_6 & _T_7) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MultiClockSpec.scala:109 assert(rdata === 123.U)\n"); // @[MultiClockSpec.scala 109:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_6) begin
          $finish; // @[MultiClockSpec.scala 113:20]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge mem_clock) begin
    if (mem_MPORT_1_en & mem_MPORT_1_mask) begin
      mem[mem_MPORT_1_addr] <= mem_MPORT_1_data; // @[MultiClockSpec.scala 78:16]
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
  for (initvar = 0; initvar < 8; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  cDiv = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  cycle = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  waddr = _RAND_3[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
