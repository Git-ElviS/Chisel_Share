module VecLiteralSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [10:0] r_0; // @[VecLiteralSpec.scala 367:24]
  reg [10:0] r_1; // @[VecLiteralSpec.scala 367:24]
  reg [10:0] r_2; // @[VecLiteralSpec.scala 367:24]
  wire [32:0] _T = {r_2,r_1,r_0}; // @[VecLiteralSpec.scala 368:17]
  wire [32:0] _T_2 = _T + 33'h1; // @[VecLiteralSpec.scala 368:24]
  wire  _T_8 = ~reset; // @[VecLiteralSpec.scala 371:23]
  always @(posedge clock) begin
    if (reset) begin // @[VecLiteralSpec.scala 367:24]
      r_0 <= 11'ha; // @[VecLiteralSpec.scala 367:24]
    end else begin
      r_0 <= _T_2[10:0]; // @[VecLiteralSpec.scala 368:11]
    end
    if (reset) begin // @[VecLiteralSpec.scala 367:24]
      r_1 <= 11'hb; // @[VecLiteralSpec.scala 367:24]
    end else begin
      r_1 <= _T_2[21:11]; // @[VecLiteralSpec.scala 368:11]
    end
    if (reset) begin // @[VecLiteralSpec.scala 367:24]
      r_2 <= 11'hc; // @[VecLiteralSpec.scala 367:24]
    end else begin
      r_2 <= _T_2[32:22]; // @[VecLiteralSpec.scala 368:11]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(r_0 == 11'ha)) begin
          $fatal; // @[VecLiteralSpec.scala 371:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(r_0 == 11'ha)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:371 chisel3.assert(r(0) === 0xa.U)\n"); // @[VecLiteralSpec.scala 371:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & ~(r_1 == 11'hb)) begin
          $fatal; // @[VecLiteralSpec.scala 372:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8 & ~(r_1 == 11'hb)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:372 chisel3.assert(r(1) === 0xb.U)\n"); // @[VecLiteralSpec.scala 372:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & ~(r_2 == 11'hc)) begin
          $fatal; // @[VecLiteralSpec.scala 373:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_8 & ~(r_2 == 11'hc)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:373 chisel3.assert(r(2) === 0xc.U)\n"); // @[VecLiteralSpec.scala 373:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8) begin
          $finish; // @[VecLiteralSpec.scala 374:13]
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
  r_0 = _RAND_0[10:0];
  _RAND_1 = {1{`RANDOM}};
  r_1 = _RAND_1[10:0];
  _RAND_2 = {1{`RANDOM}};
  r_2 = _RAND_2[10:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
