module AnalogSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] writer_in; // @[AnalogSpec.scala 84:28]
  wire [31:0] mods_0_out; // @[AnalogSpec.scala 257:38]
  wire [31:0] mods_1_out; // @[AnalogSpec.scala 257:38]
  wire [31:0] busWire; // @[AnalogSpec.scala 258:27]
  reg  cycle; // @[Counter.scala 62:40]
  wire  _wrap_value_T_1 = cycle + 1'h1; // @[Counter.scala 78:24]
  wire  _T_1 = ~reset; // @[AnalogSpec.scala 82:20]
  AnalogWriterBlackBox writer ( // @[AnalogSpec.scala 84:28]
    .bus(busWire),
    .in(writer_in)
  );
  AnalogReaderBlackBox mods_0 ( // @[AnalogSpec.scala 257:38]
    .bus(busWire),
    .out(mods_0_out)
  );
  AnalogReaderBlackBox mods_1 ( // @[AnalogSpec.scala 257:38]
    .bus(busWire),
    .out(mods_1_out)
  );
  assign writer_in = 32'hdeadbeef; // @[AnalogSpec.scala 85:16]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 62:40]
      cycle <= 1'h0; // @[Counter.scala 62:40]
    end else begin
      cycle <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (cycle & ~reset) begin
          $finish; // @[AnalogSpec.scala 82:20]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(mods_0_out == 32'hdeadbeef)) begin
          $fatal; // @[AnalogSpec.scala 88:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(mods_0_out == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AnalogSpec.scala:88 assert(reader.out === BusValue)\n"); // @[AnalogSpec.scala 88:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(mods_1_out == 32'hdeadbeef)) begin
          $fatal; // @[AnalogSpec.scala 88:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(mods_1_out == 32'hdeadbeef)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AnalogSpec.scala:88 assert(reader.out === BusValue)\n"); // @[AnalogSpec.scala 88:11]
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
  cycle = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
