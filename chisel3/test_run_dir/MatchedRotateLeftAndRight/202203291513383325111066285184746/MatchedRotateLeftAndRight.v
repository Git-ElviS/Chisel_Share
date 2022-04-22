module MatchedRotateLeftAndRight(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [12:0] shiftAmount1; // @[UIntOps.scala 155:29]
  reg [12:0] shiftAmount2; // @[UIntOps.scala 156:29]
  wire [12:0] _shiftAmount1_T_1 = shiftAmount1 + 13'h1; // @[UIntOps.scala 157:32]
  wire [12:0] _shiftAmount2_T_1 = shiftAmount2 - 13'h1; // @[UIntOps.scala 158:32]
  wire [12:0] _out1_T_16 = shiftAmount1[0] ? 13'h1a39 : 13'h1d1c; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_19 = {_out1_T_16[10:0],_out1_T_16[12:11]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_20 = shiftAmount1[1] ? _out1_T_19 : _out1_T_16; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_23 = {_out1_T_20[8:0],_out1_T_20[12:9]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_24 = shiftAmount1[2] ? _out1_T_23 : _out1_T_20; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_27 = {_out1_T_24[4:0],_out1_T_24[12:5]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_28 = shiftAmount1[3] ? _out1_T_27 : _out1_T_24; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_31 = {_out1_T_28[9:0],_out1_T_28[12:10]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_32 = shiftAmount1[4] ? _out1_T_31 : _out1_T_28; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_35 = {_out1_T_32[6:0],_out1_T_32[12:7]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_36 = shiftAmount1[5] ? _out1_T_35 : _out1_T_32; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_39 = {_out1_T_36[0],_out1_T_36[12:1]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_40 = shiftAmount1[6] ? _out1_T_39 : _out1_T_36; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_43 = {_out1_T_40[1:0],_out1_T_40[12:2]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_44 = shiftAmount1[7] ? _out1_T_43 : _out1_T_40; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_47 = {_out1_T_44[3:0],_out1_T_44[12:4]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_48 = shiftAmount1[8] ? _out1_T_47 : _out1_T_44; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_51 = {_out1_T_48[7:0],_out1_T_48[12:8]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_52 = shiftAmount1[9] ? _out1_T_51 : _out1_T_48; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_55 = {_out1_T_52[2:0],_out1_T_52[12:3]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_56 = shiftAmount1[10] ? _out1_T_55 : _out1_T_52; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_59 = {_out1_T_56[5:0],_out1_T_56[12:6]}; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_60 = shiftAmount1[11] ? _out1_T_59 : _out1_T_56; // @[UIntOps.scala 162:30]
  wire [12:0] _out1_T_63 = {_out1_T_60[11:0],_out1_T_60[12]}; // @[UIntOps.scala 162:30]
  wire [12:0] out1 = shiftAmount1[12] ? _out1_T_63 : _out1_T_60; // @[UIntOps.scala 162:30]
  wire [12:0] _out2_T_16 = shiftAmount2[0] ? 13'he8e : 13'h1d1c; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_19 = {_out2_T_16[1:0],_out2_T_16[12:2]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_20 = shiftAmount2[1] ? _out2_T_19 : _out2_T_16; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_23 = {_out2_T_20[3:0],_out2_T_20[12:4]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_24 = shiftAmount2[2] ? _out2_T_23 : _out2_T_20; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_27 = {_out2_T_24[7:0],_out2_T_24[12:8]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_28 = shiftAmount2[3] ? _out2_T_27 : _out2_T_24; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_31 = {_out2_T_28[2:0],_out2_T_28[12:3]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_32 = shiftAmount2[4] ? _out2_T_31 : _out2_T_28; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_35 = {_out2_T_32[5:0],_out2_T_32[12:6]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_36 = shiftAmount2[5] ? _out2_T_35 : _out2_T_32; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_39 = {_out2_T_36[11:0],_out2_T_36[12]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_40 = shiftAmount2[6] ? _out2_T_39 : _out2_T_36; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_43 = {_out2_T_40[10:0],_out2_T_40[12:11]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_44 = shiftAmount2[7] ? _out2_T_43 : _out2_T_40; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_47 = {_out2_T_44[8:0],_out2_T_44[12:9]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_48 = shiftAmount2[8] ? _out2_T_47 : _out2_T_44; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_51 = {_out2_T_48[4:0],_out2_T_48[12:5]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_52 = shiftAmount2[9] ? _out2_T_51 : _out2_T_48; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_55 = {_out2_T_52[9:0],_out2_T_52[12:10]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_56 = shiftAmount2[10] ? _out2_T_55 : _out2_T_52; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_59 = {_out2_T_56[6:0],_out2_T_56[12:7]}; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_60 = shiftAmount2[11] ? _out2_T_59 : _out2_T_56; // @[UIntOps.scala 163:31]
  wire [12:0] _out2_T_63 = {_out2_T_60[0],_out2_T_60[12:1]}; // @[UIntOps.scala 163:31]
  wire [12:0] out2 = shiftAmount2[12] ? _out2_T_63 : _out2_T_60; // @[UIntOps.scala 163:31]
  wire  _T_1 = ~reset; // @[UIntOps.scala 165:9]
  wire  _T_6 = shiftAmount1 == 13'hd; // @[UIntOps.scala 168:21]
  always @(posedge clock) begin
    if (reset) begin // @[UIntOps.scala 155:29]
      shiftAmount1 <= 13'h0; // @[UIntOps.scala 155:29]
    end else begin
      shiftAmount1 <= _shiftAmount1_T_1; // @[UIntOps.scala 157:16]
    end
    if (reset) begin // @[UIntOps.scala 156:29]
      shiftAmount2 <= 13'hd; // @[UIntOps.scala 156:29]
    end else begin
      shiftAmount2 <= _shiftAmount2_T_1; // @[UIntOps.scala 158:16]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"rotateLeft by %d: %b\n",shiftAmount1,out1); // @[UIntOps.scala 165:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(out1 == out2)) begin
          $fatal; // @[UIntOps.scala 167:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(out1 == out2)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:167 assert(out1 === out2)\n"); // @[UIntOps.scala 167:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & _T_1 & ~(out1 == 13'h1d1c)) begin
          $fatal; // @[UIntOps.scala 169:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_6 & _T_1 & ~(out1 == 13'h1d1c)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:169 assert(out1 === initValue.U)\n"); // @[UIntOps.scala 169:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6 & _T_1) begin
          $finish; // @[UIntOps.scala 170:9]
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
  shiftAmount1 = _RAND_0[12:0];
  _RAND_1 = {1{`RANDOM}};
  shiftAmount2 = _RAND_1[12:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
