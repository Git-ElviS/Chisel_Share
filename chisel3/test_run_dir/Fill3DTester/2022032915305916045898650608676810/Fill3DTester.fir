circuit Fill3DTester :
  module Fill3DTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire u : UInt<5>[3][1][1] @[Vec.scala 162:34]
    u[0][0][0] <= UInt<5>("h13") @[Vec.scala 162:34]
    u[0][0][1] <= UInt<5>("h13") @[Vec.scala 162:34]
    u[0][0][2] <= UInt<5>("h13") @[Vec.scala 162:34]
    node _T = eq(u[0][0][0], UInt<5>("h13")) @[Vec.scala 123:41]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 123:35]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 123:35]
    when _T_2 : @[Vec.scala 123:35]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 123:35]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 123:35]
      when _T_3 : @[Vec.scala 123:35]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:123 compareRow.foreach(x => assert(x._1 === x._2.U))\n") : printf @[Vec.scala 123:35]
    node _T_4 = eq(u[0][0][1], UInt<5>("h13")) @[Vec.scala 123:41]
    node _T_5 = bits(reset, 0, 0) @[Vec.scala 123:35]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[Vec.scala 123:35]
    when _T_6 : @[Vec.scala 123:35]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[Vec.scala 123:35]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 123:35]
      when _T_7 : @[Vec.scala 123:35]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:123 compareRow.foreach(x => assert(x._1 === x._2.U))\n") : printf_1 @[Vec.scala 123:35]
    node _T_8 = eq(u[0][0][2], UInt<5>("h13")) @[Vec.scala 123:41]
    node _T_9 = bits(reset, 0, 0) @[Vec.scala 123:35]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[Vec.scala 123:35]
    when _T_10 : @[Vec.scala 123:35]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[Vec.scala 123:35]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[Vec.scala 123:35]
      when _T_11 : @[Vec.scala 123:35]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:123 compareRow.foreach(x => assert(x._1 === x._2.U))\n") : printf_2 @[Vec.scala 123:35]
    node _T_12 = bits(reset, 0, 0) @[Vec.scala 166:9]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[Vec.scala 166:9]
    when _T_13 : @[Vec.scala 166:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 166:9]
