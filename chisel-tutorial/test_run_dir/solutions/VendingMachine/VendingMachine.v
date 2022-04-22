module VendingMachine(
  input   clock,
  input   reset,
  input   io_nickel,
  input   io_dime,
  output  io_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[VendingMachine.scala 22:22]
  wire  _T = state == 3'h0; // @[VendingMachine.scala 23:15]
  wire [2:0] _GEN_0 = io_nickel ? 3'h1 : state; // @[VendingMachine.scala 24:22]
  wire [2:0] _GEN_1 = io_dime ? 3'h2 : _GEN_0; // @[VendingMachine.scala 25:22]
  wire [2:0] _GEN_2 = _T ? _GEN_1 : state; // @[VendingMachine.scala 23:26]
  wire  _T_1 = state == 3'h1; // @[VendingMachine.scala 27:15]
  wire  _T_2 = state == 3'h2; // @[VendingMachine.scala 31:15]
  wire  _T_3 = state == 3'h3; // @[VendingMachine.scala 35:15]
  wire  _T_4 = state == 3'h4; // @[VendingMachine.scala 39:15]
  assign io_valid = state == 3'h4; // @[VendingMachine.scala 42:12]
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
    end else if (_T_4) begin
      state <= 3'h0;
    end else if (_T_3) begin
      if (io_dime) begin
        state <= 3'h4;
      end else if (io_nickel) begin
        state <= 3'h4;
      end else if (_T_2) begin
        if (io_dime) begin
          state <= 3'h4;
        end else if (io_nickel) begin
          state <= 3'h3;
        end else if (_T_1) begin
          if (io_dime) begin
            state <= 3'h3;
          end else if (io_nickel) begin
            state <= 3'h2;
          end else if (_T) begin
            if (io_dime) begin
              state <= 3'h2;
            end else if (io_nickel) begin
              state <= 3'h1;
            end
          end
        end else if (_T) begin
          if (io_dime) begin
            state <= 3'h2;
          end else if (io_nickel) begin
            state <= 3'h1;
          end
        end
      end else if (_T_1) begin
        if (io_dime) begin
          state <= 3'h3;
        end else if (io_nickel) begin
          state <= 3'h2;
        end else if (_T) begin
          if (io_dime) begin
            state <= 3'h2;
          end else if (io_nickel) begin
            state <= 3'h1;
          end
        end
      end else if (_T) begin
        if (io_dime) begin
          state <= 3'h2;
        end else if (io_nickel) begin
          state <= 3'h1;
        end
      end
    end else if (_T_2) begin
      if (io_dime) begin
        state <= 3'h4;
      end else if (io_nickel) begin
        state <= 3'h3;
      end else if (_T_1) begin
        if (io_dime) begin
          state <= 3'h3;
        end else if (io_nickel) begin
          state <= 3'h2;
        end else begin
          state <= _GEN_2;
        end
      end else begin
        state <= _GEN_2;
      end
    end else if (_T_1) begin
      if (io_dime) begin
        state <= 3'h3;
      end else if (io_nickel) begin
        state <= 3'h2;
      end else begin
        state <= _GEN_2;
      end
    end else begin
      state <= _GEN_2;
    end
  end
endmodule
