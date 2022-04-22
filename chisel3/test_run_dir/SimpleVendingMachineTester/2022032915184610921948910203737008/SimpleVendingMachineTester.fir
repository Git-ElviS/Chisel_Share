circuit SimpleVendingMachineTester :
  extmodule VerilogVendingMachine :
    input nickel : UInt<1>
    input dime : UInt<1>
    output dispense : UInt<1>
    input clock : Clock
    input reset : Reset
    defname = VerilogVendingMachine

  module VerilogVendingMachineWrapper :
    input clock : Clock
    input reset : Reset
    output io : { flip nickel : UInt<1>, flip dime : UInt<1>, dispense : UInt<1>}

    node _T = and(io.nickel, io.dime) @[SimpleVendingMachine.scala 19:22]
    node _T_1 = eq(_T, UInt<1>("h0")) @[SimpleVendingMachine.scala 19:10]
    node _T_2 = asUInt(reset) @[SimpleVendingMachine.scala 19:9]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[SimpleVendingMachine.scala 19:9]
    when _T_3 : @[SimpleVendingMachine.scala 19:9]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[SimpleVendingMachine.scala 19:9]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[SimpleVendingMachine.scala 19:9]
      when _T_4 : @[SimpleVendingMachine.scala 19:9]
        printf(clock, UInt<1>("h1"), "Assertion failed: Only one of nickel or dime can be input at a time!\n    at SimpleVendingMachine.scala:19 assert(!(io.nickel && io.dime), \"Only one of nickel or dime can be input at a time!\")\n") : printf @[SimpleVendingMachine.scala 19:9]
    inst impl of VerilogVendingMachine @[SimpleVendingMachine.scala 61:20]
    impl.reset is invalid
    impl.clock is invalid
    impl.dispense is invalid
    impl.dime is invalid
    impl.nickel is invalid
    impl.clock <= clock @[SimpleVendingMachine.scala 62:17]
    impl.reset <= reset @[SimpleVendingMachine.scala 63:17]
    impl.nickel <= io.nickel @[SimpleVendingMachine.scala 64:18]
    impl.dime <= io.dime @[SimpleVendingMachine.scala 65:16]
    io.dispense <= impl.dispense @[SimpleVendingMachine.scala 66:15]

  module SimpleVendingMachineTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of VerilogVendingMachineWrapper @[SimpleVendingMachine.scala 73:19]
    dut.clock <= clock
    dut.reset <= reset
    reg cycle : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<4>("h9")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[SimpleVendingMachine.scala 76:14]
      node _T = bits(reset, 0, 0) @[SimpleVendingMachine.scala 76:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[SimpleVendingMachine.scala 76:20]
      when _T_1 : @[SimpleVendingMachine.scala 76:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[SimpleVendingMachine.scala 76:20]
      node _T_2 = bits(reset, 0, 0) @[SimpleVendingMachine.scala 76:28]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[SimpleVendingMachine.scala 76:28]
      when _T_3 : @[SimpleVendingMachine.scala 76:28]
        stop(clock, UInt<1>("h1"), 0) : stop_1 @[SimpleVendingMachine.scala 76:28]
    wire nickelInputs : UInt<1>[10] @[SimpleVendingMachine.scala 78:29]
    nickelInputs[0] <= UInt<1>("h1") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[1] <= UInt<1>("h1") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[2] <= UInt<1>("h1") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[3] <= UInt<1>("h1") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[4] <= UInt<1>("h1") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[5] <= UInt<1>("h0") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[6] <= UInt<1>("h0") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[7] <= UInt<1>("h0") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[8] <= UInt<1>("h1") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[9] <= UInt<1>("h0") @[SimpleVendingMachine.scala 78:29]
    wire dimeInputs : UInt<1>[10] @[SimpleVendingMachine.scala 79:27]
    dimeInputs[0] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[1] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[2] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[3] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[4] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[5] <= UInt<1>("h1") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[6] <= UInt<1>("h1") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[7] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[8] <= UInt<1>("h0") @[SimpleVendingMachine.scala 79:27]
    dimeInputs[9] <= UInt<1>("h1") @[SimpleVendingMachine.scala 79:27]
    wire expected : UInt<1>[10] @[SimpleVendingMachine.scala 80:25]
    expected[0] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[1] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[2] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[3] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[4] <= UInt<1>("h1") @[SimpleVendingMachine.scala 80:25]
    expected[5] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[6] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[7] <= UInt<1>("h1") @[SimpleVendingMachine.scala 80:25]
    expected[8] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    expected[9] <= UInt<1>("h0") @[SimpleVendingMachine.scala 80:25]
    dut.io.nickel <= nickelInputs[cycle] @[SimpleVendingMachine.scala 82:17]
    dut.io.dime <= dimeInputs[cycle] @[SimpleVendingMachine.scala 83:15]
    node _T_4 = eq(dut.io.dispense, expected[cycle]) @[SimpleVendingMachine.scala 84:26]
    node _T_5 = bits(reset, 0, 0) @[SimpleVendingMachine.scala 84:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[SimpleVendingMachine.scala 84:9]
    when _T_6 : @[SimpleVendingMachine.scala 84:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert @[SimpleVendingMachine.scala 84:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[SimpleVendingMachine.scala 84:9]
      when _T_7 : @[SimpleVendingMachine.scala 84:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at SimpleVendingMachine.scala:84 assert(dut.io.dispense === expected(cycle))\n") : printf @[SimpleVendingMachine.scala 84:9]
