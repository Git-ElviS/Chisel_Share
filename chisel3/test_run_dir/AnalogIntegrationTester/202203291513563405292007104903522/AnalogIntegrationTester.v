module AnalogBlackBoxModule(
  inout  [31:0] io_bus,
  input         io_port_0_in_valid,
  output [31:0] io_port_0_out
);
  wire  impl_port_0_in_valid; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_in_bits; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_out; // @[AnalogIntegrationSpec.scala 45:20]
  AnalogBlackBox #(.index(0)) impl ( // @[AnalogIntegrationSpec.scala 45:20]
    .bus(io_bus),
    .port_0_in_valid(impl_port_0_in_valid),
    .port_0_in_bits(impl_port_0_in_bits),
    .port_0_out(impl_port_0_out)
  );
  assign io_port_0_out = impl_port_0_out; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_valid = io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 46:6]
endmodule
module AnalogBlackBoxWrapper(
  inout  [31:0] io_bus,
  input         io_port_0_in_valid,
  output [31:0] io_port_0_out
);
  wire  bbs_0_io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 53:33]
  wire [31:0] bbs_0_io_port_0_out; // @[AnalogIntegrationSpec.scala 53:33]
  AnalogBlackBoxModule bbs_0 ( // @[AnalogIntegrationSpec.scala 53:33]
    .io_bus(io_bus),
    .io_port_0_in_valid(bbs_0_io_port_0_in_valid),
    .io_port_0_out(bbs_0_io_port_0_out)
  );
  assign io_port_0_out = bbs_0_io_port_0_out; // @[AnalogIntegrationSpec.scala 55:11]
  assign bbs_0_io_port_0_in_valid = io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 55:11]
endmodule
module AnalogBlackBoxModule_1(
  inout  [31:0] io_bus,
  input         io_port_0_in_valid,
  output [31:0] io_port_0_out
);
  wire  impl_port_0_in_valid; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_in_bits; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_out; // @[AnalogIntegrationSpec.scala 45:20]
  AnalogBlackBox #(.index(1)) impl ( // @[AnalogIntegrationSpec.scala 45:20]
    .bus(io_bus),
    .port_0_in_valid(impl_port_0_in_valid),
    .port_0_in_bits(impl_port_0_in_bits),
    .port_0_out(impl_port_0_out)
  );
  assign io_port_0_out = impl_port_0_out; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_valid = io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 46:6]
endmodule
module AnalogBlackBoxModule_2(
  inout  [31:0] io_bus,
  input         io_port_0_in_valid,
  output [31:0] io_port_0_out
);
  wire  impl_port_0_in_valid; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_in_bits; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_out; // @[AnalogIntegrationSpec.scala 45:20]
  AnalogBlackBox #(.index(2)) impl ( // @[AnalogIntegrationSpec.scala 45:20]
    .bus(io_bus),
    .port_0_in_valid(impl_port_0_in_valid),
    .port_0_in_bits(impl_port_0_in_bits),
    .port_0_out(impl_port_0_out)
  );
  assign io_port_0_out = impl_port_0_out; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_valid = io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 46:6]
endmodule
module AnalogBlackBoxModule_3(
  inout  [31:0] io_bus,
  input         io_port_0_in_valid,
  output [31:0] io_port_0_out
);
  wire  impl_port_0_in_valid; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_in_bits; // @[AnalogIntegrationSpec.scala 45:20]
  wire [31:0] impl_port_0_out; // @[AnalogIntegrationSpec.scala 45:20]
  AnalogBlackBox #(.index(3)) impl ( // @[AnalogIntegrationSpec.scala 45:20]
    .bus(io_bus),
    .port_0_in_valid(impl_port_0_in_valid),
    .port_0_in_bits(impl_port_0_in_bits),
    .port_0_out(impl_port_0_out)
  );
  assign io_port_0_out = impl_port_0_out; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_valid = io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 46:6]
  assign impl_port_0_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 46:6]
