circuit FillTester :
  module FillTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire x : UInt<6>[1] @[Vec.scala 111:18]
    x[0] <= UInt<6>("h20") @[Vec.scala 111:18]
    wire u : UInt<6>[1] @[Vec.scala 112:26]
    u[0] <= UInt<6>("h20") @[Vec.scala 112:26]
    node _T = eq(x[0], u[0]) @[Vec.scala 114:21]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 114:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 114:9]
    when _T_2 : @[Vec.scala 114:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 114:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 114:9]
      when _T_3 : @[Vec.scala 114:9]
        printf(clock, UInt<1>("h1"), "Assertion failed: Expected Vec to be filled like FillTester.x: Wire[UInt<6>[1]], instead VecInit.fill created FillTester.u: Wire[UInt<6>[1]]\n    at Vec.scala:114 assert(x.asUInt() === u.asUInt(), s\"Expected Vec to be filled like $x, instead VecInit.fill created $u\")\n") : printf @[Vec.scala 114:9]
    node _T_4 = bits(reset, 0, 0) @[Vec.scala 115:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 115:7]
    when _T_5 : @[Vec.scala 115:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 115:7]
