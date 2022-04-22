module ResetRegWithPartialVecLiteral(
  input        clock,
  input        reset,
  input  [7:0] in_1,
  input  [7:0] in_2,
  output [7:0] out_1,
  output [7:0] out_2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] y_1; // @[VecLiteralSpec.scala 106:20]
  reg [7:0] y_2; // @[VecLiteralSpec.scala 106:20]
  assign out_1 = y_1; // @[VecLiteralSpec.scala 113:9]
  assign out_2 = y_2; // @[VecLiteralSpec.scala 113:9]
  always @(posedge clock) begin
    if (in_1 > 8'h0) begin // @[VecLiteralSpec.scala 107:23]
      y_1 <= in_1; // @[VecLiteralSpec.scala 108:12]
    end
    if (reset) begin // @[VecLiteralSpec.scala 106:20]
      y_2 <= 8'hef; // @[VecLiteralSpec.scala 106:20]
    end else if (in_2 > 8'h0) begin // @[VecLiteralSpec.scala 110:23]
      y_2 <= in_2; // @[VecLiteralSpec.scala 111:12]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  y_1 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  y_2 = _RAND_1[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module VecLiteralSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  m_clock; // @[VecLiteralSpec.scala 119:21]
  wire  m_reset; // @[VecLiteralSpec.scala 119:21]
  wire [7:0] m_in_1; // @[VecLiteralSpec.scala 119:21]
  wire [7:0] m_in_2; // @[VecLiteralSpec.scala 119:21]
  wire [7:0] m_out_1; // @[VecLiteralSpec.scala 119:21]
  wire [7:0] m_out_2; // @[VecLiteralSpec.scala 119:21]
  reg [2:0] counter; // @[Counter.scala 62:40]
  wire  wrap_wrap = counter == 3'h7; // @[Counter.scala 74:24]
  wire [2:0] _wrap_value_T_1 = counter + 3'h1; // @[Counter.scala 78:24]
  wire  _T = counter < 3'h2; // @[VecLiteralSpec.scala 122:20]
  wire  _T_1 = counter == 3'h2; // @[VecLiteralSpec.scala 125:26]
  wire  _T_4 = ~reset; // @[VecLiteralSpec.scala 126:23]
  wire  _T_5 = ~(m_out_1 == 8'hff); // @[VecLiteralSpec.scala 126:23]
  wire  _T_10 = counter == 3'h3; // @[VecLiteralSpec.scala 128:26]
  wire  _T_11 = counter > 3'h2; // @[VecLiteralSpec.scala 132:26]
  wire  _GEN_3 = counter == 3'h3 | reset; // @[VecLiteralSpec.scala 128:35 131:17]
  wire  _GEN_5 = counter == 3'h2 ? reset : _GEN_3; // @[VecLiteralSpec.scala 125:35]
  wire  _GEN_8 = ~_T; // @[VecLiteralSpec.scala 126:23]
  wire  _GEN_10 = ~_T & _T_1 & ~reset; // @[VecLiteralSpec.scala 126:23]
  wire  _GEN_28 = _GEN_8 & ~_T_1 & ~_T_10 & _T_11 & _T_4; // @[VecLiteralSpec.scala 134:23]
  ResetRegWithPartialVecLiteral m ( // @[VecLiteralSpec.scala 119:21]
    .clock(m_clock),
    .reset(m_reset),
    .in_1(m_in_1),
    .in_2(m_in_2),
    .out_1(m_out_1),
    .out_2(m_out_2)
  );
  assign m_clock = clock;
  assign m_reset = counter < 3'h2 ? reset : _GEN_5; // @[VecLiteralSpec.scala 122:27]
  assign m_in_1 = counter < 3'h2 ? 8'hff : 8'h0; // @[VecLiteralSpec.scala 122:27 123:17]
  assign m_in_2 = counter < 3'h2 ? 8'hff : 8'h0; // @[VecLiteralSpec.scala 122:27 123:17]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      counter <= 3'h0; // @[Counter.scala 62:40]
    end else begin
      counter <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & _T_1 & ~reset & ~(m_out_1 == 8'hff)) begin
          $fatal; // @[VecLiteralSpec.scala 126:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & _T_1 & ~reset & ~(m_out_1 == 8'hff)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:126 chisel3.assert(m.out(1) === 0xff.U)\n"
            ); // @[VecLiteralSpec.scala 126:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_10 & ~(m_out_2 == 8'hff)) begin
          $fatal; // @[VecLiteralSpec.scala 127:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_10 & ~(m_out_2 == 8'hff)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:127 chisel3.assert(m.out(2) === 0xff.U)\n"
            ); // @[VecLiteralSpec.scala 127:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & ~_T_1 & ~_T_10 & _T_11 & _T_4 & _T_5) begin
          $fatal; // @[VecLiteralSpec.scala 134:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_8 & ~_T_1 & ~_T_10 & _T_11 & _T_4 & _T_5) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:134 chisel3.assert(m.out(1) === 0xff.U)\n"
            ); // @[VecLiteralSpec.scala 134:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_28 & ~(m_out_2 == 8'hef)) begin
          $fatal; // @[VecLiteralSpec.scala 135:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_28 & ~(m_out_2 == 8'hef)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VecLiteralSpec.scala:135 chisel3.assert(m.out(2) === 0xef.U)\n"
            ); // @[VecLiteralSpec.scala 135:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_4) begin
          $finish; // @[VecLiteralSpec.scala 138:13]
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
  counter = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
