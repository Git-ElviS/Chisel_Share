circuit GCDTester :
  module GCD :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<32>, flip b : UInt<32>, flip e : UInt<1>, z : UInt<32>, v : UInt<1>}

    reg x : UInt<32>, clock with :
      reset => (UInt<1>("h0"), x) @[GCD.scala 17:14]
    reg y : UInt<32>, clock with :
      reset => (UInt<1>("h0"), y) @[GCD.scala 18:14]
    node _T = gt(x, y) @[GCD.scala 19:10]
    when _T : @[GCD.scala 19:15]
      node _x_T = sub(x, y) @[GCD.scala 19:24]
      node _x_T_1 = tail(_x_T, 1) @[GCD.scala 19:24]
      x <= _x_T_1 @[GCD.scala 19:19]
    else :
      node _y_T = sub(y, x) @[GCD.scala 19:50]
      node _y_T_1 = tail(_y_T, 1) @[GCD.scala 19:50]
      y <= _y_T_1 @[GCD.scala 19:45]
    when io.e : @[GCD.scala 20:14]
      x <= io.a @[GCD.scala 20:18]
      y <= io.b @[GCD.scala 20:29]
    io.z <= x @[GCD.scala 21:8]
    node _io_v_T = eq(y, UInt<1>("h0")) @[GCD.scala 22:13]
    io.v <= _io_v_T @[GCD.scala 22:8]

  module GCDTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of GCD @[GCD.scala 26:19]
    dut.clock <= clock
    dut.reset <= reset
    reg first : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[GCD.scala 27:22]
    dut.io.a <= UInt<7>("h40") @[GCD.scala 28:12]
    dut.io.b <= UInt<6>("h30") @[GCD.scala 29:12]
    dut.io.e <= first @[GCD.scala 30:12]
    when first : @[GCD.scala 31:15]
      first <= UInt<1>("h0") @[GCD.scala 31:23]
    node _T = eq(first, UInt<1>("h0")) @[GCD.scala 32:8]
    node _T_1 = and(_T, dut.io.v) @[GCD.scala 32:15]
    when _T_1 : @[GCD.scala 32:28]
      node _T_2 = eq(dut.io.z, UInt<5>("h10")) @[GCD.scala 33:21]
      node _T_3 = bits(reset, 0, 0) @[GCD.scala 33:11]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[GCD.scala 33:11]
      when _T_4 : @[GCD.scala 33:11]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[GCD.scala 33:11]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[GCD.scala 33:11]
        when _T_5 : @[GCD.scala 33:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at GCD.scala:33 assert(dut.io.z === z.U)\n") : printf @[GCD.scala 33:11]
      node _T_6 = bits(reset, 0, 0) @[GCD.scala 34:9]
      node _T_7 = eq(_T_6, UInt<1>("h0")) @[GCD.scala 34:9]
      when _T_7 : @[GCD.scala 34:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[GCD.scala 34:9]
