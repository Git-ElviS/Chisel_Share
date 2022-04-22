module HasBinarySupport(
  input         clock,
  input         reset,
  input  [15:0] io_address,
  output [15:0] io_value
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [15:0] memory [0:7]; // @[LoadMemoryFromFileSpec.scala 139:19]
  wire  memory_io_value_MPORT_en; // @[LoadMemoryFromFileSpec.scala 139:19]
  wire [2:0] memory_io_value_MPORT_addr; // @[LoadMemoryFromFileSpec.scala 139:19]
  wire [15:0] memory_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 139:19]
  assign memory_io_value_MPORT_en = 1'h1;
  assign memory_io_value_MPORT_addr = io_address[2:0];
  assign memory_io_value_MPORT_data = memory[memory_io_value_MPORT_addr]; // @[LoadMemoryFromFileSpec.scala 139:19]
  assign io_value = memory_io_value_MPORT_data; // @[LoadMemoryFromFileSpec.scala 143:12]
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
