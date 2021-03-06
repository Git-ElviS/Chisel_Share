module ResetAgnosticModule(
  input        clk,
  input        rst,
  output [7:0] out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] reg_; // @[ResetSpec.scala 15:48]
  assign out = reg_; // @[ResetSpec.scala 17:7]
  always @(posedge clk or posedge rst) begin
    if (rst) begin // @[ResetSpec.scala 16:14]
      reg_ <= 8'h0;
    end else begin
      reg_ <= reg_ + 8'h1;
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
  reg_ = _RAND_0[7:0];
`endif // RANDOMIZE_REG_INIT
  if (rst) begin
    reg_ = 8'h0;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ResetSpec_Anon(
  input        clock,
  input        reset,
  output [7:0] io_out
);
  wire  inst_clk; // @[ResetSpec.scala 83:24]
  wire  inst_rst; // @[ResetSpec.scala 83:24]
  wire [7:0] inst_out; // @[ResetSpec.scala 83:24]
  ResetAgnosticModule inst ( // @[ResetSpec.scala 83:24]
    .clk(inst_clk),
    .rst(inst_rst),
    .out(inst_out)
  );
  assign io_out = inst_out; // @[ResetSpec.scala 87:14]
  assign inst_clk = clock; // @[ResetSpec.scala 84:16]
  assign inst_rst = reset; // @[ResetSpec.scala 85:33]
endmodule
