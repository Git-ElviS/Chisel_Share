;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit nn_mul_mod : 
  module nn_modinv_2exp : 
    input clock : Clock
    input reset : Reset
    output io : {flip x : UInt<32>, flip exp : UInt<32>, out : UInt<32>}
    
    node _T = mul(UInt<1>("h01"), UInt<1>("h01")) @[nn_modinv_2exp.scala 22:26]
    node _T_1 = mul(_T, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_2 = dshl(UInt<1>("h01"), UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_3 = sub(_T_2, _T_1) @[nn_modinv_2exp.scala 25:27]
    node _T_4 = tail(_T_3, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_5 = mul(_T_4, _T_4) @[nn_modinv_2exp.scala 22:26]
    node _T_6 = mul(_T_5, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_7 = dshl(_T_4, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_8 = sub(_T_7, _T_6) @[nn_modinv_2exp.scala 25:27]
    node _T_9 = tail(_T_8, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_10 = mul(_T_9, _T_9) @[nn_modinv_2exp.scala 22:26]
    node _T_11 = mul(_T_10, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_12 = dshl(_T_9, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_13 = sub(_T_12, _T_11) @[nn_modinv_2exp.scala 25:27]
    node _T_14 = tail(_T_13, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_15 = mul(_T_14, _T_14) @[nn_modinv_2exp.scala 22:26]
    node _T_16 = mul(_T_15, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_17 = dshl(_T_14, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_18 = sub(_T_17, _T_16) @[nn_modinv_2exp.scala 25:27]
    node _T_19 = tail(_T_18, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_20 = mul(_T_19, _T_19) @[nn_modinv_2exp.scala 22:26]
    node _T_21 = mul(_T_20, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_22 = dshl(_T_19, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_23 = sub(_T_22, _T_21) @[nn_modinv_2exp.scala 25:27]
    node _T_24 = tail(_T_23, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_25 = mul(_T_24, _T_24) @[nn_modinv_2exp.scala 22:26]
    node _T_26 = mul(_T_25, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_27 = dshl(_T_24, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_28 = sub(_T_27, _T_26) @[nn_modinv_2exp.scala 25:27]
    node _T_29 = tail(_T_28, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_30 = mul(_T_29, _T_29) @[nn_modinv_2exp.scala 22:26]
    node _T_31 = mul(_T_30, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_32 = dshl(_T_29, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_33 = sub(_T_32, _T_31) @[nn_modinv_2exp.scala 25:27]
    node _T_34 = tail(_T_33, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_35 = mul(_T_34, _T_34) @[nn_modinv_2exp.scala 22:26]
    node _T_36 = mul(_T_35, io.x) @[nn_modinv_2exp.scala 23:27]
    node _T_37 = dshl(_T_34, UInt<1>("h01")) @[nn_modinv_2exp.scala 24:28]
    node _T_38 = sub(_T_37, _T_36) @[nn_modinv_2exp.scala 25:27]
    node _T_39 = tail(_T_38, 1) @[nn_modinv_2exp.scala 25:27]
    node _T_40 = mul(_T_39, _T_39) @[nn_modinv_2exp.scala 29:26]
    node _T_41 = mul(_T_40, io.x) @[nn_modinv_2exp.scala 30:27]
    node _T_42 = dshl(_T_39, UInt<1>("h01")) @[nn_modinv_2exp.scala 31:28]
    node _T_43 = sub(_T_42, _T_41) @[nn_modinv_2exp.scala 32:27]
    node _T_44 = tail(_T_43, 1) @[nn_modinv_2exp.scala 32:27]
    node _T_45 = mul(_T_44, _T_44) @[nn_modinv_2exp.scala 29:26]
    node _T_46 = mul(_T_45, io.x) @[nn_modinv_2exp.scala 30:27]
    node _T_47 = dshl(_T_44, UInt<1>("h01")) @[nn_modinv_2exp.scala 31:28]
    node _T_48 = sub(_T_47, _T_46) @[nn_modinv_2exp.scala 32:27]
    node _T_49 = tail(_T_48, 1) @[nn_modinv_2exp.scala 32:27]
    node _T_50 = mul(_T_49, _T_49) @[nn_modinv_2exp.scala 29:26]
    node _T_51 = mul(_T_50, io.x) @[nn_modinv_2exp.scala 30:27]
    node _T_52 = dshl(_T_49, UInt<1>("h01")) @[nn_modinv_2exp.scala 31:28]
    node _T_53 = sub(_T_52, _T_51) @[nn_modinv_2exp.scala 32:27]
    node _T_54 = tail(_T_53, 1) @[nn_modinv_2exp.scala 32:27]
    node tmp_sqr = mul(_T_54, _T_54) @[nn_modinv_2exp.scala 29:26]
    node tmp_mul = mul(tmp_sqr, io.x) @[nn_modinv_2exp.scala 30:27]
    node _T_55 = dshl(_T_54, UInt<1>("h01")) @[nn_modinv_2exp.scala 31:28]
    node _T_56 = sub(_T_55, tmp_mul) @[nn_modinv_2exp.scala 32:27]
    node tmp_out = tail(_T_56, 1) @[nn_modinv_2exp.scala 32:27]
    io.out <= tmp_out @[nn_modinv_2exp.scala 37:12]
    
  module nn_compute_redc1_coefs : 
    input clock : Clock
    input reset : Reset
    output io : {flip p_in : UInt<32>, r : UInt<32>, r_sruare : UInt<32>, mpinv : UInt<32>}
    
    inst modinv_2exp of nn_modinv_2exp @[nn_compute_redc1_coefs.scala 19:27]
    modinv_2exp.clock <= clock
    modinv_2exp.reset <= reset
    modinv_2exp.io.x <= UInt<1>("h01") @[nn_compute_redc1_coefs.scala 21:20]
    modinv_2exp.io.exp <= io.p_in @[nn_compute_redc1_coefs.scala 22:22]
    node _T = sub(modinv_2exp.io.out, UInt<1>("h01")) @[nn_compute_redc1_coefs.scala 25:20]
    node tmp_nn1 = tail(_T, 1) @[nn_compute_redc1_coefs.scala 25:20]
    io.mpinv <= tmp_nn1 @[nn_compute_redc1_coefs.scala 26:12]
    node r = shl(UInt<1>("h01"), 32) @[nn_compute_redc1_coefs.scala 29:15]
    node out_r = rem(r, io.p_in) @[nn_compute_redc1_coefs.scala 30:17]
    io.r <= out_r @[nn_compute_redc1_coefs.scala 31:8]
    node r_sruare = mul(r, r) @[nn_compute_redc1_coefs.scala 33:19]
    node _T_1 = rem(r_sruare, io.p_in) @[nn_compute_redc1_coefs.scala 34:27]
    io.r_sruare <= _T_1 @[nn_compute_redc1_coefs.scala 34:15]
    
  module nn_mul_redc1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in1 : UInt<32>, flip in2 : UInt<32>, flip p : UInt<32>, flip mpinv : UInt<32>, out : UInt<32>}
    
    node _T = mul(io.in1, io.in2) @[nn_mul_redc1.scala 19:22]
    node _T_1 = mul(_T, io.mpinv) @[nn_mul_redc1.scala 20:21]
    node m = mul(_T_1, io.p) @[nn_mul_redc1.scala 21:11]
    node _T_2 = add(_T, m) @[nn_mul_redc1.scala 22:23]
    node _T_3 = tail(_T_2, 1) @[nn_mul_redc1.scala 22:23]
    node _T_4 = gt(_T_3, io.p) @[nn_mul_redc1.scala 24:18]
    when _T_4 : @[nn_mul_redc1.scala 24:25]
      node _T_5 = sub(_T_3, io.p) @[nn_mul_redc1.scala 25:27]
      node tmp_out = tail(_T_5, 1) @[nn_mul_redc1.scala 25:27]
      skip @[nn_mul_redc1.scala 24:25]
    io.out <= tmp_out @[nn_mul_redc1.scala 28:12]
    
  module nn_mul_redc1_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in1 : UInt<32>, flip in2 : UInt<32>, flip p : UInt<32>, flip mpinv : UInt<32>, out : UInt<32>}
    
    node _T = mul(io.in1, io.in2) @[nn_mul_redc1.scala 19:22]
    node _T_1 = mul(_T, io.mpinv) @[nn_mul_redc1.scala 20:21]
    node m = mul(_T_1, io.p) @[nn_mul_redc1.scala 21:11]
    node _T_2 = add(_T, m) @[nn_mul_redc1.scala 22:23]
    node _T_3 = tail(_T_2, 1) @[nn_mul_redc1.scala 22:23]
    node _T_4 = gt(_T_3, io.p) @[nn_mul_redc1.scala 24:18]
    when _T_4 : @[nn_mul_redc1.scala 24:25]
      node _T_5 = sub(_T_3, io.p) @[nn_mul_redc1.scala 25:27]
      node tmp_out = tail(_T_5, 1) @[nn_mul_redc1.scala 25:27]
      skip @[nn_mul_redc1.scala 24:25]
    io.out <= tmp_out @[nn_mul_redc1.scala 28:12]
    
  module nn_mul_redc1_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in1 : UInt<32>, flip in2 : UInt<32>, flip p : UInt<32>, flip mpinv : UInt<32>, out : UInt<32>}
    
    node _T = mul(io.in1, io.in2) @[nn_mul_redc1.scala 19:22]
    node _T_1 = mul(_T, io.mpinv) @[nn_mul_redc1.scala 20:21]
    node m = mul(_T_1, io.p) @[nn_mul_redc1.scala 21:11]
    node _T_2 = add(_T, m) @[nn_mul_redc1.scala 22:23]
    node _T_3 = tail(_T_2, 1) @[nn_mul_redc1.scala 22:23]
    node _T_4 = gt(_T_3, io.p) @[nn_mul_redc1.scala 24:18]
    when _T_4 : @[nn_mul_redc1.scala 24:25]
      node _T_5 = sub(_T_3, io.p) @[nn_mul_redc1.scala 25:27]
      node tmp_out = tail(_T_5, 1) @[nn_mul_redc1.scala 25:27]
      skip @[nn_mul_redc1.scala 24:25]
    io.out <= tmp_out @[nn_mul_redc1.scala 28:12]
    
  module nn_mul_redc1_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in1 : UInt<32>, flip in2 : UInt<32>, flip p : UInt<32>, flip mpinv : UInt<32>, out : UInt<32>}
    
    node _T = mul(io.in1, io.in2) @[nn_mul_redc1.scala 19:22]
    node _T_1 = mul(_T, io.mpinv) @[nn_mul_redc1.scala 20:21]
    node m = mul(_T_1, io.p) @[nn_mul_redc1.scala 21:11]
    node _T_2 = add(_T, m) @[nn_mul_redc1.scala 22:23]
    node _T_3 = tail(_T_2, 1) @[nn_mul_redc1.scala 22:23]
    node _T_4 = gt(_T_3, io.p) @[nn_mul_redc1.scala 24:18]
    when _T_4 : @[nn_mul_redc1.scala 24:25]
      node _T_5 = sub(_T_3, io.p) @[nn_mul_redc1.scala 25:27]
      node tmp_out = tail(_T_5, 1) @[nn_mul_redc1.scala 25:27]
      skip @[nn_mul_redc1.scala 24:25]
    io.out <= tmp_out @[nn_mul_redc1.scala 28:12]
    
  module nn_mul_mod : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in1 : UInt<32>, flip in2 : UInt<32>, flip p : UInt<32>, out : UInt<32>}
    
    inst compute_redc1_coefs of nn_compute_redc1_coefs @[nn_mul_mod.scala 19:35]
    compute_redc1_coefs.clock <= clock
    compute_redc1_coefs.reset <= reset
    compute_redc1_coefs.io.p_in <= io.p @[nn_mul_mod.scala 20:31]
    inst mul_redc1_1 of nn_mul_redc1 @[nn_mul_mod.scala 25:27]
    mul_redc1_1.clock <= clock
    mul_redc1_1.reset <= reset
    mul_redc1_1.io.in1 <= io.in1 @[nn_mul_mod.scala 26:22]
    mul_redc1_1.io.in2 <= compute_redc1_coefs.io.r_sruare @[nn_mul_mod.scala 27:22]
    mul_redc1_1.io.p <= io.p @[nn_mul_mod.scala 28:20]
    mul_redc1_1.io.mpinv <= compute_redc1_coefs.io.mpinv @[nn_mul_mod.scala 29:24]
    inst mul_redc1_2 of nn_mul_redc1_1 @[nn_mul_mod.scala 32:27]
    mul_redc1_2.clock <= clock
    mul_redc1_2.reset <= reset
    mul_redc1_2.io.in1 <= io.in2 @[nn_mul_mod.scala 33:22]
    mul_redc1_2.io.in2 <= compute_redc1_coefs.io.r_sruare @[nn_mul_mod.scala 34:22]
    mul_redc1_2.io.p <= io.p @[nn_mul_mod.scala 35:20]
    mul_redc1_2.io.mpinv <= compute_redc1_coefs.io.mpinv @[nn_mul_mod.scala 36:24]
    inst mul_redc1_3 of nn_mul_redc1_2 @[nn_mul_mod.scala 39:27]
    mul_redc1_3.clock <= clock
    mul_redc1_3.reset <= reset
    mul_redc1_3.io.in1 <= mul_redc1_1.io.out @[nn_mul_mod.scala 40:22]
    mul_redc1_3.io.in2 <= mul_redc1_2.io.out @[nn_mul_mod.scala 41:22]
    mul_redc1_3.io.p <= io.p @[nn_mul_mod.scala 42:20]
    mul_redc1_3.io.mpinv <= compute_redc1_coefs.io.mpinv @[nn_mul_mod.scala 43:24]
    inst mul_redc1_4 of nn_mul_redc1_3 @[nn_mul_mod.scala 46:27]
    mul_redc1_4.clock <= clock
    mul_redc1_4.reset <= reset
    mul_redc1_4.io.in1 <= mul_redc1_3.io.out @[nn_mul_mod.scala 47:22]
    mul_redc1_4.io.in2 <= UInt<1>("h01") @[nn_mul_mod.scala 48:22]
    mul_redc1_4.io.p <= io.p @[nn_mul_mod.scala 49:20]
    mul_redc1_4.io.mpinv <= compute_redc1_coefs.io.mpinv @[nn_mul_mod.scala 50:24]
    io.out <= compute_redc1_coefs.io.mpinv @[nn_mul_mod.scala 52:10]
    
