circuit AspectTester :
  module AspectTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire values : UInt<4>[3] @[InjectionSpec.scala 53:25]
    values[0] <= UInt<4>("h9") @[InjectionSpec.scala 53:25]
    values[1] <= UInt<4>("h9") @[InjectionSpec.scala 53:25]
    values[2] <= UInt<4>("h9") @[InjectionSpec.scala 53:25]
    reg counter : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[InjectionSpec.scala 54:26]
    node _counter_T = add(counter, UInt<1>("h1")) @[InjectionSpec.scala 55:24]
    node _counter_T_1 = tail(_counter_T, 1) @[InjectionSpec.scala 55:24]
    counter <= _counter_T_1 @[InjectionSpec.scala 55:13]
    node _T = geq(counter, UInt<2>("h3")) @[InjectionSpec.scala 56:18]
    when _T : @[InjectionSpec.scala 56:38]
      node _T_1 = bits(reset, 0, 0) @[InjectionSpec.scala 57:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[InjectionSpec.scala 57:11]
      when _T_2 : @[InjectionSpec.scala 57:11]
        stop(clock, UInt<1>("h1"), 0) : stop @[InjectionSpec.scala 57:11]
    else :
      node _T_3 = bits(reset, 0, 0) @[InjectionSpec.scala 59:24]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[InjectionSpec.scala 59:27]
      when _T_4 : @[InjectionSpec.scala 59:40]
        node _T_5 = bits(counter, 1, 0)
        node _T_6 = eq(counter, values[_T_5]) @[InjectionSpec.scala 60:24]
        node _T_7 = bits(reset, 0, 0) @[InjectionSpec.scala 60:15]
        node _T_8 = eq(_T_7, UInt<1>("h0")) @[InjectionSpec.scala 60:15]
        when _T_8 : @[InjectionSpec.scala 60:15]
          assert(clock, _T_6, UInt<1>("h1"), "") : assert @[InjectionSpec.scala 60:15]
          node _T_9 = eq(_T_6, UInt<1>("h0")) @[InjectionSpec.scala 60:15]
          when _T_9 : @[InjectionSpec.scala 60:15]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at InjectionSpec.scala:60 assert(counter === values(counter))\n") : printf @[InjectionSpec.scala 60:15]
