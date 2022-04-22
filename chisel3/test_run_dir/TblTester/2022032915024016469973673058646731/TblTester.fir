circuit TblTester :
  module Tbl :
    input clock : Clock
    input reset : Reset
    output io : { flip wi : UInt<4>, flip ri : UInt<4>, flip we : UInt<1>, flip d : UInt<4>, o : UInt<4>}

    cmem m : UInt<4> [16] @[Tbl.scala 17:14]
    infer mport io_o_MPORT = m[io.ri], clock @[Tbl.scala 18:12]
    io.o <= io_o_MPORT @[Tbl.scala 18:8]
    when io.we : @[Tbl.scala 19:15]
      infer mport MPORT = m[io.wi], clock @[Tbl.scala 20:6]
      MPORT <= io.d @[Tbl.scala 20:14]
      node _T = eq(io.ri, io.wi) @[Tbl.scala 21:16]
      when _T : @[Tbl.scala 21:27]
        io.o <= io.d @[Tbl.scala 22:12]

  module TblTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Counter.scala 62:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cnt, UInt<3>("h7")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _wrap_value_T_1 @[Counter.scala 78:15]
      wrap <= wrap_wrap @[Counter.scala 120:23]
    inst dut of Tbl @[Tbl.scala 29:19]
    dut.clock <= clock
    dut.reset <= reset
    wire vvalues : UInt<4>[8] @[Tbl.scala 30:24]
    vvalues[0] <= UInt<4>("hc") @[Tbl.scala 30:24]
    vvalues[1] <= UInt<4>("hb") @[Tbl.scala 30:24]
    vvalues[2] <= UInt<3>("h6") @[Tbl.scala 30:24]
    vvalues[3] <= UInt<4>("ha") @[Tbl.scala 30:24]
    vvalues[4] <= UInt<4>("hd") @[Tbl.scala 30:24]
    vvalues[5] <= UInt<3>("h4") @[Tbl.scala 30:24]
    vvalues[6] <= UInt<4>("hc") @[Tbl.scala 30:24]
    vvalues[7] <= UInt<3>("h6") @[Tbl.scala 30:24]
    wire vidxs : UInt<4>[8] @[Tbl.scala 31:22]
    vidxs[0] <= UInt<4>("h9") @[Tbl.scala 31:22]
    vidxs[1] <= UInt<3>("h5") @[Tbl.scala 31:22]
    vidxs[2] <= UInt<4>("h9") @[Tbl.scala 31:22]
    vidxs[3] <= UInt<3>("h6") @[Tbl.scala 31:22]
    vidxs[4] <= UInt<4>("hf") @[Tbl.scala 31:22]
    vidxs[5] <= UInt<4>("hf") @[Tbl.scala 31:22]
    vidxs[6] <= UInt<4>("h9") @[Tbl.scala 31:22]
    vidxs[7] <= UInt<4>("h9") @[Tbl.scala 31:22]
    node _prev_idx_T = sub(cnt, UInt<1>("h1")) @[Tbl.scala 32:28]
    node _prev_idx_T_1 = tail(_prev_idx_T, 1) @[Tbl.scala 32:28]
    node _prev_value_T = sub(cnt, UInt<1>("h1")) @[Tbl.scala 33:32]
    node _prev_value_T_1 = tail(_prev_value_T, 1) @[Tbl.scala 33:32]
    dut.io.wi <= vidxs[cnt] @[Tbl.scala 34:13]
    dut.io.ri <= vidxs[_prev_idx_T_1] @[Tbl.scala 35:13]
    dut.io.we <= UInt<1>("h1") @[Tbl.scala 36:13]
    dut.io.d <= vvalues[cnt] @[Tbl.scala 37:12]
    node _T = gt(cnt, UInt<1>("h0")) @[Tbl.scala 38:12]
    when _T : @[Tbl.scala 38:19]
      node _T_1 = eq(vidxs[_prev_idx_T_1], vidxs[cnt]) @[Tbl.scala 39:19]
      when _T_1 : @[Tbl.scala 39:35]
        node _T_2 = eq(dut.io.o, vvalues[cnt]) @[Tbl.scala 40:23]
        node _T_3 = bits(reset, 0, 0) @[Tbl.scala 40:13]
        node _T_4 = eq(_T_3, UInt<1>("h0")) @[Tbl.scala 40:13]
        when _T_4 : @[Tbl.scala 40:13]
          assert(clock, _T_2, UInt<1>("h1"), "") : assert @[Tbl.scala 40:13]
          node _T_5 = eq(_T_2, UInt<1>("h0")) @[Tbl.scala 40:13]
          when _T_5 : @[Tbl.scala 40:13]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n") : printf @[Tbl.scala 40:13]
      else :
        node _T_6 = eq(dut.io.o, vvalues[_prev_value_T_1]) @[Tbl.scala 42:23]
        node _T_7 = bits(reset, 0, 0) @[Tbl.scala 42:13]
        node _T_8 = eq(_T_7, UInt<1>("h0")) @[Tbl.scala 42:13]
        when _T_8 : @[Tbl.scala 42:13]
          assert(clock, _T_6, UInt<1>("h1"), "") : assert_1 @[Tbl.scala 42:13]
          node _T_9 = eq(_T_6, UInt<1>("h0")) @[Tbl.scala 42:13]
          when _T_9 : @[Tbl.scala 42:13]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n") : printf_1 @[Tbl.scala 42:13]
    when wrap : @[Tbl.scala 45:14]
      node _T_10 = bits(reset, 0, 0) @[Tbl.scala 46:9]
      node _T_11 = eq(_T_10, UInt<1>("h0")) @[Tbl.scala 46:9]
      when _T_11 : @[Tbl.scala 46:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Tbl.scala 46:9]
