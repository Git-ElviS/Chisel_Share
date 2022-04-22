circuit WhenCondTester :
  module WhenCondTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire pred : UInt<1>[4] @[When.scala 95:18]
    reg cycle : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<4>("hf")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = bits(cycle, 0, 0) @[When.scala 98:17]
    node _T_1 = bits(cycle, 1, 1) @[When.scala 98:17]
    node _T_2 = bits(cycle, 2, 2) @[When.scala 98:17]
    node _T_3 = bits(cycle, 3, 3) @[When.scala 98:17]
    pred[0] <= _T @[When.scala 98:8]
    pred[1] <= _T_1 @[When.scala 98:8]
    pred[2] <= _T_2 @[When.scala 98:8]
    pred[3] <= _T_3 @[When.scala 98:8]
    wire w1 : UInt<1>
    w1 is invalid
    wire w2 : UInt<1>
    w2 is invalid
    wire w3 : UInt<1>
    w3 is invalid
    wire w4 : UInt<1>
    w4 is invalid
    wire w5 : UInt<1>
    w5 is invalid
    wire w6 : UInt<1>
    w6 is invalid
    wire w7 : UInt<1>
    w7 is invalid
    when pred[0] : @[When.scala 103:11]
      node _w1_T = and(UInt<1>("h1"), pred[0])
      node _w1_T_1 = and(UInt<1>("h1"), _w1_T)
      w1 <= _w1_T_1 @[When.scala 104:8]
      when pred[1] : @[When.scala 105:13]
        node _w2_T = and(UInt<1>("h1"), pred[0])
        node _w2_T_1 = and(UInt<1>("h1"), _w2_T)
        node _w2_T_2 = and(UInt<1>("h1"), pred[1])
        node _w2_T_3 = and(_w2_T_1, _w2_T_2)
        w2 <= _w2_T_3 @[When.scala 106:10]
      else :
        when pred[2] : @[When.scala 107:19]
          node _w3_T = and(UInt<1>("h1"), pred[0])
          node _w3_T_1 = and(UInt<1>("h1"), _w3_T)
          node _w3_T_2 = eq(pred[1], UInt<1>("h0"))
          node _w3_T_3 = and(UInt<1>("h1"), _w3_T_2)
          node _w3_T_4 = and(_w3_T_3, pred[2])
          node _w3_T_5 = and(_w3_T_1, _w3_T_4)
          w3 <= _w3_T_5 @[When.scala 108:10]
        else :
          when pred[3] : @[When.scala 109:19]
            node _w4_T = and(UInt<1>("h1"), pred[0])
            node _w4_T_1 = and(UInt<1>("h1"), _w4_T)
            node _w4_T_2 = eq(pred[1], UInt<1>("h0"))
            node _w4_T_3 = and(UInt<1>("h1"), _w4_T_2)
            node _w4_T_4 = eq(pred[2], UInt<1>("h0"))
            node _w4_T_5 = and(_w4_T_3, _w4_T_4)
            node _w4_T_6 = and(_w4_T_5, pred[3])
            node _w4_T_7 = and(_w4_T_1, _w4_T_6)
            w4 <= _w4_T_7 @[When.scala 110:10]
          else :
            node _w5_T = and(UInt<1>("h1"), pred[0])
            node _w5_T_1 = and(UInt<1>("h1"), _w5_T)
            node _w5_T_2 = eq(pred[1], UInt<1>("h0"))
            node _w5_T_3 = and(UInt<1>("h1"), _w5_T_2)
            node _w5_T_4 = eq(pred[2], UInt<1>("h0"))
            node _w5_T_5 = and(_w5_T_3, _w5_T_4)
            node _w5_T_6 = eq(pred[3], UInt<1>("h0"))
            node _w5_T_7 = and(_w5_T_5, _w5_T_6)
            node _w5_T_8 = and(_w5_T_1, _w5_T_7)
            w5 <= _w5_T_8 @[When.scala 112:10]
    else :
      node _w6_T = eq(pred[0], UInt<1>("h0"))
      node _w6_T_1 = and(UInt<1>("h1"), _w6_T)
      node _w6_T_2 = and(UInt<1>("h1"), _w6_T_1)
      w6 <= _w6_T_2 @[When.scala 115:8]
    w7 <= UInt<1>("h1") @[When.scala 117:6]
    node _T_4 = eq(w1, pred[0]) @[When.scala 119:13]
    node _T_5 = bits(reset, 0, 0) @[When.scala 119:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[When.scala 119:9]
    when _T_6 : @[When.scala 119:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert @[When.scala 119:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[When.scala 119:9]
      when _T_7 : @[When.scala 119:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:119 assert(w1 === a)\n") : printf @[When.scala 119:9]
    node _T_8 = and(pred[0], pred[1]) @[When.scala 120:20]
    node _T_9 = eq(w2, _T_8) @[When.scala 120:13]
    node _T_10 = bits(reset, 0, 0) @[When.scala 120:9]
    node _T_11 = eq(_T_10, UInt<1>("h0")) @[When.scala 120:9]
    when _T_11 : @[When.scala 120:9]
      assert(clock, _T_9, UInt<1>("h1"), "") : assert_1 @[When.scala 120:9]
      node _T_12 = eq(_T_9, UInt<1>("h0")) @[When.scala 120:9]
      when _T_12 : @[When.scala 120:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:120 assert(w2 === (a && b))\n") : printf_1 @[When.scala 120:9]
    node _T_13 = eq(pred[1], UInt<1>("h0")) @[When.scala 121:23]
    node _T_14 = and(pred[0], _T_13) @[When.scala 121:20]
    node _T_15 = and(_T_14, pred[2]) @[When.scala 121:26]
    node _T_16 = eq(w3, _T_15) @[When.scala 121:13]
    node _T_17 = bits(reset, 0, 0) @[When.scala 121:9]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[When.scala 121:9]
    when _T_18 : @[When.scala 121:9]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_2 @[When.scala 121:9]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[When.scala 121:9]
      when _T_19 : @[When.scala 121:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:121 assert(w3 === (a && !b && c))\n") : printf_2 @[When.scala 121:9]
    node _T_20 = eq(pred[1], UInt<1>("h0")) @[When.scala 122:23]
    node _T_21 = and(pred[0], _T_20) @[When.scala 122:20]
    node _T_22 = eq(pred[2], UInt<1>("h0")) @[When.scala 122:29]
    node _T_23 = and(_T_21, _T_22) @[When.scala 122:26]
    node _T_24 = and(_T_23, pred[3]) @[When.scala 122:32]
    node _T_25 = eq(w4, _T_24) @[When.scala 122:13]
    node _T_26 = bits(reset, 0, 0) @[When.scala 122:9]
    node _T_27 = eq(_T_26, UInt<1>("h0")) @[When.scala 122:9]
    when _T_27 : @[When.scala 122:9]
      assert(clock, _T_25, UInt<1>("h1"), "") : assert_3 @[When.scala 122:9]
      node _T_28 = eq(_T_25, UInt<1>("h0")) @[When.scala 122:9]
      when _T_28 : @[When.scala 122:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:122 assert(w4 === (a && !b && !c && d))\n") : printf_3 @[When.scala 122:9]
    node _T_29 = eq(pred[1], UInt<1>("h0")) @[When.scala 123:23]
    node _T_30 = and(pred[0], _T_29) @[When.scala 123:20]
    node _T_31 = eq(pred[2], UInt<1>("h0")) @[When.scala 123:29]
    node _T_32 = and(_T_30, _T_31) @[When.scala 123:26]
    node _T_33 = eq(pred[3], UInt<1>("h0")) @[When.scala 123:35]
    node _T_34 = and(_T_32, _T_33) @[When.scala 123:32]
    node _T_35 = eq(w5, _T_34) @[When.scala 123:13]
    node _T_36 = bits(reset, 0, 0) @[When.scala 123:9]
    node _T_37 = eq(_T_36, UInt<1>("h0")) @[When.scala 123:9]
    when _T_37 : @[When.scala 123:9]
      assert(clock, _T_35, UInt<1>("h1"), "") : assert_4 @[When.scala 123:9]
      node _T_38 = eq(_T_35, UInt<1>("h0")) @[When.scala 123:9]
      when _T_38 : @[When.scala 123:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:123 assert(w5 === (a && !b && !c && !d))\n") : printf_4 @[When.scala 123:9]
    node _T_39 = eq(pred[0], UInt<1>("h0")) @[When.scala 124:17]
    node _T_40 = eq(w6, _T_39) @[When.scala 124:13]
    node _T_41 = bits(reset, 0, 0) @[When.scala 124:9]
    node _T_42 = eq(_T_41, UInt<1>("h0")) @[When.scala 124:9]
    when _T_42 : @[When.scala 124:9]
      assert(clock, _T_40, UInt<1>("h1"), "") : assert_5 @[When.scala 124:9]
      node _T_43 = eq(_T_40, UInt<1>("h0")) @[When.scala 124:9]
      when _T_43 : @[When.scala 124:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:124 assert(w6 === !a)\n") : printf_5 @[When.scala 124:9]
    node _T_44 = bits(reset, 0, 0) @[When.scala 125:9]
    node _T_45 = eq(_T_44, UInt<1>("h0")) @[When.scala 125:9]
    when _T_45 : @[When.scala 125:9]
      assert(clock, w7, UInt<1>("h1"), "") : assert_6 @[When.scala 125:9]
      node _T_46 = eq(w7, UInt<1>("h0")) @[When.scala 125:9]
      when _T_46 : @[When.scala 125:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:125 assert(w7)\n") : printf_6 @[When.scala 125:9]
    when done : @[When.scala 127:14]
      node _T_47 = bits(reset, 0, 0) @[When.scala 127:20]
      node _T_48 = eq(_T_47, UInt<1>("h0")) @[When.scala 127:20]
      when _T_48 : @[When.scala 127:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[When.scala 127:20]
