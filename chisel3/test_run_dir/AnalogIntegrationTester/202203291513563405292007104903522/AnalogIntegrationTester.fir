circuit AnalogIntegrationTester :
  extmodule AnalogBlackBox :
    output bus : Analog<32>
    output port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]
    defname = AnalogBlackBox
    parameter index = 0

  module AnalogBlackBoxModule :
    input clock : Clock
    input reset : Reset
    output io : { bus : Analog<32>, port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]}

    inst impl of AnalogBlackBox @[AnalogIntegrationSpec.scala 45:20]
    impl.port is invalid
    impl.bus is invalid
    io.port[0].out <= impl.port[0].out @[AnalogIntegrationSpec.scala 46:6]
    impl.port[0].in <= io.port[0].in @[AnalogIntegrationSpec.scala 46:6]
    attach (io.bus, impl.bus) @[AnalogIntegrationSpec.scala 46:6]

  module AnalogBlackBoxWrapper :
    input clock : Clock
    input reset : Reset
    output io : { bus : Analog<32>, port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]}

    inst bbs_0 of AnalogBlackBoxModule @[AnalogIntegrationSpec.scala 53:33]
    bbs_0.clock <= clock
    bbs_0.reset <= reset
    attach (io.bus, bbs_0.io.bus) @[AnalogIntegrationSpec.scala 54:10]
    io.port[0].out <= bbs_0.io.port[0].out @[AnalogIntegrationSpec.scala 55:11]
    bbs_0.io.port[0].in <= io.port[0].in @[AnalogIntegrationSpec.scala 55:11]
    attach (bbs_0.io.bus) @[AnalogIntegrationSpec.scala 56:9]

  extmodule AnalogBlackBox_1 :
    output bus : Analog<32>
    output port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]
    defname = AnalogBlackBox
    parameter index = 1

  module AnalogBlackBoxModule_1 :
    input clock : Clock
    input reset : Reset
    output io : { bus : Analog<32>, port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]}

    inst impl of AnalogBlackBox_1 @[AnalogIntegrationSpec.scala 45:20]
    impl.port is invalid
    impl.bus is invalid
    io.port[0].out <= impl.port[0].out @[AnalogIntegrationSpec.scala 46:6]
    impl.port[0].in <= io.port[0].in @[AnalogIntegrationSpec.scala 46:6]
    attach (io.bus, impl.bus) @[AnalogIntegrationSpec.scala 46:6]

  extmodule AnalogBlackBox_2 :
    output bus : Analog<32>
    output port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]
    defname = AnalogBlackBox
    parameter index = 2

  module AnalogBlackBoxModule_2 :
    input clock : Clock
    input reset : Reset
    output io : { bus : Analog<32>, port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]}

    inst impl of AnalogBlackBox_2 @[AnalogIntegrationSpec.scala 45:20]
    impl.port is invalid
    impl.bus is invalid
    io.port[0].out <= impl.port[0].out @[AnalogIntegrationSpec.scala 46:6]
    impl.port[0].in <= io.port[0].in @[AnalogIntegrationSpec.scala 46:6]
    attach (io.bus, impl.bus) @[AnalogIntegrationSpec.scala 46:6]

  extmodule AnalogBlackBox_3 :
    output bus : Analog<32>
    output port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]
    defname = AnalogBlackBox
    parameter index = 3

  module AnalogBlackBoxModule_3 :
    input clock : Clock
    input reset : Reset
    output io : { bus : Analog<32>, port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[1]}

    inst impl of AnalogBlackBox_3 @[AnalogIntegrationSpec.scala 45:20]
    impl.port is invalid
    impl.bus is invalid
    io.port[0].out <= impl.port[0].out @[AnalogIntegrationSpec.scala 46:6]
    impl.port[0].in <= io.port[0].in @[AnalogIntegrationSpec.scala 46:6]
    attach (io.bus, impl.bus) @[AnalogIntegrationSpec.scala 46:6]

  module AnalogBlackBoxWrapper_1 :
    input clock : Clock
    input reset : Reset
    output io : { bus : Analog<32>, port : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[2]}

    inst bbs_0 of AnalogBlackBoxModule_2 @[AnalogIntegrationSpec.scala 53:33]
    bbs_0.clock <= clock
    bbs_0.reset <= reset
    inst bbs_1 of AnalogBlackBoxModule_3 @[AnalogIntegrationSpec.scala 53:33]
    bbs_1.clock <= clock
    bbs_1.reset <= reset
    attach (io.bus, bbs_0.io.bus) @[AnalogIntegrationSpec.scala 54:10]
    io.port[0].out <= bbs_0.io.port[0].out @[AnalogIntegrationSpec.scala 55:11]
    bbs_0.io.port[0].in <= io.port[0].in @[AnalogIntegrationSpec.scala 55:11]
    io.port[1].out <= bbs_1.io.port[0].out @[AnalogIntegrationSpec.scala 55:11]
    bbs_1.io.port[0].in <= io.port[1].in @[AnalogIntegrationSpec.scala 55:11]
    attach (bbs_0.io.bus, bbs_1.io.bus) @[AnalogIntegrationSpec.scala 56:9]

  module AnalogSmallDUT :
    input clock : Clock
    input reset : Reset
    output io : { ports : { flip in : { valid : UInt<1>, bits : UInt<32>}, out : UInt<32>}[4]}

    inst mods_0 of AnalogBlackBoxWrapper @[AnalogIntegrationSpec.scala 96:11]
    mods_0.clock <= clock
    mods_0.reset <= reset
    inst mods_1 of AnalogBlackBoxModule_1 @[AnalogIntegrationSpec.scala 97:11]
    mods_1.clock <= clock
    mods_1.reset <= reset
    inst mods_2 of AnalogBlackBoxWrapper_1 @[AnalogIntegrationSpec.scala 98:11]
    mods_2.clock <= clock
    mods_2.reset <= reset
    io.ports[0].out <= mods_0.io.port[0].out @[AnalogIntegrationSpec.scala 101:12]
    mods_0.io.port[0].in <= io.ports[0].in @[AnalogIntegrationSpec.scala 101:12]
    io.ports[1].out <= mods_1.io.port[0].out @[AnalogIntegrationSpec.scala 101:12]
    mods_1.io.port[0].in <= io.ports[1].in @[AnalogIntegrationSpec.scala 101:12]
    io.ports[2].out <= mods_2.io.port[0].out @[AnalogIntegrationSpec.scala 101:12]
    mods_2.io.port[0].in <= io.ports[2].in @[AnalogIntegrationSpec.scala 101:12]
    io.ports[3].out <= mods_2.io.port[1].out @[AnalogIntegrationSpec.scala 101:12]
    mods_2.io.port[1].in <= io.ports[3].in @[AnalogIntegrationSpec.scala 101:12]
    attach (mods_0.io.bus, mods_1.io.bus, mods_2.io.bus) @[AnalogIntegrationSpec.scala 103:9]

  module AnalogIntegrationTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of AnalogSmallDUT @[AnalogIntegrationSpec.scala 110:19]
    dut.clock <= clock
    dut.reset <= reset
    wire expectedValue : UInt<32> @[AnalogIntegrationSpec.scala 112:27]
    expectedValue <= UInt<32>("h2") @[AnalogIntegrationSpec.scala 113:17]
    reg cycle : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 117:11]
    node _T_1 = eq(_T, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 117:11]
    when _T_1 : @[AnalogIntegrationSpec.scala 117:11]
      printf(clock, UInt<1>("h1"), "@%d: BlackBox #0: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n", cycle, dut.io.ports[0].in.valid, dut.io.ports[0].in.bits, dut.io.ports[0].out) : printf @[AnalogIntegrationSpec.scala 117:11]
    dut.io.ports[0].in.valid <= UInt<1>("h0") @[AnalogIntegrationSpec.scala 119:18]
    dut.io.ports[0].in.bits <= UInt<32>("h2") @[AnalogIntegrationSpec.scala 120:17]
    node _T_2 = eq(dut.io.ports[0].out, expectedValue) @[AnalogIntegrationSpec.scala 122:20]
    node _T_3 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 122:11]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
    when _T_4 : @[AnalogIntegrationSpec.scala 122:11]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[AnalogIntegrationSpec.scala 122:11]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
      when _T_5 : @[AnalogIntegrationSpec.scala 122:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n") : printf_1 @[AnalogIntegrationSpec.scala 122:11]
    node _T_6 = eq(cycle, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 124:16]
    when _T_6 : @[AnalogIntegrationSpec.scala 124:27]
      node _expectedValue_T = add(UInt<32>("h2"), UInt<1>("h0")) @[AnalogIntegrationSpec.scala 125:33]
      node _expectedValue_T_1 = tail(_expectedValue_T, 1) @[AnalogIntegrationSpec.scala 125:33]
      expectedValue <= _expectedValue_T_1 @[AnalogIntegrationSpec.scala 125:21]
      dut.io.ports[0].in.valid <= UInt<1>("h1") @[AnalogIntegrationSpec.scala 126:20]
    node _T_7 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 117:11]
    node _T_8 = eq(_T_7, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 117:11]
    when _T_8 : @[AnalogIntegrationSpec.scala 117:11]
      printf(clock, UInt<1>("h1"), "@%d: BlackBox #1: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n", cycle, dut.io.ports[1].in.valid, dut.io.ports[1].in.bits, dut.io.ports[1].out) : printf_2 @[AnalogIntegrationSpec.scala 117:11]
    dut.io.ports[1].in.valid <= UInt<1>("h0") @[AnalogIntegrationSpec.scala 119:18]
    dut.io.ports[1].in.bits <= UInt<32>("h2") @[AnalogIntegrationSpec.scala 120:17]
    node _T_9 = eq(dut.io.ports[1].out, expectedValue) @[AnalogIntegrationSpec.scala 122:20]
    node _T_10 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 122:11]
    node _T_11 = eq(_T_10, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
    when _T_11 : @[AnalogIntegrationSpec.scala 122:11]
      assert(clock, _T_9, UInt<1>("h1"), "") : assert_1 @[AnalogIntegrationSpec.scala 122:11]
      node _T_12 = eq(_T_9, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
      when _T_12 : @[AnalogIntegrationSpec.scala 122:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n") : printf_3 @[AnalogIntegrationSpec.scala 122:11]
    node _T_13 = eq(cycle, UInt<1>("h1")) @[AnalogIntegrationSpec.scala 124:16]
    when _T_13 : @[AnalogIntegrationSpec.scala 124:27]
      node _expectedValue_T_2 = add(UInt<32>("h2"), UInt<1>("h1")) @[AnalogIntegrationSpec.scala 125:33]
      node _expectedValue_T_3 = tail(_expectedValue_T_2, 1) @[AnalogIntegrationSpec.scala 125:33]
      expectedValue <= _expectedValue_T_3 @[AnalogIntegrationSpec.scala 125:21]
      dut.io.ports[1].in.valid <= UInt<1>("h1") @[AnalogIntegrationSpec.scala 126:20]
    node _T_14 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 117:11]
    node _T_15 = eq(_T_14, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 117:11]
    when _T_15 : @[AnalogIntegrationSpec.scala 117:11]
      printf(clock, UInt<1>("h1"), "@%d: BlackBox #2: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n", cycle, dut.io.ports[2].in.valid, dut.io.ports[2].in.bits, dut.io.ports[2].out) : printf_4 @[AnalogIntegrationSpec.scala 117:11]
    dut.io.ports[2].in.valid <= UInt<1>("h0") @[AnalogIntegrationSpec.scala 119:18]
    dut.io.ports[2].in.bits <= UInt<32>("h2") @[AnalogIntegrationSpec.scala 120:17]
    node _T_16 = eq(dut.io.ports[2].out, expectedValue) @[AnalogIntegrationSpec.scala 122:20]
    node _T_17 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 122:11]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
    when _T_18 : @[AnalogIntegrationSpec.scala 122:11]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_2 @[AnalogIntegrationSpec.scala 122:11]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
      when _T_19 : @[AnalogIntegrationSpec.scala 122:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n") : printf_5 @[AnalogIntegrationSpec.scala 122:11]
    node _T_20 = eq(cycle, UInt<2>("h2")) @[AnalogIntegrationSpec.scala 124:16]
    when _T_20 : @[AnalogIntegrationSpec.scala 124:27]
      node _expectedValue_T_4 = add(UInt<32>("h2"), UInt<2>("h2")) @[AnalogIntegrationSpec.scala 125:33]
      node _expectedValue_T_5 = tail(_expectedValue_T_4, 1) @[AnalogIntegrationSpec.scala 125:33]
      expectedValue <= _expectedValue_T_5 @[AnalogIntegrationSpec.scala 125:21]
      dut.io.ports[2].in.valid <= UInt<1>("h1") @[AnalogIntegrationSpec.scala 126:20]
    node _T_21 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 117:11]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 117:11]
    when _T_22 : @[AnalogIntegrationSpec.scala 117:11]
      printf(clock, UInt<1>("h1"), "@%d: BlackBox #3: AnalogBlackBoxPort(in -> Valid(valid -> %d, bits -> %d), out -> %d)\n", cycle, dut.io.ports[3].in.valid, dut.io.ports[3].in.bits, dut.io.ports[3].out) : printf_6 @[AnalogIntegrationSpec.scala 117:11]
    dut.io.ports[3].in.valid <= UInt<1>("h0") @[AnalogIntegrationSpec.scala 119:18]
    dut.io.ports[3].in.bits <= UInt<32>("h2") @[AnalogIntegrationSpec.scala 120:17]
    node _T_23 = eq(dut.io.ports[3].out, expectedValue) @[AnalogIntegrationSpec.scala 122:20]
    node _T_24 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 122:11]
    node _T_25 = eq(_T_24, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
    when _T_25 : @[AnalogIntegrationSpec.scala 122:11]
      assert(clock, _T_23, UInt<1>("h1"), "") : assert_3 @[AnalogIntegrationSpec.scala 122:11]
      node _T_26 = eq(_T_23, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 122:11]
      when _T_26 : @[AnalogIntegrationSpec.scala 122:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n") : printf_7 @[AnalogIntegrationSpec.scala 122:11]
    node _T_27 = eq(cycle, UInt<2>("h3")) @[AnalogIntegrationSpec.scala 124:16]
    when _T_27 : @[AnalogIntegrationSpec.scala 124:27]
      node _expectedValue_T_6 = add(UInt<32>("h2"), UInt<2>("h3")) @[AnalogIntegrationSpec.scala 125:33]
      node _expectedValue_T_7 = tail(_expectedValue_T_6, 1) @[AnalogIntegrationSpec.scala 125:33]
      expectedValue <= _expectedValue_T_7 @[AnalogIntegrationSpec.scala 125:21]
      dut.io.ports[3].in.valid <= UInt<1>("h1") @[AnalogIntegrationSpec.scala 126:20]
    when done : @[AnalogIntegrationSpec.scala 130:14]
      node _T_28 = bits(reset, 0, 0) @[AnalogIntegrationSpec.scala 130:20]
      node _T_29 = eq(_T_28, UInt<1>("h0")) @[AnalogIntegrationSpec.scala 130:20]
      when _T_29 : @[AnalogIntegrationSpec.scala 130:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[AnalogIntegrationSpec.scala 130:20]
