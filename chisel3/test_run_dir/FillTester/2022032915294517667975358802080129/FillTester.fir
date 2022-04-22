circuit FillTester :
  module FillTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire x : UInt<2>[4] @[Vec.scala 111:18]
    x[0] <= UInt<2>("h2") @[Vec.scala 111:18]
    x[1] <= UInt<2>("h2") @[Vec.scala 111:18]
    x[2] <= UInt<2>("h2") @[Vec.scala 111:18]
    x[3] <= UInt<2>("h2") @[Vec.scala 111:18]
    wire u : UInt<2>[4] @[Vec.scala 112:26]
    u[0] <= UInt<2>("h2") @[Vec.scala 112:26]
    u[1] <= UInt<2>("h2") @[Vec.scala 112:26]
    u[2] <= UInt<2>("h2") @[Vec.scala 112:26]
    u[3] <= UInt<2>("h2") @[Vec.scala 112:26]
    node lo = cat(x[1], x[0]) @[Vec.scala 114:18]
    node hi = cat(x[3], x[2]) @[Vec.scala 114:18]
    node _T = cat(hi, lo) @[Vec.scala 114:18]
    node lo_1 = cat(u[1], u[0]) @[Vec.scala 114:33]
    node hi_1 = cat(u[3], u[2]) @[Vec.scala 114:33]
    node _T_1 = cat(hi_1, lo_1) @[Vec.scala 114:33]
    node _T_2 = eq(_T, _T_1) @[Vec.scala 114:21]
    node _T_3 = bits(reset, 0, 0) @[Vec.scala 114:9]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[Vec.scala 114:9]
    when _T_4 : @[Vec.scala 114:9]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[Vec.scala 114:9]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[Vec.scala 114:9]
      when _T_5 : @[Vec.scala 114:9]
        printf(clock, UInt<1>("h1"), "Assertion failed: Expected Vec to be filled like FillTester.x: Wire[UInt<2>[4]], instead VecInit.fill created FillTester.u: Wire[UInt<2>[4]]\n    at Vec.scala:114 assert(x.asUInt() === u.asUInt(), s\"Expected Vec to be filled like $x, instead VecInit.fill created $u\")\n") : printf @[Vec.scala 114:9]
    node _T_6 = bits(reset, 0, 0) @[Vec.scala 115:7]
    node _T_7 = eq(_T_6, UInt<1>("h0")) @[Vec.scala 115:7]
    when _T_7 : @[Vec.scala 115:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 115:7]
