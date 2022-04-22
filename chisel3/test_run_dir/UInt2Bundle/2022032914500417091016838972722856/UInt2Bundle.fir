circuit UInt2Bundle :
  module UInt2Bundle :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<1>("h1")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[CookbookSpec.scala 19:14]
      node _T = bits(reset, 0, 0) @[CookbookSpec.scala 19:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[CookbookSpec.scala 19:20]
      when _T_1 : @[CookbookSpec.scala 19:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[CookbookSpec.scala 19:20]
    wire bundle : { foo : UInt<4>, bar : UInt<4>} @[UInt2Bundle.scala 18:29]
    bundle.bar <= UInt<4>("h4") @[UInt2Bundle.scala 18:29]
    bundle.foo <= UInt<4>("hb") @[UInt2Bundle.scala 18:29]
    node _T_2 = bits(reset, 0, 0) @[UInt2Bundle.scala 19:9]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[UInt2Bundle.scala 19:9]
    when _T_3 : @[UInt2Bundle.scala 19:9]
      printf(clock, UInt<1>("h1"), "MyBundle(foo -> %d, bar -> %d)", bundle.foo, bundle.bar) : printf @[UInt2Bundle.scala 19:9]
    node _T_4 = eq(bundle.foo, UInt<4>("hb")) @[UInt2Bundle.scala 22:21]
    node _T_5 = bits(reset, 0, 0) @[UInt2Bundle.scala 22:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[UInt2Bundle.scala 22:9]
    when _T_6 : @[UInt2Bundle.scala 22:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert @[UInt2Bundle.scala 22:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[UInt2Bundle.scala 22:9]
      when _T_7 : @[UInt2Bundle.scala 22:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at UInt2Bundle.scala:22 assert(bundle.foo === 0xb.U)\n") : printf_1 @[UInt2Bundle.scala 22:9]
    node _T_8 = eq(bundle.bar, UInt<3>("h4")) @[UInt2Bundle.scala 23:21]
    node _T_9 = bits(reset, 0, 0) @[UInt2Bundle.scala 23:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[UInt2Bundle.scala 23:9]
    when _T_10 : @[UInt2Bundle.scala 23:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_1 @[UInt2Bundle.scala 23:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[UInt2Bundle.scala 23:9]
      when _T_11 : @[UInt2Bundle.scala 23:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at UInt2Bundle.scala:23 assert(bundle.bar === 0x4.U)\n") : printf_2 @[UInt2Bundle.scala 23:9]
