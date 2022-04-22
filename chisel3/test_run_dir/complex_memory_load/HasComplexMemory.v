module HasComplexMemory(
  input        clock,
  input        reset,
  input  [2:0] io_address,
  output [7:0] io_value_a,
  output [7:0] io_value_b,
  output       io_value_c
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_MEM_INIT
  reg [7:0] memory_a [0:7]; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire  memory_a_io_value_MPORT_en; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire [2:0] memory_a_io_value_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire [7:0] memory_a_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 126:19]
  reg [7:0] memory_b [0:7]; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire  memory_b_io_value_MPORT_en; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire [2:0] memory_b_io_value_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire [7:0] memory_b_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 126:19]
  reg  memory_c [0:7]; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire  memory_c_io_value_MPORT_en; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire [2:0] memory_c_io_value_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 126:19]
  wire  memory_c_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 126:19]
  assign memory_a_io_value_MPORT_en = 1'h1;
  assign memory_a_io_value_MPORT_addr = io_address;
  assign memory_a_io_value_MPORT_data = memory_a[memory_a_io_value_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 126:19]
  assign memory_b_io_value_MPORT_en = 1'h1;
  assign memory_b_io_value_MPORT_addr = io_address;
  assign memory_b_io_value_MPORT_data = memory_b[memory_b_io_value_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 126:19]
  assign memory_c_io_value_MPORT_en = 1'h1;
  assign memory_c_io_value_MPORT_addr = io_address;
  assign memory_c_io_value_MPORT_data = memory_c[memory_c_io_value_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 126:19]
  assign io_value_a = memory_a_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 130:12]
  assign io_value_b = memory_b_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 130:12]
  assign io_value_c = memory_c_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 130:12]
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
    memory_a[initvar] = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8; initvar = initvar+1)
    memory_b[initvar] = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8; initvar = initvar+1)
    memory_c[initvar] = _RAND_2[0:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
