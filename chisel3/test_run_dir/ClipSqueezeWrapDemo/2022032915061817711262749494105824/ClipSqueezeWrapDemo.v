module ClipSqueezeWrapDemo(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [4:0] counter; // @[IntervalSpec.scala 202:24]
  wire [5:0] _GEN_0 = $signed(counter) + 5'sh1; // @[IntervalSpec.scala 204:{23,23}]
  wire [4:0] _counter_T_1 = _GEN_0[4:0]; // @[IntervalSpec.scala 204:{43,43}]
  wire  _T = $signed(counter) > 5'sha; // @[IntervalSpec.scala 205:16]
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 206:9]
  wire [4:0] _GEN_3 = $signed(counter) > 5'sh6 ? $signed(5'sh6) : $signed($signed(counter) < -5'sh2 ? $signed(-5'sh2) :
    $signed(counter)); // @[IntervalSpec.scala 209:{29,29}]
  wire [3:0] clipped = _GEN_3[3:0]; // @[IntervalSpec.scala 209:{29,29}]
  wire [3:0] squeezed = counter[3:0]; // @[IntervalSpec.scala 210:{33,33}]
  wire [5:0] _GEN_7 = $signed(counter) + 5'sh9; // @[IntervalSpec.scala 211:{29,29}]
  wire [5:0] _GEN_8 = {{1{counter[4]}},counter}; // @[IntervalSpec.scala 211:{29,29}]
  wire [5:0] _GEN_10 = $signed(counter) - 5'sh9; // @[IntervalSpec.scala 211:{29,29}]
  wire [5:0] _GEN_11 = $signed(counter) < -5'sh2 ? $signed(_GEN_7) : $signed(_GEN_8); // @[IntervalSpec.scala 211:{29,29}]
  wire [5:0] _GEN_12 = $signed(counter) > 5'sh6 ? $signed(_GEN_10) : $signed(_GEN_11); // @[IntervalSpec.scala 211:{29,29}]
  wire [3:0] wrapped = _GEN_12[3:0]; // @[IntervalSpec.scala 211:{29,29}]
  wire  _T_3 = $signed(counter) == -5'sh4; // @[IntervalSpec.scala 213:16]
  always @(posedge clock) begin
    if (reset) begin // @[IntervalSpec.scala 202:24]
      counter <= -5'sh4; // @[IntervalSpec.scala 202:24]
    end else begin
      counter <= _counter_T_1; // @[IntervalSpec.scala 204:11]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset) begin
          $finish; // @[IntervalSpec.scala 206:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & _T_2) begin
          $fwrite(32'h80000002,"Target range is range\"[-2,5].1\"\n"); // @[IntervalSpec.scala 214:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & _T_2) begin
          $fwrite(32'h80000002,"value     clip      squeeze      wrap\n"); // @[IntervalSpec.scala 215:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2) begin
          $fwrite(32'h80000002,"       %d       %d          %d         %d\n",counter,clipped,squeezed,wrapped); // @[IntervalSpec.scala 218:9]
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
  counter = _RAND_0[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
