circuit SBPTester :
  module SBP :
    input clock : Clock
    input reset : Reset
    output io : { flip in : Fixed<6><<2>>, out : Fixed<4><<0>>}

    node _io_out_T = setp(io.in, 0) @[FixedPointSpec.scala 120:33]
    io.out <= _io_out_T @[FixedPointSpec.scala 120:10]

  module SBPTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of SBP @[FixedPointSpec.scala 124:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in <= asFixedPoint(UInt<5>("hf"), 2) @[FixedPointSpec.scala 125:13]
    node _T = eq(dut.io.out, asFixedPoint(UInt<3>("h3"), 0)) @[FixedPointSpec.scala 127:21]
    node _T_1 = bits(reset, 0, 0) @[FixedPointSpec.scala 127:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[FixedPointSpec.scala 127:9]
    when _T_2 : @[FixedPointSpec.scala 127:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[FixedPointSpec.scala 127:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[FixedPointSpec.scala 127:9]
      when _T_3 : @[FixedPointSpec.scala 127:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:127 assert(dut.io.out === 3.0.F(0.BP))\n") : printf @[FixedPointSpec.scala 127:9]
    wire test : Fixed<10><<5>> @[FixedPointSpec.scala 129:18]
    test <= asFixedPoint(UInt<1>("h0"), 5) @[FixedPointSpec.scala 131:8]
    node q = setp(test, 18) @[FixedPointSpec.scala 132:30]
    node _T_4 = eq(UInt<5>("h17"), UInt<5>("h17")) @[FixedPointSpec.scala 133:23]
    node _T_5 = bits(reset, 0, 0) @[FixedPointSpec.scala 133:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[FixedPointSpec.scala 133:9]
    when _T_6 : @[FixedPointSpec.scala 133:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[FixedPointSpec.scala 133:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[FixedPointSpec.scala 133:9]
      when _T_7 : @[FixedPointSpec.scala 133:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:133 assert(q.getWidth.U === 23.U)\n") : printf_1 @[FixedPointSpec.scala 133:9]
    node _T_8 = bits(reset, 0, 0) @[FixedPointSpec.scala 135:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[FixedPointSpec.scala 135:7]
    when _T_9 : @[FixedPointSpec.scala 135:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[FixedPointSpec.scala 135:7]
