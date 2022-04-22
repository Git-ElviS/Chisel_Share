circuit DetectTwoOnesTester :
  module DetectTwoOnes :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<1>, out : UInt<1>}

    reg state : UInt<2>, clock with :
      reset => (reset, UInt<1>("h0")) @[FSM.scala 25:22]
    node _io_out_T = eq(state, UInt<2>("h2")) @[FSM.scala 27:20]
    io.out <= _io_out_T @[FSM.scala 27:10]
    node _T = asUInt(UInt<1>("h0")) @[FSM.scala 29:17]
    node _T_1 = asUInt(state) @[FSM.scala 29:17]
    node _T_2 = eq(_T, _T_1) @[FSM.scala 29:17]
    when _T_2 : @[FSM.scala 29:17]
      when io.in : @[FSM.scala 31:19]
        state <= UInt<1>("h1") @[FSM.scala 32:15]
    else :
      node _T_3 = asUInt(UInt<1>("h1")) @[FSM.scala 29:17]
      node _T_4 = asUInt(state) @[FSM.scala 29:17]
      node _T_5 = eq(_T_3, _T_4) @[FSM.scala 29:17]
      when _T_5 : @[FSM.scala 29:17]
        when io.in : @[FSM.scala 36:19]
          state <= UInt<2>("h2") @[FSM.scala 37:15]
        else :
          state <= UInt<1>("h0") @[FSM.scala 39:15]
      else :
        node _T_6 = asUInt(UInt<2>("h2")) @[FSM.scala 29:17]
        node _T_7 = asUInt(state) @[FSM.scala 29:17]
        node _T_8 = eq(_T_6, _T_7) @[FSM.scala 29:17]
        when _T_8 : @[FSM.scala 29:17]
          node _T_9 = eq(io.in, UInt<1>("h0")) @[FSM.scala 43:12]
          when _T_9 : @[FSM.scala 43:20]
            state <= UInt<1>("h0") @[FSM.scala 44:15]

  module DetectTwoOnesTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<4>("ha")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[CookbookSpec.scala 19:14]
      node _T = bits(reset, 0, 0) @[CookbookSpec.scala 19:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[CookbookSpec.scala 19:20]
      when _T_1 : @[CookbookSpec.scala 19:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[CookbookSpec.scala 19:20]
    inst dut of DetectTwoOnes @[FSM.scala 52:19]
    dut.clock <= clock
    dut.reset <= reset
    wire inputs : UInt<1>[10] @[FSM.scala 55:34]
    inputs[0] <= UInt<1>("h0") @[FSM.scala 55:34]
    inputs[1] <= UInt<1>("h1") @[FSM.scala 55:34]
    inputs[2] <= UInt<1>("h0") @[FSM.scala 55:34]
    inputs[3] <= UInt<1>("h1") @[FSM.scala 55:34]
    inputs[4] <= UInt<1>("h1") @[FSM.scala 55:34]
    inputs[5] <= UInt<1>("h1") @[FSM.scala 55:34]
    inputs[6] <= UInt<1>("h0") @[FSM.scala 55:34]
    inputs[7] <= UInt<1>("h1") @[FSM.scala 55:34]
    inputs[8] <= UInt<1>("h1") @[FSM.scala 55:34]
    inputs[9] <= UInt<1>("h0") @[FSM.scala 55:34]
    wire expected : UInt<1>[10] @[FSM.scala 57:12]
    expected[0] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[1] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[2] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[3] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[4] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[5] <= UInt<1>("h1") @[FSM.scala 57:12]
    expected[6] <= UInt<1>("h1") @[FSM.scala 57:12]
    expected[7] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[8] <= UInt<1>("h0") @[FSM.scala 57:12]
    expected[9] <= UInt<1>("h1") @[FSM.scala 57:12]
    dut.io.in <= inputs[cycle] @[FSM.scala 59:13]
    node _T_2 = eq(dut.io.out, expected[cycle]) @[FSM.scala 60:21]
    node _T_3 = bits(reset, 0, 0) @[FSM.scala 60:9]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[FSM.scala 60:9]
    when _T_4 : @[FSM.scala 60:9]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[FSM.scala 60:9]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[FSM.scala 60:9]
      when _T_5 : @[FSM.scala 60:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FSM.scala:60 assert(dut.io.out === expected(cycle))\n") : printf @[FSM.scala 60:9]
