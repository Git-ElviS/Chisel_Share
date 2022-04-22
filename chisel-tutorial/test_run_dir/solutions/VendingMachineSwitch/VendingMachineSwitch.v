module VendingMachineSwitch(
  input   clock,
  input   reset,
  input   io_nickel,
  input   io_dime,
  output  io_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[VendingMachineSwitch.scala 22:22]
  wire  _T = 3'h0 == state; // @[Conditional.scala 37:30]
  wire  _T_1 = 3'h1 == state; // @[Conditional.scala 37:30]
  wire  _T_2 = 3'h2 == state; // @[Conditional.scala 37:30]
  wire  _T_3 = 3'h3 == state; // @[Conditional.scala 37:30]
  wire  _T_4 = 3'h4 == state; // @[Conditional.scala 37:30]
  assign io_valid = state == 3'h4; // @[VendingMachineSwitch.scala 45:12]
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
  state = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      state <= 3'h0;
    end else if (_T) begin
      if (io_dime) begin
        state <= 3'h2;
      end else if (io_nickel) begin
        state <= 3'h1;
      end
    end else if (_T_1) begin
      if (io_dime) begin
        state <= 3'h3;
      end else if (io_nickel) begin
        state <= 3'h2;
      end
    end else if (_T_2) begin
      if (io_dime) begin
        state <= 3'h4;
      end else if (io_nickel) begin
        state <= 3'h3;
      end
    end else if (_T_3) begin
      if (io_dime) begin
        state <= 3'h4;
      end else if (io_nickel) begin
        state <= 3'h4;
      end
    end else if (_T_4) begin
      state <= 3'h0;
    end
  end
endmodule
