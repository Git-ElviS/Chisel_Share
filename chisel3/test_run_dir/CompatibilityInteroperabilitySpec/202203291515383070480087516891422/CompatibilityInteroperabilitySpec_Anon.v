module OldMod(
  input        clock,
  input  [7:0] io_in,
  output [7:0] io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] io_out_REG; // @[CompatibilityInteroperabilitySpec.scala 270:24]
  assign io_out = io_out_REG; // @[CompatibilityInteroperabilitySpec.scala 270:18]
  always @(posedge clock) begin
    io_out_REG <= io_in; // @[CompatibilityInteroperabilitySpec.scala 270:24]
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
  io_out_REG = _RAND_0[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module _20_Anon(
  input        clock,
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire  inst_clock; // @[CompatibilityInteroperabilitySpec.scala 279:28]
  wire [7:0] inst_io_in; // @[CompatibilityInteroperabilitySpec.scala 279:28]
  wire [7:0] inst_io_out; // @[CompatibilityInteroperabilitySpec.scala 279:28]
  OldMod inst ( // @[CompatibilityInteroperabilitySpec.scala 279:28]
    .clock(inst_clock),
    .io_in(inst_io_in),
    .io_out(inst_io_out)
  );
  assign io_out = inst_io_out; // @[CompatibilityInteroperabilitySpec.scala 280:14]
  assign inst_clock = clock;
  assign inst_io_in = io_in; // @[CompatibilityInteroperabilitySpec.scala 280:14]
endmodule
module CompatibilityInteroperabilitySpec_Anon(
  input        clock,
  input        reset,
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire  _20_Anon_clock; // @[CompatibilityInteroperabilitySpec.scala 277:21]
  wire [7:0] _20_Anon_io_in; // @[CompatibilityInteroperabilitySpec.scala 277:21]
  wire [7:0] _20_Anon_io_out; // @[CompatibilityInteroperabilitySpec.scala 277:21]
  _20_Anon _20_Anon ( // @[CompatibilityInteroperabilitySpec.scala 277:21]
    .clock(_20_Anon_clock),
    .io_in(_20_Anon_io_in),
    .io_out(_20_Anon_io_out)
  );
  assign io_out = _20_Anon_io_out; // @[CompatibilityInteroperabilitySpec.scala 277:12]
  assign _20_Anon_clock = clock;
  assign _20_Anon_io_in = io_in; // @[CompatibilityInteroperabilitySpec.scala 277:12]
endmodule