endmodule
module AnalogBlackBoxWrapper_1(
  inout  [31:0] io_bus,
  input         io_port_0_in_valid,
  output [31:0] io_port_0_out,
  input         io_port_1_in_valid,
  output [31:0] io_port_1_out
);
  wire  bbs_0_io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 53:33]
  wire [31:0] bbs_0_io_port_0_out; // @[AnalogIntegrationSpec.scala 53:33]
  wire  bbs_1_io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 53:33]
  wire [31:0] bbs_1_io_port_0_out; // @[AnalogIntegrationSpec.scala 53:33]
  AnalogBlackBoxModule_2 bbs_0 ( // @[AnalogIntegrationSpec.scala 53:33]
    .io_bus(io_bus),
    .io_port_0_in_valid(bbs_0_io_port_0_in_valid),
    .io_port_0_out(bbs_0_io_port_0_out)
  );
  AnalogBlackBoxModule_3 bbs_1 ( // @[AnalogIntegrationSpec.scala 53:33]
    .io_bus(io_bus),
    .io_port_0_in_valid(bbs_1_io_port_0_in_valid),
    .io_port_0_out(bbs_1_io_port_0_out)
  );
  assign io_port_0_out = bbs_0_io_port_0_out; // @[AnalogIntegrationSpec.scala 55:11]
  assign io_port_1_out = bbs_1_io_port_0_out; // @[AnalogIntegrationSpec.scala 55:11]
  assign bbs_0_io_port_0_in_valid = io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 55:11]
  assign bbs_1_io_port_0_in_valid = io_port_1_in_valid; // @[AnalogIntegrationSpec.scala 55:11]
endmodule
module AnalogSmallDUT(
  input         io_ports_0_in_valid,
  input  [31:0] io_ports_0_in_bits,
  output [31:0] io_ports_0_out,
  input         io_ports_1_in_valid,
  input  [31:0] io_ports_1_in_bits,
  output [31:0] io_ports_1_out,
  input         io_ports_2_in_valid,
  input  [31:0] io_ports_2_in_bits,
  output [31:0] io_ports_2_out,
  input         io_ports_3_in_valid,
  input  [31:0] io_ports_3_in_bits,
  output [31:0] io_ports_3_out
);
  wire  mods_0_io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 96:11]
  wire [31:0] mods_0_io_port_0_out; // @[AnalogIntegrationSpec.scala 96:11]
  wire  mods_1_io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 97:11]
  wire [31:0] mods_1_io_port_0_out; // @[AnalogIntegrationSpec.scala 97:11]
  wire  mods_2_io_port_0_in_valid; // @[AnalogIntegrationSpec.scala 98:11]
  wire [31:0] mods_2_io_port_0_out; // @[AnalogIntegrationSpec.scala 98:11]
  wire  mods_2_io_port_1_in_valid; // @[AnalogIntegrationSpec.scala 98:11]
  wire [31:0] mods_2_io_port_1_out; // @[AnalogIntegrationSpec.scala 98:11]
  wire [31:0] _GEN_0;
  AnalogBlackBoxWrapper mods_0 ( // @[AnalogIntegrationSpec.scala 96:11]
    .io_bus(_GEN_0),
    .io_port_0_in_valid(mods_0_io_port_0_in_valid),
    .io_port_0_out(mods_0_io_port_0_out)
  );
  AnalogBlackBoxModule_1 mods_1 ( // @[AnalogIntegrationSpec.scala 97:11]
    .io_bus(_GEN_0),
    .io_port_0_in_valid(mods_1_io_port_0_in_valid),
    .io_port_0_out(mods_1_io_port_0_out)
  );
  AnalogBlackBoxWrapper_1 mods_2 ( // @[AnalogIntegrationSpec.scala 98:11]
    .io_bus(_GEN_0),
    .io_port_0_in_valid(mods_2_io_port_0_in_valid),
    .io_port_0_out(mods_2_io_port_0_out),
    .io_port_1_in_valid(mods_2_io_port_1_in_valid),
    .io_port_1_out(mods_2_io_port_1_out)
  );
  assign io_ports_0_out = mods_0_io_port_0_out; // @[AnalogIntegrationSpec.scala 101:12]
  assign io_ports_1_out = mods_1_io_port_0_out; // @[AnalogIntegrationSpec.scala 101:12]
  assign io_ports_2_out = mods_2_io_port_0_out; // @[AnalogIntegrationSpec.scala 101:12]
  assign io_ports_3_out = mods_2_io_port_1_out; // @[AnalogIntegrationSpec.scala 101:12]
  assign mods_0_io_port_0_in_valid = io_ports_0_in_valid; // @[AnalogIntegrationSpec.scala 101:12]
  assign mods_1_io_port_0_in_valid = io_ports_1_in_valid; // @[AnalogIntegrationSpec.scala 101:12]
  assign mods_2_io_port_0_in_valid = io_ports_2_in_valid; // @[AnalogIntegrationSpec.scala 101:12]
  assign mods_2_io_port_1_in_valid = io_ports_3_in_valid; // @[AnalogIntegrationSpec.scala 101:12]
