module PassthroughModule(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[Util.scala 19:10]
endmodule
module PassthroughModuleTester(
  input         clock,
  input         reset,
  input  [31:0] io_out
);
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(io_out == 32'h7b)) begin
          $fatal; // @[Vec.scala 296:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(io_out == 32'h7b)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:296 assert(io.out === 123.U)\n"); // @[Vec.scala 296:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module ModuleIODynamicIndexTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] PassthroughModule_io_in; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_io_out; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_1_io_in; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_1_io_out; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_2_io_in; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_2_io_out; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_3_io_in; // @[Vec.scala 300:36]
  wire [31:0] PassthroughModule_3_io_out; // @[Vec.scala 300:36]
  wire  tester_clock; // @[Vec.scala 301:22]
  wire  tester_reset; // @[Vec.scala 301:22]
  wire [31:0] tester_io_out; // @[Vec.scala 301:22]
  reg [1:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cycle + 2'h1; // @[Counter.scala 78:24]
  wire  _T = cycle != 2'h0; // @[Vec.scala 305:16]
  wire [31:0] duts_0_out = PassthroughModule_io_out; // @[Vec.scala 300:{29,29}]
  wire  _T_3 = ~reset; // @[Vec.scala 307:13]
  wire  _T_5 = cycle != 2'h1; // @[Vec.scala 305:16]
  wire [31:0] duts_1_out = PassthroughModule_1_io_out; // @[Vec.scala 300:{29,29}]
  wire  _T_10 = cycle != 2'h2; // @[Vec.scala 305:16]
  wire [31:0] duts_2_out = PassthroughModule_2_io_out; // @[Vec.scala 300:{29,29}]
  wire  _T_15 = cycle != 2'h3; // @[Vec.scala 305:16]
  wire [31:0] duts_3_out = PassthroughModule_3_io_out; // @[Vec.scala 300:{29,29}]
  wire [31:0] _GEN_11 = 2'h1 == cycle ? duts_1_out : duts_0_out; // @[Vec.scala 313:{15,15}]
  wire [31:0] _GEN_12 = 2'h2 == cycle ? duts_2_out : _GEN_11; // @[Vec.scala 313:{15,15}]
  wire [31:0] _GEN_13 = 2'h3 == cycle ? duts_3_out : _GEN_12; // @[Vec.scala 313:{15,15}]
  PassthroughModule PassthroughModule ( // @[Vec.scala 300:36]
    .io_in(PassthroughModule_io_in),
    .io_out(PassthroughModule_io_out)
  );
  PassthroughModule PassthroughModule_1 ( // @[Vec.scala 300:36]
    .io_in(PassthroughModule_1_io_in),
    .io_out(PassthroughModule_1_io_out)
  );
  PassthroughModule PassthroughModule_2 ( // @[Vec.scala 300:36]
    .io_in(PassthroughModule_2_io_in),
    .io_out(PassthroughModule_2_io_out)
  );
  PassthroughModule PassthroughModule_3 ( // @[Vec.scala 300:36]
    .io_in(PassthroughModule_3_io_in),
    .io_out(PassthroughModule_3_io_out)
  );
  PassthroughModuleTester tester ( // @[Vec.scala 301:22]
    .clock(tester_clock),
    .reset(tester_reset),
    .io_out(tester_io_out)
  );
  assign PassthroughModule_io_in = 2'h0 == cycle ? 32'h7b : 32'h0; // @[Vec.scala 313:{15,15}]
  assign PassthroughModule_1_io_in = 2'h1 == cycle ? 32'h7b : 32'h0; // @[Vec.scala 313:{15,15}]
  assign PassthroughModule_2_io_in = 2'h2 == cycle ? 32'h7b : 32'h0; // @[Vec.scala 313:{15,15}]
  assign PassthroughModule_3_io_in = 2'h3 == cycle ? 32'h7b : 32'h0; // @[Vec.scala 313:{15,15}]
  assign tester_clock = clock;
  assign tester_reset = reset;
  assign tester_io_out = 2'h3 == cycle ? duts_3_out : _GEN_12; // @[Vec.scala 313:{15,15}]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      cycle <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(duts_0_out == 32'h0)) begin
          $fatal; // @[Vec.scala 307:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(duts_0_out == 32'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n"); // @[Vec.scala 307:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~reset & ~(duts_1_out == 32'h0)) begin
          $fatal; // @[Vec.scala 307:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~reset & ~(duts_1_out == 32'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n"); // @[Vec.scala 307:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_10 & ~reset & ~(duts_2_out == 32'h0)) begin
          $fatal; // @[Vec.scala 307:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_10 & ~reset & ~(duts_2_out == 32'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n"); // @[Vec.scala 307:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_15 & ~reset & ~(duts_3_out == 32'h0)) begin
          $fatal; // @[Vec.scala 307:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_15 & ~reset & ~(duts_3_out == 32'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n"); // @[Vec.scala 307:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3 & ~(_GEN_13 == 32'h7b)) begin
          $fatal; // @[Vec.scala 314:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & ~(_GEN_13 == 32'h7b)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Vec.scala:314 assert(duts(cycle).out === 123.U)\n"); // @[Vec.scala 314:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_3) begin
          $finish; // @[Vec.scala 316:20]
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
