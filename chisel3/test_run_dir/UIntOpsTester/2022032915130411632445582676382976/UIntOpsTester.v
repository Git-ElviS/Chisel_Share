module UIntOps(
  input  [31:0] io_a,
  input  [31:0] io_b,
  output [31:0] io_addout,
  output [31:0] io_subout,
  output [32:0] io_addampout,
  output [32:0] io_subampout,
  output [31:0] io_timesout,
  output [31:0] io_divout,
  output [31:0] io_modout,
  output [31:0] io_lshiftout,
  output [31:0] io_rshiftout,
  output [31:0] io_lrotateout,
  output [31:0] io_rrotateout,
  output        io_lessout,
  output        io_greatout,
  output        io_eqout,
  output        io_noteqout,
  output        io_lesseqout,
  output        io_greateqout
);
  wire [63:0] _io_timesout_T = io_a * io_b; // @[UIntOps.scala 45:21]
  wire [31:0] _io_divout_T_1 = io_b == 32'h0 ? 32'h1 : io_b; // @[UIntOps.scala 46:23]
  wire [46:0] _GEN_0 = {{15'd0}, io_a}; // @[UIntOps.scala 48:22]
  wire [46:0] _io_lshiftout_T_1 = _GEN_0 << io_b[3:0]; // @[UIntOps.scala 48:22]
  assign io_addout = io_a + io_b; // @[UIntOps.scala 41:18]
  assign io_subout = io_a - io_b; // @[UIntOps.scala 42:18]
  assign io_addampout = io_a + io_b; // @[UIntOps.scala 43:21]
  assign io_subampout = io_a - io_b; // @[UIntOps.scala 44:21]
  assign io_timesout = _io_timesout_T[31:0]; // @[UIntOps.scala 45:25]
  assign io_divout = io_a / _io_divout_T_1; // @[UIntOps.scala 46:18]
  assign io_modout = io_a % io_b; // @[UIntOps.scala 47:18]
  assign io_lshiftout = _io_lshiftout_T_1[31:0]; // @[UIntOps.scala 48:33]
  assign io_rshiftout = io_a >> io_b; // @[UIntOps.scala 49:21]
  assign io_lrotateout = {io_a[26:0],io_a[31:27]}; // @[UIntOps.scala 50:32]
  assign io_rrotateout = {io_a[4:0],io_a[31:5]}; // @[UIntOps.scala 51:33]
  assign io_lessout = io_a < io_b; // @[UIntOps.scala 52:19]
  assign io_greatout = io_a > io_b; // @[UIntOps.scala 53:20]
  assign io_eqout = io_a == io_b; // @[UIntOps.scala 54:17]
  assign io_noteqout = io_a != io_b; // @[UIntOps.scala 55:21]
  assign io_lesseqout = io_a <= io_b; // @[UIntOps.scala 56:21]
  assign io_greateqout = io_a >= io_b; // @[UIntOps.scala 57:22]
endmodule
module UIntOpsTester(
  input   clock,
  input   reset
);
  wire [31:0] dut_io_a; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_b; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_addout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_subout; // @[UIntOps.scala 64:19]
  wire [32:0] dut_io_addampout; // @[UIntOps.scala 64:19]
  wire [32:0] dut_io_subampout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_timesout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_divout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_modout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_lshiftout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_rshiftout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_lrotateout; // @[UIntOps.scala 64:19]
  wire [31:0] dut_io_rrotateout; // @[UIntOps.scala 64:19]
  wire  dut_io_lessout; // @[UIntOps.scala 64:19]
  wire  dut_io_greatout; // @[UIntOps.scala 64:19]
  wire  dut_io_eqout; // @[UIntOps.scala 64:19]
  wire  dut_io_noteqout; // @[UIntOps.scala 64:19]
  wire  dut_io_lesseqout; // @[UIntOps.scala 64:19]
  wire  dut_io_greateqout; // @[UIntOps.scala 64:19]
  wire  _T_2 = ~reset; // @[UIntOps.scala 68:9]
  wire  _T_38 = dut_io_lrotateout == 32'hf60; // @[UIntOps.scala 78:23]
  wire  _T_42 = dut_io_rrotateout == 32'hd8000003; // @[UIntOps.scala 82:23]
  UIntOps dut ( // @[UIntOps.scala 64:19]
    .io_a(dut_io_a),
    .io_b(dut_io_b),
    .io_addout(dut_io_addout),
    .io_subout(dut_io_subout),
    .io_addampout(dut_io_addampout),
    .io_subampout(dut_io_subampout),
    .io_timesout(dut_io_timesout),
    .io_divout(dut_io_divout),
    .io_modout(dut_io_modout),
    .io_lshiftout(dut_io_lshiftout),
    .io_rshiftout(dut_io_rshiftout),
    .io_lrotateout(dut_io_lrotateout),
    .io_rrotateout(dut_io_rrotateout),
    .io_lessout(dut_io_lessout),
    .io_greatout(dut_io_greatout),
    .io_eqout(dut_io_eqout),
    .io_noteqout(dut_io_noteqout),
    .io_lesseqout(dut_io_lesseqout),
    .io_greateqout(dut_io_greateqout)
  );
  assign dut_io_a = 32'h7b; // @[UIntOps.scala 65:12]
  assign dut_io_b = 32'h7; // @[UIntOps.scala 66:12]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(dut_io_addout == 32'h82)) begin
          $fatal; // @[UIntOps.scala 68:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(dut_io_addout == 32'h82)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:68 assert(dut.io.addout === (a + b).U(32.W))\n"); // @[UIntOps.scala 68:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_subout == 32'h74)) begin
          $fatal; // @[UIntOps.scala 69:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_subout == 32'h74)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:69 assert(dut.io.subout === (a - b).S(32.W).asUInt)\n"); // @[UIntOps.scala 69:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_addampout == 33'h82)) begin
          $fatal; // @[UIntOps.scala 70:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_addampout == 33'h82)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:70 assert(dut.io.addampout === (a + b).U(33.W))\n"); // @[UIntOps.scala 70:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_subampout == 33'h74)) begin
          $fatal; // @[UIntOps.scala 71:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_subampout == 33'h74)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:71 assert(dut.io.subampout === (a - b).S(33.W).asUInt)\n"); // @[UIntOps.scala 71:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_timesout == 32'h35d)) begin
          $fatal; // @[UIntOps.scala 72:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_timesout == 32'h35d)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:72 assert(dut.io.timesout === (a * b).U(32.W))\n"
            ); // @[UIntOps.scala 72:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_divout == 32'h11)) begin
          $fatal; // @[UIntOps.scala 73:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_divout == 32'h11)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:73 assert(dut.io.divout === (a / (b.max(1))).U(32.W))\n"); // @[UIntOps.scala 73:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_modout == 32'h4)) begin
          $fatal; // @[UIntOps.scala 74:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_modout == 32'h4)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:74 assert(dut.io.modout === (a %% (b.max(1))).U(32.W))\n"); // @[UIntOps.scala 74:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_lshiftout == 32'h3d80)) begin
          $fatal; // @[UIntOps.scala 75:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_lshiftout == 32'h3d80)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:75 assert(dut.io.lshiftout === (a << (b %% 16)).U(32.W))\n"); // @[UIntOps.scala 75:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(dut_io_rshiftout == 32'h0)) begin
          $fatal; // @[UIntOps.scala 76:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(dut_io_rshiftout == 32'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at UIntOps.scala:76 assert(dut.io.rshiftout === (a >> b).U(32.W))\n"); // @[UIntOps.scala 76:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~_T_38) begin
          $fatal; // @[UIntOps.scala 77:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~_T_38) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:77 assert(\n"); // @[UIntOps.scala 77:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~_T_42) begin
          $fatal; // @[UIntOps.scala 81:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~_T_42) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:81 assert(\n"); // @[UIntOps.scala 81:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(~dut_io_lessout)) begin
          $fatal; // @[UIntOps.scala 85:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(~dut_io_lessout)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:85 assert(dut.io.lessout === (a < b).B)\n"); // @[UIntOps.scala 85:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~dut_io_greatout) begin
          $fatal; // @[UIntOps.scala 86:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~dut_io_greatout) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:86 assert(dut.io.greatout === (a > b).B)\n"); // @[UIntOps.scala 86:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(~dut_io_eqout)) begin
          $fatal; // @[UIntOps.scala 87:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(~dut_io_eqout)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:87 assert(dut.io.eqout === (a == b).B)\n"); // @[UIntOps.scala 87:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~dut_io_noteqout) begin
          $fatal; // @[UIntOps.scala 88:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~dut_io_noteqout) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:88 assert(dut.io.noteqout === (a != b).B)\n"); // @[UIntOps.scala 88:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~(~dut_io_lesseqout)) begin
          $fatal; // @[UIntOps.scala 89:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~(~dut_io_lesseqout)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:89 assert(dut.io.lesseqout === (a <= b).B)\n"); // @[UIntOps.scala 89:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2 & ~dut_io_greateqout) begin
          $fatal; // @[UIntOps.scala 90:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~dut_io_greateqout) begin
          $fwrite(32'h80000002,"Assertion failed\n    at UIntOps.scala:90 assert(dut.io.greateqout === (a >= b).B)\n"); // @[UIntOps.scala 90:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[UIntOps.scala 92:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
