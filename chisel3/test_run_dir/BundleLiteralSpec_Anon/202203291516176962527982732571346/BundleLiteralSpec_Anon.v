module BundleLiteralSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] r_a; // @[BundleLiteralSpec.scala 209:24]
  reg  r_b; // @[BundleLiteralSpec.scala 209:24]
  reg  r_c; // @[BundleLiteralSpec.scala 209:24]
  wire [9:0] _r_T_1 = {r_a,r_b,r_c}; // @[BundleLiteralSpec.scala 210:17]
  wire [9:0] _r_T_3 = _r_T_1 + 10'h1; // @[BundleLiteralSpec.scala 210:24]
  wire  _T_2 = ~reset; // @[BundleLiteralSpec.scala 213:23]
  always @(posedge clock) begin
    if (reset) begin // @[BundleLiteralSpec.scala 209:24]
      r_a <= 8'h2a; // @[BundleLiteralSpec.scala 209:24]
    end else begin
      r_a <= _r_T_3[9:2]; // @[BundleLiteralSpec.scala 210:11]
    end
    r_b <= reset | _r_T_3[1]; // @[BundleLiteralSpec.scala 209:{24,24} 210:11]
    r_c <= reset | _r_T_3[0]; // @[BundleLiteralSpec.scala 209:{24,24} 210:11]
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(r_a == 8'h2a)) begin
          $fatal; // @[BundleLiteralSpec.scala 213:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(r_a == 8'h2a)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BundleLiteralSpec.scala:213 chisel3.assert(r.a === 42.U)\n"); // @[BundleLiteralSpec.scala 213:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~r_b) begin
          $fatal; // @[BundleLiteralSpec.scala 214:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~r_b) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BundleLiteralSpec.scala:214 chisel3.assert(r.b === true.B)\n"); // @[BundleLiteralSpec.scala 214:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~r_c) begin
          $fatal; // @[BundleLiteralSpec.scala 215:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~r_c) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BundleLiteralSpec.scala:215 chisel3.assert(r.c === MyEnum.sB)\n"); // @[BundleLiteralSpec.scala 215:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[BundleLiteralSpec.scala 216:13]
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
  r_a = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  r_b = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  r_c = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
