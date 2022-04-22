module UsesMemLow(
  input         clock,
  input  [15:0] io_address,
  output [15:0] io_value
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [15:0] memory [0:7]; // @[LoadMemoryFromFileSpec.scala 88:19]
  wire  memory_io_value_MPORT_en; // @[LoadMemoryFromFileSpec.scala 88:19]
  wire [2:0] memory_io_value_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 88:19]
  wire [15:0] memory_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 88:19]
  assign memory_io_value_MPORT_en = 1'h1;
  assign memory_io_value_MPORT_addr = io_address[2:0];
  assign memory_io_value_MPORT_data = memory[memory_io_value_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 88:19]
  assign io_value = memory_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 92:12]
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
    memory[initvar] = _RAND_0[15:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module UsesMem(
  input         clock,
  input         reset,
  input  [15:0] io_address,
  output [15:0] io_value,
  output [15:0] io_value1,
  output [15:0] io_value2
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [15:0] memory [0:7]; // @[LoadMemoryFromFileSpec.scala 68:19]
  wire  memory_io_value_MPORT_en; // @[LoadMemoryFromFileSpec.scala 68:19]
  wire [2:0] memory_io_value_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 68:19]
  wire [15:0] memory_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 68:19]
  wire  low1_clock; // @[LoadMemoryFromFileSpec.scala 73:20]
  wire [15:0] low1_io_address; // @[LoadMemoryFromFileSpec.scala 73:20]
  wire [15:0] low1_io_value; // @[LoadMemoryFromFileSpec.scala 73:20]
  wire  low2_clock; // @[LoadMemoryFromFileSpec.scala 74:20]
  wire [15:0] low2_io_address; // @[LoadMemoryFromFileSpec.scala 74:20]
  wire [15:0] low2_io_value; // @[LoadMemoryFromFileSpec.scala 74:20]
  UsesMemLow low1 ( // @[LoadMemoryFromFileSpec.scala 73:20]
    .clock(low1_clock),
    .io_address(low1_io_address),
    .io_value(low1_io_value)
  );
  UsesMemLow low2 ( // @[LoadMemoryFromFileSpec.scala 74:20]
    .clock(low2_clock),
    .io_address(low2_io_address),
    .io_value(low2_io_value)
  );
  assign memory_io_value_MPORT_en = 1'h1;
  assign memory_io_value_MPORT_addr = io_address[2:0];
  assign memory_io_value_MPORT_data = memory[memory_io_value_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 68:19]
  assign io_value = memory_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 71:12]
  assign io_value1 = low1_io_value; // @[LoadMemoryFromFileSpec.scala 78:13]
  assign io_value2 = low2_io_value; // @[LoadMemoryFromFileSpec.scala 79:13]
  assign low1_clock = clock;
  assign low1_io_address = io_address; // @[LoadMemoryFromFileSpec.scala 77:19]
  assign low2_clock = clock;
  assign low2_io_address = io_address; // @[LoadMemoryFromFileSpec.scala 76:19]
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
    memory[initvar] = _RAND_0[15:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
