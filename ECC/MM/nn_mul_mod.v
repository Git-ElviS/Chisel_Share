module nn_modinv_2exp(
  output [31:0] io_out
);
  wire [1:0] _T = 1'h1 * 1'h1; // @[nn_modinv_2exp.scala 22:26]
  wire [31:0] _GEN_0 = {{30'd0}, _T}; // @[nn_modinv_2exp.scala 23:27]
  wire [33:0] _T_1 = _GEN_0 * 32'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [33:0] _T_4 = 34'h2 - _T_1; // @[nn_modinv_2exp.scala 25:27]
  wire [67:0] _T_5 = _T_4 * _T_4; // @[nn_modinv_2exp.scala 22:26]
  wire [99:0] _T_6 = _T_5 * 68'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [34:0] _T_7 = {_T_4, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [99:0] _GEN_1 = {{65'd0}, _T_7}; // @[nn_modinv_2exp.scala 25:27]
  wire [99:0] _T_9 = _GEN_1 - _T_6; // @[nn_modinv_2exp.scala 25:27]
  wire [199:0] _T_10 = _T_9 * _T_9; // @[nn_modinv_2exp.scala 22:26]
  wire [231:0] _T_11 = _T_10 * 200'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [100:0] _T_12 = {_T_9, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [231:0] _GEN_2 = {{131'd0}, _T_12}; // @[nn_modinv_2exp.scala 25:27]
  wire [231:0] _T_14 = _GEN_2 - _T_11; // @[nn_modinv_2exp.scala 25:27]
  wire [463:0] _T_15 = _T_14 * _T_14; // @[nn_modinv_2exp.scala 22:26]
  wire [495:0] _T_16 = _T_15 * 464'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [232:0] _T_17 = {_T_14, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [495:0] _GEN_3 = {{263'd0}, _T_17}; // @[nn_modinv_2exp.scala 25:27]
  wire [495:0] _T_19 = _GEN_3 - _T_16; // @[nn_modinv_2exp.scala 25:27]
  wire [991:0] _T_20 = _T_19 * _T_19; // @[nn_modinv_2exp.scala 22:26]
  wire [1023:0] _T_21 = _T_20 * 992'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [496:0] _T_22 = {_T_19, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [1023:0] _GEN_4 = {{527'd0}, _T_22}; // @[nn_modinv_2exp.scala 25:27]
  wire [1023:0] _T_24 = _GEN_4 - _T_21; // @[nn_modinv_2exp.scala 25:27]
  wire [2047:0] _T_25 = _T_24 * _T_24; // @[nn_modinv_2exp.scala 22:26]
  wire [2079:0] _T_26 = _T_25 * 2048'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [1024:0] _T_27 = {_T_24, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [2079:0] _GEN_5 = {{1055'd0}, _T_27}; // @[nn_modinv_2exp.scala 25:27]
  wire [2079:0] _T_29 = _GEN_5 - _T_26; // @[nn_modinv_2exp.scala 25:27]
  wire [4159:0] _T_30 = _T_29 * _T_29; // @[nn_modinv_2exp.scala 22:26]
  wire [4191:0] _T_31 = _T_30 * 4160'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [2080:0] _T_32 = {_T_29, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [4191:0] _GEN_6 = {{2111'd0}, _T_32}; // @[nn_modinv_2exp.scala 25:27]
  wire [4191:0] _T_34 = _GEN_6 - _T_31; // @[nn_modinv_2exp.scala 25:27]
  wire [8383:0] _T_35 = _T_34 * _T_34; // @[nn_modinv_2exp.scala 22:26]
  wire [8415:0] _T_36 = _T_35 * 8384'h1; // @[nn_modinv_2exp.scala 23:27]
  wire [4192:0] _T_37 = {_T_34, 1'h0}; // @[nn_modinv_2exp.scala 24:28]
  wire [8415:0] _GEN_7 = {{4223'd0}, _T_37}; // @[nn_modinv_2exp.scala 25:27]
  wire [8415:0] _T_39 = _GEN_7 - _T_36; // @[nn_modinv_2exp.scala 25:27]
  wire [16831:0] _T_40 = _T_39 * _T_39; // @[nn_modinv_2exp.scala 29:26]
  wire [16863:0] _T_41 = _T_40 * 16832'h1; // @[nn_modinv_2exp.scala 30:27]
  wire [8416:0] _T_42 = {_T_39, 1'h0}; // @[nn_modinv_2exp.scala 31:28]
  wire [16863:0] _GEN_8 = {{8447'd0}, _T_42}; // @[nn_modinv_2exp.scala 32:27]
  wire [16863:0] _T_44 = _GEN_8 - _T_41; // @[nn_modinv_2exp.scala 32:27]
  wire [33727:0] _T_45 = _T_44 * _T_44; // @[nn_modinv_2exp.scala 29:26]
  wire [33759:0] _T_46 = _T_45 * 33728'h1; // @[nn_modinv_2exp.scala 30:27]
  wire [16864:0] _T_47 = {_T_44, 1'h0}; // @[nn_modinv_2exp.scala 31:28]
  wire [33759:0] _GEN_9 = {{16895'd0}, _T_47}; // @[nn_modinv_2exp.scala 32:27]
  wire [33759:0] _T_49 = _GEN_9 - _T_46; // @[nn_modinv_2exp.scala 32:27]
  wire [67519:0] _T_50 = _T_49 * _T_49; // @[nn_modinv_2exp.scala 29:26]
  wire [67551:0] _T_51 = _T_50 * 67520'h1; // @[nn_modinv_2exp.scala 30:27]
  wire [33760:0] _T_52 = {_T_49, 1'h0}; // @[nn_modinv_2exp.scala 31:28]
  wire [67551:0] _GEN_10 = {{33791'd0}, _T_52}; // @[nn_modinv_2exp.scala 32:27]
  wire [67551:0] _T_54 = _GEN_10 - _T_51; // @[nn_modinv_2exp.scala 32:27]
  wire [135103:0] tmp_sqr = _T_54 * _T_54; // @[nn_modinv_2exp.scala 29:26]
  wire [135135:0] tmp_mul = tmp_sqr * 135104'h1; // @[nn_modinv_2exp.scala 30:27]
  wire [67552:0] _T_55 = {_T_54, 1'h0}; // @[nn_modinv_2exp.scala 31:28]
  wire [135135:0] _GEN_11 = {{67583'd0}, _T_55}; // @[nn_modinv_2exp.scala 32:27]
  wire [135135:0] tmp_out = _GEN_11 - tmp_mul; // @[nn_modinv_2exp.scala 32:27]
  assign io_out = tmp_out[31:0]; // @[nn_modinv_2exp.scala 37:12]
endmodule
module nn_compute_redc1_coefs(
  output [31:0] io_mpinv
);
  wire [31:0] modinv_2exp_io_out; // @[nn_compute_redc1_coefs.scala 19:27]
  nn_modinv_2exp modinv_2exp ( // @[nn_compute_redc1_coefs.scala 19:27]
    .io_out(modinv_2exp_io_out)
  );
  assign io_mpinv = modinv_2exp_io_out - 32'h1; // @[nn_compute_redc1_coefs.scala 26:12]
endmodule
module nn_mul_mod(
  input         clock,
  input         reset,
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  input  [31:0] io_p,
  output [31:0] io_out
);
  wire [31:0] compute_redc1_coefs_io_mpinv; // @[nn_mul_mod.scala 19:35]
  nn_compute_redc1_coefs compute_redc1_coefs ( // @[nn_mul_mod.scala 19:35]
    .io_mpinv(compute_redc1_coefs_io_mpinv)
  );
  assign io_out = compute_redc1_coefs_io_mpinv; // @[nn_mul_mod.scala 52:10]
endmodule
