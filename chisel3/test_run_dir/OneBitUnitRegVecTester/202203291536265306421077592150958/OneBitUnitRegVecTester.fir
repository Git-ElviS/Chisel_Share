circuit OneBitUnitRegVecTester :
  module OneBitUnitRegVec :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<1>}

    reg oneBitUnitRegVec : UInt<1>[1], clock with :
      reset => (UInt<1>("h0"), oneBitUnitRegVec) @[Vec.scala 42:29]
    oneBitUnitRegVec[0] <= UInt<1>("h1") @[Vec.scala 43:23]
    io.out <= oneBitUnitRegVec[0] @[Vec.scala 44:10]

  module OneBitUnitRegVecTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of OneBitUnitRegVec @[Vec.scala 268:19]
    dut.clock <= clock
    dut.reset <= reset
    node _T = eq(dut.io.out, UInt<1>("h1")) @[Vec.scala 269:21]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 269:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 269:9]
    when _T_2 : @[Vec.scala 269:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 269:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 269:9]
      when _T_3 : @[Vec.scala 269:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:269 assert(dut.io.out === 1.U)\n") : printf @[Vec.scala 269:9]
    node _T_4 = bits(reset, 0, 0) @[Vec.scala 270:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 270:7]
    when _T_5 : @[Vec.scala 270:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 270:7]
