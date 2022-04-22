circuit SubmoduleWhenTester :
  module PassthroughModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughMultiIOModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughRawModule :
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module SubmoduleWhenTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<2>("h2")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[When.scala 80:14]
      node _T = bits(reset, 0, 0) @[When.scala 80:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[When.scala 80:20]
      when _T_1 : @[When.scala 80:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[When.scala 80:20]
    inst children_0 of PassthroughModule @[When.scala 82:15]
    children_0.clock <= clock
    children_0.reset <= reset
    inst children_1 of PassthroughMultiIOModule @[When.scala 82:46]
    children_1.clock <= clock
    children_1.reset <= reset
    inst children_2 of PassthroughRawModule @[When.scala 82:84]
    node _T_2 = eq(cycle, UInt<1>("h1")) @[When.scala 84:16]
    when _T_2 : @[When.scala 84:25]
      children_0.io.in <= UInt<32>("hdeadbeef") @[When.scala 85:19]
      node _T_3 = eq(children_0.io.out, UInt<32>("hdeadbeef")) @[When.scala 86:27]
      node _T_4 = bits(reset, 0, 0) @[When.scala 86:13]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[When.scala 86:13]
      when _T_5 : @[When.scala 86:13]
        assert(clock, _T_3, UInt<1>("h1"), "") : assert @[When.scala 86:13]
        node _T_6 = eq(_T_3, UInt<1>("h0")) @[When.scala 86:13]
        when _T_6 : @[When.scala 86:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n") : printf @[When.scala 86:13]
    else :
      children_0.io.in <= UInt<28>("hbadcad0") @[When.scala 88:19]
      node _T_7 = eq(children_0.io.out, UInt<28>("hbadcad0")) @[When.scala 89:27]
      node _T_8 = bits(reset, 0, 0) @[When.scala 89:13]
      node _T_9 = eq(_T_8, UInt<1>("h0")) @[When.scala 89:13]
      when _T_9 : @[When.scala 89:13]
        assert(clock, _T_7, UInt<1>("h1"), "") : assert_1 @[When.scala 89:13]
        node _T_10 = eq(_T_7, UInt<1>("h0")) @[When.scala 89:13]
        when _T_10 : @[When.scala 89:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n") : printf_1 @[When.scala 89:13]
    node _T_11 = eq(cycle, UInt<1>("h1")) @[When.scala 84:16]
    when _T_11 : @[When.scala 84:25]
      children_1.io.in <= UInt<32>("hdeadbeef") @[When.scala 85:19]
      node _T_12 = eq(children_1.io.out, UInt<32>("hdeadbeef")) @[When.scala 86:27]
      node _T_13 = bits(reset, 0, 0) @[When.scala 86:13]
      node _T_14 = eq(_T_13, UInt<1>("h0")) @[When.scala 86:13]
      when _T_14 : @[When.scala 86:13]
        assert(clock, _T_12, UInt<1>("h1"), "") : assert_2 @[When.scala 86:13]
        node _T_15 = eq(_T_12, UInt<1>("h0")) @[When.scala 86:13]
        when _T_15 : @[When.scala 86:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n") : printf_2 @[When.scala 86:13]
    else :
      children_1.io.in <= UInt<28>("hbadcad0") @[When.scala 88:19]
      node _T_16 = eq(children_1.io.out, UInt<28>("hbadcad0")) @[When.scala 89:27]
      node _T_17 = bits(reset, 0, 0) @[When.scala 89:13]
      node _T_18 = eq(_T_17, UInt<1>("h0")) @[When.scala 89:13]
      when _T_18 : @[When.scala 89:13]
        assert(clock, _T_16, UInt<1>("h1"), "") : assert_3 @[When.scala 89:13]
        node _T_19 = eq(_T_16, UInt<1>("h0")) @[When.scala 89:13]
        when _T_19 : @[When.scala 89:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n") : printf_3 @[When.scala 89:13]
    node _T_20 = eq(cycle, UInt<1>("h1")) @[When.scala 84:16]
    when _T_20 : @[When.scala 84:25]
      children_2.io.in <= UInt<32>("hdeadbeef") @[When.scala 85:19]
      node _T_21 = eq(children_2.io.out, UInt<32>("hdeadbeef")) @[When.scala 86:27]
      node _T_22 = bits(reset, 0, 0) @[When.scala 86:13]
      node _T_23 = eq(_T_22, UInt<1>("h0")) @[When.scala 86:13]
      when _T_23 : @[When.scala 86:13]
        assert(clock, _T_21, UInt<1>("h1"), "") : assert_4 @[When.scala 86:13]
        node _T_24 = eq(_T_21, UInt<1>("h0")) @[When.scala 86:13]
        when _T_24 : @[When.scala 86:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n") : printf_4 @[When.scala 86:13]
    else :
      children_2.io.in <= UInt<28>("hbadcad0") @[When.scala 88:19]
      node _T_25 = eq(children_2.io.out, UInt<28>("hbadcad0")) @[When.scala 89:27]
      node _T_26 = bits(reset, 0, 0) @[When.scala 89:13]
      node _T_27 = eq(_T_26, UInt<1>("h0")) @[When.scala 89:13]
      when _T_27 : @[When.scala 89:13]
        assert(clock, _T_25, UInt<1>("h1"), "") : assert_5 @[When.scala 89:13]
        node _T_28 = eq(_T_25, UInt<1>("h0")) @[When.scala 89:13]
        when _T_28 : @[When.scala 89:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n") : printf_5 @[When.scala 89:13]
