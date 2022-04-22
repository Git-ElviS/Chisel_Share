module Foo(
  input        clock,
  input        reset,
  input  [3:0] addr,
  output       out
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg  memory [0:7]; // @[ChiselStageSpec.scala 27:29]
  wire  memory_out_MPORT_en; // @[ChiselStageSpec.scala 27:29]
  wire [2:0] memory_out_MPORT_addr; // @[ChiselStageSpec.scala 27:29]
  wire  memory_out_MPORT_data; // @[ChiselStageSpec.scala 27:29]
  reg  memory_out_MPORT_en_pipe_0;
  reg [2:0] memory_out_MPORT_addr_pipe_0;
  wire [3:0] bar_in; // @[ChiselStageSpec.scala 28:21]
  wire [3:0] bar_out; // @[ChiselStageSpec.scala 28:21]
  Bar bar ( // @[ChiselStageSpec.scala 28:21]
    .in(bar_in),
    .out(bar_out)
  );
  assign memory_out_MPORT_en = memory_out_MPORT_en_pipe_0;
  assign memory_out_MPORT_addr = memory_out_MPORT_addr_pipe_0;
  assign memory_out_MPORT_data = memory[memory_out_MPORT_addr]; // @[ChiselStageSpec.scala 27:29]
  assign out = memory_out_MPORT_data; // @[ChiselStageSpec.scala 30:9]
  assign bar_in = addr; // @[ChiselStageSpec.scala 29:12]
  always @(posedge clock) begin
    memory_out_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      memory_out_MPORT_addr_pipe_0 <= bar_out[2:0];
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
    memory[initvar] = _RAND_0[0:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  memory_out_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  memory_out_MPORT_addr_pipe_0 = _RAND_2[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
