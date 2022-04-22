circuit Fill2DTester :
  module Fill2DTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire u : UInt<5>[2][1] @[Vec.scala 154:31]
    u[0][0] <= UInt<5>("h15") @[Vec.scala 154:31]
    u[0][1] <= UInt<5>("h15") @[Vec.scala 154:31]
    node _T = eq(u[0][0], UInt<5>("h15")) @[Vec.scala 123:41]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 123:35]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 123:35]
    when _T_2 : @[Vec.scala 123:35]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 123:35]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 123:35]
      when _T_3 : @[Vec.scala 123:35]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:123 compareRow.foreach(x => assert(x._1 === x._2.U))\n") : printf @[Vec.scala 123:35]
    node _T_4 = eq(u[0][1], UInt<5>("h15")) @[Vec.scala 123:41]
    node _T_5 = bits(reset, 0, 0) @[Vec.scala 123:35]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[Vec.scala 123:35]
    when _T_6 : @[Vec.scala 123:35]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[Vec.scala 123:35]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 123:35]
      when _T_7 : @[Vec.scala 123:35]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:123 compareRow.foreach(x => assert(x._1 === x._2.U))\n") : printf_1 @[Vec.scala 123:35]
    node _T_8 = bits(reset, 0, 0) @[Vec.scala 158:9]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[Vec.scala 158:9]
    when _T_9 : @[Vec.scala 158:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 158:9]
