module Decoder(
  input  [31:0] io_inst,
  output        io_matched
);
  wire [31:0] _io_matched_T = io_inst & 32'h378f5a55; // @[Decoder.scala 16:47]
  wire [31:0] _io_matched_T_2 = io_inst & 32'h6c422d01; // @[Decoder.scala 16:47]
  wire [31:0] _io_matched_T_4 = io_inst & 32'hf99c9c9; // @[Decoder.scala 16:47]
  wire [31:0] _io_matched_T_6 = io_inst & 32'h1; // @[Decoder.scala 16:47]
  assign io_matched = 32'h26821840 == _io_matched_T | 32'h68022400 == _io_matched_T_2 | 32'h7914801 == _io_matched_T_4
     | 32'h1 == _io_matched_T_6; // @[Decoder.scala 16:70]
endmodule
module DecoderTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] dut_io_inst; // @[Decoder.scala 22:19]
  wire  dut_io_matched; // @[Decoder.scala 22:19]
  reg [1:0] cnt; // @[Counter.scala 62:40]
  wire  wrap_wrap = cnt == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cnt + 2'h1; // @[Counter.scala 78:24]
  wire [30:0] _GEN_3 = 2'h1 == cnt ? 31'h6b16e6ea : 31'h2ef299e8; // @[Decoder.scala 23:{15,15}]
  wire [30:0] _GEN_4 = 2'h2 == cnt ? 31'h17f74813 : _GEN_3; // @[Decoder.scala 23:{15,15}]
  wire [30:0] _GEN_5 = 2'h3 == cnt ? 31'h1 : _GEN_4; // @[Decoder.scala 23:{15,15}]
  wire  _T = ~dut_io_matched; // @[Decoder.scala 24:8]
  wire  _T_3 = ~reset; // @[Decoder.scala 25:11]
  Decoder dut ( // @[Decoder.scala 22:19]
    .io_inst(dut_io_inst),
    .io_matched(dut_io_matched)
  );
  assign dut_io_inst = {{1'd0}, _GEN_5}; // @[Decoder.scala 23:15]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cnt <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      cnt <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset & ~(cnt == 2'h0)) begin
          $fatal; // @[Decoder.scala 25:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset & ~(cnt == 2'h0)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n"); // @[Decoder.scala 25:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & _T_3) begin
          $finish; // @[Decoder.scala 26:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_3) begin
          $finish; // @[Decoder.scala 29:9]
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
  cnt = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
