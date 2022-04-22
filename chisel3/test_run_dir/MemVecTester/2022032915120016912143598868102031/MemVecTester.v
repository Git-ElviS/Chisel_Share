module MemVecTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] mem_0 [0:1]; // @[Mem.scala 10:16]
  wire  mem_0_MPORT_1_en; // @[Mem.scala 10:16]
  wire  mem_0_MPORT_1_addr; // @[Mem.scala 10:16]
  wire [7:0] mem_0_MPORT_1_data; // @[Mem.scala 10:16]
  wire [7:0] mem_0_MPORT_data; // @[Mem.scala 10:16]
  wire  mem_0_MPORT_addr; // @[Mem.scala 10:16]
  wire  mem_0_MPORT_mask; // @[Mem.scala 10:16]
  wire  mem_0_MPORT_en; // @[Mem.scala 10:16]
  reg  cnt; // @[Counter.scala 62:40]
  wire  _wrap_value_T_1 = cnt + 1'h1; // @[Counter.scala 78:24]
  wire  _T_3 = ~reset; // @[Mem.scala 17:11]
  assign mem_0_MPORT_1_en = cnt;
  assign mem_0_MPORT_1_addr = 1'h0;
  assign mem_0_MPORT_1_data = mem_0[mem_0_MPORT_1_addr]; // @[Mem.scala 10:16]
  assign mem_0_MPORT_data = 8'h1;
  assign mem_0_MPORT_addr = 1'h0;
  assign mem_0_MPORT_mask = 1'h1;
  assign mem_0_MPORT_en = 1'h1;
  always @(posedge clock) begin
    if (mem_0_MPORT_en & mem_0_MPORT_mask) begin
      mem_0[mem_0_MPORT_addr] <= mem_0_MPORT_data; // @[Mem.scala 10:16]
    end
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 1'h0; // @[Counter.scala 62:40]
    end else begin
      cnt <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (cnt & ~reset & ~(mem_0_MPORT_1_data == 8'h1)) begin
          $fatal; // @[Mem.scala 17:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (cnt & ~reset & ~(mem_0_MPORT_1_data == 8'h1)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Mem.scala:17 assert(mem.read(0.U)(0) === 1.U)\n"); // @[Mem.scala 17:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (cnt & _T_3) begin
          $finish; // @[Mem.scala 18:9]
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
    mem_0[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  cnt = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
