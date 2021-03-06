module BlackBoxWithParamsTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  blackBoxOne_out; // @[BlackBox.scala 149:27]
  wire [2:0] blackBoxFour_out; // @[BlackBox.scala 150:28]
  wire [31:0] blackBoxStringParamOne_out; // @[BlackBox.scala 151:38]
  wire [31:0] blackBoxStringParamTwo_out; // @[BlackBox.scala 152:38]
  wire [63:0] blackBoxRealParamOne_out; // @[BlackBox.scala 153:36]
  wire [63:0] blackBoxRealParamNeg_out; // @[BlackBox.scala 154:36]
  wire  blackBoxTypeParamBit_out; // @[BlackBox.scala 155:36]
  wire [31:0] blackBoxTypeParamWord_out; // @[BlackBox.scala 156:37]
  reg [1:0] cycles; // @[Counter.scala 62:40]
  wire  wrap_wrap = cycles == 2'h3; // @[Counter.scala 74:24]
  wire [1:0] _wrap_value_T_1 = cycles + 2'h1; // @[Counter.scala 78:24]
  wire  _T_2 = ~reset; // @[BlackBox.scala 160:9]
  BlackBoxConstant #(.VALUE(1), .WIDTH(1)) blackBoxOne ( // @[BlackBox.scala 149:27]
    .out(blackBoxOne_out)
  );
  BlackBoxConstant #(.VALUE(4), .WIDTH(3)) blackBoxFour ( // @[BlackBox.scala 150:28]
    .out(blackBoxFour_out)
  );
  BlackBoxStringParam #(.STRING("one")) blackBoxStringParamOne ( // @[BlackBox.scala 151:38]
    .out(blackBoxStringParamOne_out)
  );
  BlackBoxStringParam #(.STRING("two")) blackBoxStringParamTwo ( // @[BlackBox.scala 152:38]
    .out(blackBoxStringParamTwo_out)
  );
  BlackBoxRealParam #(.REAL(1.0)) blackBoxRealParamOne ( // @[BlackBox.scala 153:36]
    .out(blackBoxRealParamOne_out)
  );
  BlackBoxRealParam #(.REAL(-1.0)) blackBoxRealParamNeg ( // @[BlackBox.scala 154:36]
    .out(blackBoxRealParamNeg_out)
  );
  BlackBoxTypeParam #(.T(bit)) blackBoxTypeParamBit ( // @[BlackBox.scala 155:36]
    .out(blackBoxTypeParamBit_out)
  );
  BlackBoxTypeParam #(.T(bit [31:0])) blackBoxTypeParamWord ( // @[BlackBox.scala 156:37]
    .out(blackBoxTypeParamWord_out)
  );
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycles <= 2'h0; // @[Counter.scala 62:40]
    end else begin
      cycles <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~blackBoxOne_out) begin
          $fatal; // @[BlackBox.scala 160:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~blackBoxOne_out) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:160 assert(blackBoxOne.io.out === 1.U)\n"); // @[BlackBox.scala 160:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(blackBoxFour_out == 3'h4)) begin
          $fatal; // @[BlackBox.scala 161:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(blackBoxFour_out == 3'h4)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:161 assert(blackBoxFour.io.out === 4.U)\n"); // @[BlackBox.scala 161:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(blackBoxStringParamOne_out == 32'h1)) begin
          $fatal; // @[BlackBox.scala 162:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(blackBoxStringParamOne_out == 32'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BlackBox.scala:162 assert(blackBoxStringParamOne.io.out === 1.U)\n"); // @[BlackBox.scala 162:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(blackBoxStringParamTwo_out == 32'h2)) begin
          $fatal; // @[BlackBox.scala 163:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(blackBoxStringParamTwo_out == 32'h2)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BlackBox.scala:163 assert(blackBoxStringParamTwo.io.out === 2.U)\n"); // @[BlackBox.scala 163:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(blackBoxRealParamOne_out == 64'h3ff0000000000000)) begin
          $fatal; // @[BlackBox.scala 164:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(blackBoxRealParamOne_out == 64'h3ff0000000000000)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BlackBox.scala:164 assert(blackBoxRealParamOne.io.out === 0x3ff0000000000000L.U)\n"
            ); // @[BlackBox.scala 164:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(blackBoxRealParamNeg_out == 64'hbff0000000000000)) begin
          $fatal; // @[BlackBox.scala 165:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(blackBoxRealParamNeg_out == 64'hbff0000000000000)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BlackBox.scala:165 assert(blackBoxRealParamNeg.io.out === BigInt(\"bff0000000000000\", 16).U)\n"
            ); // @[BlackBox.scala 165:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~blackBoxTypeParamBit_out) begin
          $fatal; // @[BlackBox.scala 166:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~blackBoxTypeParamBit_out) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BlackBox.scala:166 assert(blackBoxTypeParamBit.io.out === 1.U)\n"); // @[BlackBox.scala 166:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(blackBoxTypeParamWord_out == 32'hdeadbeef)) begin
          $fatal; // @[BlackBox.scala 167:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(blackBoxTypeParamWord_out == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BlackBox.scala:167 assert(blackBoxTypeParamWord.io.out === \"hdeadbeef\".U(32.W))\n"
            ); // @[BlackBox.scala 167:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & _T_2) begin
          $finish; // @[BlackBox.scala 169:19]
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
  cycles = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
