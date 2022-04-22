circuit NoOtherwiseOverlappedWhenTester :
  module NoOtherwiseOverlappedWhenTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    when UInt<1>("h1") : @[When.scala 56:16]
      node wrap = eq(value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      value <= _value_T_1 @[Counter.scala 78:15]
    wire out : UInt<3> @[When.scala 58:17]
    node _T = leq(value, UInt<1>("h0")) @[When.scala 59:18]
    when _T : @[When.scala 59:26]
      out <= UInt<1>("h1") @[When.scala 60:9]
    else :
      node _T_1 = leq(value, UInt<1>("h1")) @[When.scala 61:24]
      when _T_1 : @[When.scala 61:32]
        out <= UInt<2>("h2") @[When.scala 62:9]
      else :
        node _T_2 = leq(value, UInt<2>("h2")) @[When.scala 63:24]
        when _T_2 : @[When.scala 63:32]
          out <= UInt<2>("h3") @[When.scala 64:9]
        else :
          node _T_3 = leq(value, UInt<2>("h3")) @[When.scala 65:24]
          when _T_3 : @[When.scala 65:32]
            out <= UInt<1>("h0") @[When.scala 66:9]
          else :
            out is invalid @[When.scala 68:9]
    node _T_4 = add(value, UInt<1>("h1")) @[When.scala 71:28]
    node _T_5 = tail(_T_4, 1) @[When.scala 71:28]
    node _T_6 = eq(out, _T_5) @[When.scala 71:14]
    node _T_7 = bits(reset, 0, 0) @[When.scala 71:9]
    node _T_8 = eq(_T_7, UInt<1>("h0")) @[When.scala 71:9]
    when _T_8 : @[When.scala 71:9]
      assert(clock, _T_6, UInt<1>("h1"), "") : assert @[When.scala 71:9]
      node _T_9 = eq(_T_6, UInt<1>("h0")) @[When.scala 71:9]
      when _T_9 : @[When.scala 71:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:71 assert(out === cnt.value + 1.U)\n") : printf @[When.scala 71:9]
    node _T_10 = eq(value, UInt<2>("h3")) @[When.scala 73:18]
    when _T_10 : @[When.scala 73:27]
      node _T_11 = bits(reset, 0, 0) @[When.scala 74:9]
      node _T_12 = eq(_T_11, UInt<1>("h0")) @[When.scala 74:9]
      when _T_12 : @[When.scala 74:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[When.scala 74:9]
