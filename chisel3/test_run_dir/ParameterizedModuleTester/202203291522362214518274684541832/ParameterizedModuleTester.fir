circuit ParameterizedModuleTester :
  module ParameterizedModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<1>, out : UInt<1>}

    node _io_out_T = eq(io.in, UInt<1>("h0")) @[ParameterizedModule.scala 14:15]
    io.out <= _io_out_T @[ParameterizedModule.scala 14:12]

  module ParameterizedModule_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<1>, out : UInt<1>}

    io.out <= io.in @[ParameterizedModule.scala 16:12]

  module ParameterizedModuleTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst invert of ParameterizedModule @[ParameterizedModule.scala 25:22]
    invert.clock <= clock
    invert.reset <= reset
    inst noninvert of ParameterizedModule_1 @[ParameterizedModule.scala 26:25]
    noninvert.clock <= clock
    noninvert.reset <= reset
    invert.io.in <= UInt<1>("h1") @[ParameterizedModule.scala 28:16]
    noninvert.io.in <= UInt<1>("h1") @[ParameterizedModule.scala 29:19]
    node _T = eq(invert.io.out, UInt<1>("h0")) @[ParameterizedModule.scala 30:24]
    node _T_1 = bits(reset, 0, 0) @[ParameterizedModule.scala 30:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[ParameterizedModule.scala 30:9]
    when _T_2 : @[ParameterizedModule.scala 30:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[ParameterizedModule.scala 30:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[ParameterizedModule.scala 30:9]
      when _T_3 : @[ParameterizedModule.scala 30:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ParameterizedModule.scala:30 assert(invert.io.out === false.B)\n") : printf @[ParameterizedModule.scala 30:9]
    node _T_4 = eq(noninvert.io.out, UInt<1>("h1")) @[ParameterizedModule.scala 31:27]
    node _T_5 = bits(reset, 0, 0) @[ParameterizedModule.scala 31:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[ParameterizedModule.scala 31:9]
    when _T_6 : @[ParameterizedModule.scala 31:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[ParameterizedModule.scala 31:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[ParameterizedModule.scala 31:9]
      when _T_7 : @[ParameterizedModule.scala 31:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ParameterizedModule.scala:31 assert(noninvert.io.out === true.B)\n") : printf_1 @[ParameterizedModule.scala 31:9]
    node _T_8 = bits(reset, 0, 0) @[ParameterizedModule.scala 33:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[ParameterizedModule.scala 33:7]
    when _T_9 : @[ParameterizedModule.scala 33:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[ParameterizedModule.scala 33:7]
