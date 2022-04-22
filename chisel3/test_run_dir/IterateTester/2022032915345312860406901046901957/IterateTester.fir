circuit IterateTester :
  module IterateTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire controlVec : UInt<3>[1] @[Vec.scala 234:27]
    controlVec[0] <= UInt<3>("h6") @[Vec.scala 234:27]
    wire testVec : UInt<3>[1] @[Vec.scala 235:46]
    testVec[0] <= UInt<3>("h6") @[Vec.scala 235:46]
    node _T = eq(controlVec[0], testVec[0]) @[Vec.scala 237:25]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 236:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 236:9]
    when _T_2 : @[Vec.scala 236:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 236:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 236:9]
      when _T_3 : @[Vec.scala 236:9]
        printf(clock, UInt<1>("h1"), "Assertion failed: Expected Vec to be filled like IterateTester.controlVec: Wire[UInt<3>[1]], instead creaeted IterateTester.testVec: Wire[UInt<3>[1]]\n\n    at Vec.scala:236 assert(\n") : printf @[Vec.scala 236:9]
    node _T_4 = bits(reset, 0, 0) @[Vec.scala 240:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 240:7]
    when _T_5 : @[Vec.scala 240:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 240:7]
