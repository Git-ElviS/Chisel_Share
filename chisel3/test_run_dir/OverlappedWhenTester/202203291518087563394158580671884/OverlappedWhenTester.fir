circuit OverlappedWhenTester :
  module OverlappedWhenTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    when UInt<1>("h1") : @[When.scala 34:16]
      node wrap = eq(value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      value <= _value_T_1 @[Counter.scala 78:15]
    wire out : UInt<3> @[When.scala 36:17]
    node _T = leq(value, UInt<1>("h0")) @[When.scala 37:18]
    when _T : @[When.scala 37:26]
      out <= UInt<1>("h1") @[When.scala 38:9]
    else :
      node _T_1 = leq(value, UInt<1>("h1")) @[When.scala 39:24]
      when _T_1 : @[When.scala 39:32]
        out <= UInt<2>("h2") @[When.scala 40:9]
      else :
        node _T_2 = leq(value, UInt<2>("h2")) @[When.scala 41:24]
        when _T_2 : @[When.scala 41:32]
          out <= UInt<2>("h3") @[When.scala 42:9]
        else :
          out <= UInt<1>("h0") @[When.scala 44:9]
    node _T_3 = add(value, UInt<1>("h1")) @[When.scala 47:28]
    node _T_4 = tail(_T_3, 1) @[When.scala 47:28]
    node _T_5 = eq(out, _T_4) @[When.scala 47:14]
    node _T_6 = bits(reset, 0, 0) @[When.scala 47:9]
    node _T_7 = eq(_T_6, UInt<1>("h0")) @[When.scala 47:9]
    when _T_7 : @[When.scala 47:9]
      assert(clock, _T_5, UInt<1>("h1"), "") : assert @[When.scala 47:9]
      node _T_8 = eq(_T_5, UInt<1>("h0")) @[When.scala 47:9]
      when _T_8 : @[When.scala 47:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:47 assert(out === cnt.value + 1.U)\n") : printf @[When.scala 47:9]
    node _T_9 = eq(value, UInt<2>("h3")) @[When.scala 49:18]
    when _T_9 : @[When.scala 49:27]
      node _T_10 = bits(reset, 0, 0) @[When.scala 50:9]
      node _T_11 = eq(_T_10, UInt<1>("h0")) @[When.scala 50:9]
      when _T_11 : @[When.scala 50:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[When.scala 50:9]
