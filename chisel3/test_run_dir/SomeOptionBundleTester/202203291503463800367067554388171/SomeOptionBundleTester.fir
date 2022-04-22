circuit SomeOptionBundleTester :
  module OptionBundleModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<1>, out : UInt<1>}

    io.out <= io.in @[OptionBundle.scala 21:12]

  module SomeOptionBundleTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst mod of OptionBundleModule @[OptionBundle.scala 28:19]
    mod.clock <= clock
    mod.reset <= reset
    mod.io.in <= UInt<1>("h1") @[OptionBundle.scala 29:17]
    node _T = eq(mod.io.out, UInt<1>("h1")) @[OptionBundle.scala 30:21]
    node _T_1 = bits(reset, 0, 0) @[OptionBundle.scala 30:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[OptionBundle.scala 30:9]
    when _T_2 : @[OptionBundle.scala 30:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[OptionBundle.scala 30:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[OptionBundle.scala 30:9]
      when _T_3 : @[OptionBundle.scala 30:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at OptionBundle.scala:30 assert(mod.io.out === expected.asBool)\n") : printf @[OptionBundle.scala 30:9]
    node _T_4 = bits(reset, 0, 0) @[OptionBundle.scala 31:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[OptionBundle.scala 31:7]
    when _T_5 : @[OptionBundle.scala 31:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[OptionBundle.scala 31:7]