endmodule
module AnalogIntegrationTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_io_ports_0_in_valid; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_0_in_bits; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_0_out; // @[AnalogIntegrationSpec.scala 110:19]
  wire  dut_io_ports_1_in_valid; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_1_in_bits; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_1_out; // @[AnalogIntegrationSpec.scala 110:19]
  wire  dut_io_ports_2_in_valid; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_2_in_bits; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_2_out; // @[AnalogIntegrationSpec.scala 110:19]
  wire  dut_io_ports_3_in_valid; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_3_in_bits; // @[AnalogIntegrationSpec.scala 110:19]
  wire [31:0] dut_io_ports_3_out; // @[AnalogIntegrationSpec.scala 110:19]
  reg [1:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cycle + 2'h1; // @[Counter.scala 78:24]
  wire  _T_1 = ~reset; // @[AnalogIntegrationSpec.scala 117:11]
  wire [31:0] _GEN_4 = cycle == 2'h1 ? 32'h3 : 32'h2; // @[AnalogIntegrationSpec.scala 124:27 125:21]
  wire [31:0] _GEN_6 = cycle == 2'h2 ? 32'h4 : _GEN_4; // @[AnalogIntegrationSpec.scala 124:27 125:21]
  wire [31:0] expectedValue = wrap_wrap ? 32'h5 : _GEN_6; // @[AnalogIntegrationSpec.scala 124:27 125:21]
  AnalogSmallDUT dut ( // @[AnalogIntegrationSpec.scala 110:19]
    .io_ports_0_in_valid(dut_io_ports_0_in_valid),
    .io_ports_0_in_bits(dut_io_ports_0_in_bits),
    .io_ports_0_out(dut_io_ports_0_out),
    .io_ports_1_in_valid(dut_io_ports_1_in_valid),
    .io_ports_1_in_bits(dut_io_ports_1_in_bits),
    .io_ports_1_out(dut_io_ports_1_out),
    .io_ports_2_in_valid(dut_io_ports_2_in_valid),
    .io_ports_2_in_bits(dut_io_ports_2_in_bits),
    .io_ports_2_out(dut_io_ports_2_out),
    .io_ports_3_in_valid(dut_io_ports_3_in_valid),
    .io_ports_3_in_bits(dut_io_ports_3_in_bits),
    .io_ports_3_out(dut_io_ports_3_out)
  );
  assign dut_io_ports_0_in_valid = cycle == 2'h0; // @[AnalogIntegrationSpec.scala 124:16]
  assign dut_io_ports_0_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 120:17]
  assign dut_io_ports_1_in_valid = cycle == 2'h1; // @[AnalogIntegrationSpec.scala 124:16]
  assign dut_io_ports_1_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 120:17]
  assign dut_io_ports_2_in_valid = cycle == 2'h2; // @[AnalogIntegrationSpec.scala 124:16]
  assign dut_io_ports_2_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 120:17]
  assign dut_io_ports_3_in_valid = cycle == 2'h3; // @[AnalogIntegrationSpec.scala 124:16]
  assign dut_io_ports_3_in_bits = 32'h2; // @[AnalogIntegrationSpec.scala 120:17]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      cycle <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"@%d: BlackBox #0: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n"
            ,cycle,dut_io_ports_0_in_valid,dut_io_ports_0_in_bits,dut_io_ports_0_out); // @[AnalogIntegrationSpec.scala 117:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_0_out == expectedValue)) begin
          $fatal; // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_0_out == expectedValue)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n"); // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"@%d: BlackBox #1: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n"
            ,cycle,dut_io_ports_1_in_valid,dut_io_ports_1_in_bits,dut_io_ports_1_out); // @[AnalogIntegrationSpec.scala 117:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_1_out == expectedValue)) begin
          $fatal; // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_1_out == expectedValue)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n"); // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"@%d: BlackBox #2: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n"
            ,cycle,dut_io_ports_2_in_valid,dut_io_ports_2_in_bits,dut_io_ports_2_out); // @[AnalogIntegrationSpec.scala 117:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_2_out == expectedValue)) begin
          $fatal; // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_2_out == expectedValue)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n"); // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"@%d: BlackBox #3: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n"
            ,cycle,dut_io_ports_3_in_valid,dut_io_ports_3_in_bits,dut_io_ports_3_out); // @[AnalogIntegrationSpec.scala 117:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_3_out == expectedValue)) begin
          $fatal; // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_ports_3_out == expectedValue)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n"); // @[AnalogIntegrationSpec.scala 122:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_1) begin
          $finish; // @[AnalogIntegrationSpec.scala 130:20]
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
  cycle = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
