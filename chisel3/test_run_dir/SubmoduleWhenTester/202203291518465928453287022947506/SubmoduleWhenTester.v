module PassthroughModule(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[Util.scala 19:10]
endmodule
module PassthroughRawModule(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[Util.scala 19:10]
endmodule
module SubmoduleWhenTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] children_0_io_in; // @[When.scala 82:15]
  wire [31:0] children_0_io_out; // @[When.scala 82:15]
  wire [31:0] children_1_io_in; // @[When.scala 82:46]
  wire [31:0] children_1_io_out; // @[When.scala 82:46]
  wire [31:0] children_2_io_in; // @[When.scala 82:84]
  wire [31:0] children_2_io_out; // @[When.scala 82:84]
  reg [1:0] cycle; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycle == 2'h2; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cycle + 2'h1; // @[Counter.scala 78:24]
  wire  _T_1 = ~reset; // @[When.scala 80:20]
  wire  _T_2 = cycle == 2'h1; // @[When.scala 84:16]
  PassthroughModule children_0 ( // @[When.scala 82:15]
    .io_in(children_0_io_in),
    .io_out(children_0_io_out)
  );
  PassthroughModule children_1 ( // @[When.scala 82:46]
    .io_in(children_1_io_in),
    .io_out(children_1_io_out)
  );
  PassthroughRawModule children_2 ( // @[When.scala 82:84]
    .io_in(children_2_io_in),
    .io_out(children_2_io_out)
  );
  assign children_0_io_in = cycle == 2'h1 ? 32'hdeadbeef : 32'hbadcad0; // @[When.scala 84:25 85:19 88:19]
  assign children_1_io_in = cycle == 2'h1 ? 32'hdeadbeef : 32'hbadcad0; // @[When.scala 84:25 85:19 88:19]
  assign children_2_io_in = cycle == 2'h1 ? 32'hdeadbeef : 32'hbadcad0; // @[When.scala 84:25 85:19 88:19]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 2'h0; // @[Counter.scala 62:40]
    end else if (wrap_wrap) begin // @[Counter.scala 88:20]
      cycle <= 2'h0; // @[Counter.scala 88:28]
    end else begin
      cycle <= _wrap_value_T_1; // @[Counter.scala 78:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset) begin
          $finish; // @[When.scala 80:20]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & _T_1 & ~(children_0_io_out == 32'hdeadbeef)) begin
          $fatal; // @[When.scala 86:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & _T_1 & ~(children_0_io_out == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n"); // @[When.scala 86:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T_2 & _T_1 & ~(children_0_io_out == 32'hbadcad0)) begin
          $fatal; // @[When.scala 89:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T_2 & _T_1 & ~(children_0_io_out == 32'hbadcad0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n"); // @[When.scala 89:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & _T_1 & ~(children_1_io_out == 32'hdeadbeef)) begin
          $fatal; // @[When.scala 86:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & _T_1 & ~(children_1_io_out == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n"); // @[When.scala 86:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T_2 & _T_1 & ~(children_1_io_out == 32'hbadcad0)) begin
          $fatal; // @[When.scala 89:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T_2 & _T_1 & ~(children_1_io_out == 32'hbadcad0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n"); // @[When.scala 89:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & _T_1 & ~(children_2_io_out == 32'hdeadbeef)) begin
          $fatal; // @[When.scala 86:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & _T_1 & ~(children_2_io_out == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n"); // @[When.scala 86:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T_2 & _T_1 & ~(children_2_io_out == 32'hbadcad0)) begin
          $fatal; // @[When.scala 89:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T_2 & _T_1 & ~(children_2_io_out == 32'hbadcad0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n"); // @[When.scala 89:13]
        end
    `ifdef PRINTF_COND
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
