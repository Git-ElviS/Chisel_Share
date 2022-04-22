module UsesThreeMems(
  input         clock,
  input         reset,
  input  [15:0] io_address,
  output [15:0] io_value1,
  output [15:0] io_value2,
  output [15:0] io_value3
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_MEM_INIT
  reg [15:0] memory1 [0:7]; // @[LoadMemoryFromFileSpec.scala 23:20]
  wire  memory1_io_value1_MPORT_en; // @[LoadMemoryFromFileSpec.scala 23:20]
  wire [2:0] memory1_io_value1_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 23:20]
  wire [15:0] memory1_io_value1_MPORT_data; // @[LoadMemoryFromFileSpec.scala 23:20]
  reg [15:0] memory2 [0:7]; // @[LoadMemoryFromFileSpec.scala 24:20]
  wire  memory2_io_value2_MPORT_en; // @[LoadMemoryFromFileSpec.scala 24:20]
  wire [2:0] memory2_io_value2_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 24:20]
  wire [15:0] memory2_io_value2_MPORT_data; // @[LoadMemoryFromFileSpec.scala 24:20]
  reg [15:0] memory3 [0:7]; // @[LoadMemoryFromFileSpec.scala 25:20]
  wire  memory3_io_value3_MPORT_en; // @[LoadMemoryFromFileSpec.scala 25:20]
  wire [2:0] memory3_io_value3_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 25:20]
  wire [15:0] memory3_io_value3_MPORT_data; // @[LoadMemoryFromFileSpec.scala 25:20]
  assign memory1_io_value1_MPORT_en = 1'h1;
  assign memory1_io_value1_MPORT_addr = io_address[2:0];
  assign memory1_io_value1_MPORT_data = memory1[memory1_io_value1_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 23:20]
  assign memory2_io_value2_MPORT_en = 1'h1;
  assign memory2_io_value2_MPORT_addr = io_address[2:0];
  assign memory2_io_value2_MPORT_data = memory2[memory2_io_value2_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 24:20]
  assign memory3_io_value3_MPORT_en = 1'h1;
  assign memory3_io_value3_MPORT_addr = io_address[2:0];
  assign memory3_io_value3_MPORT_data = memory3[memory3_io_value3_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 25:20]
  assign io_value1 = memory1_io_value1_MPORT_data; // @[LoadMemoryFromFileSpec.scala 30:13]
  assign io_value2 = memory2_io_value2_MPORT_data; // @[LoadMemoryFromFileSpec.scala 31:13]
  assign io_value3 = memory3_io_value3_MPORT_data; // @[LoadMemoryFromFileSpec.scala 32:13]
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
    memory1[initvar] = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8; initvar = initvar+1)
    memory2[initvar] = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8; initvar = initvar+1)
    memory3[initvar] = _RAND_2[15:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
