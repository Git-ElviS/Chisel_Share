circuit ParameterizedVendingMachineTester :
  module VendingMachineGenerator :
    input clock : Clock
    input reset : Reset
    output io : { flip inputs : UInt<1>[2], dispense : UInt<1>}

    when io.inputs[0] : @[VendingMachineGenerator.scala 39:19]
      node _T = eq(io.inputs[1], UInt<1>("h0")) @[VendingMachineGenerator.scala 40:52]
      node _T_1 = asUInt(reset) @[VendingMachineGenerator.scala 40:15]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[VendingMachineGenerator.scala 40:15]
      when _T_2 : @[VendingMachineGenerator.scala 40:15]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[VendingMachineGenerator.scala 40:15]
        node _T_3 = eq(_T, UInt<1>("h0")) @[VendingMachineGenerator.scala 40:15]
        when _T_3 : @[VendingMachineGenerator.scala 40:15]
          printf(clock, UInt<1>("h1"), "Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:40 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _), \"Only 1 coin can be input in a given cycle!\")\n") : printf @[VendingMachineGenerator.scala 40:15]
    when io.inputs[1] : @[VendingMachineGenerator.scala 39:19]
      node _T_4 = eq(io.inputs[0], UInt<1>("h0")) @[VendingMachineGenerator.scala 40:52]
      node _T_5 = asUInt(reset) @[VendingMachineGenerator.scala 40:15]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[VendingMachineGenerator.scala 40:15]
      when _T_6 : @[VendingMachineGenerator.scala 40:15]
        assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[VendingMachineGenerator.scala 40:15]
        node _T_7 = eq(_T_4, UInt<1>("h0")) @[VendingMachineGenerator.scala 40:15]
        when _T_7 : @[VendingMachineGenerator.scala 40:15]
          printf(clock, UInt<1>("h1"), "Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:40 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _), \"Only 1 coin can be input in a given cycle!\")\n") : printf_1 @[VendingMachineGenerator.scala 40:15]
    reg value : UInt<10>, clock with :
      reset => (reset, UInt<10>("h0")) @[VendingMachineGenerator.scala 58:22]
    wire incValue : UInt<10>
    incValue <= UInt<10>("h0")
    node doDispense = geq(value, UInt<9>("h1ed")) @[VendingMachineGenerator.scala 60:26]
    when doDispense : @[VendingMachineGenerator.scala 62:20]
      value <= UInt<1>("h0") @[VendingMachineGenerator.scala 63:11]
    else :
      node _value_T = add(value, incValue) @[VendingMachineGenerator.scala 65:20]
      node _value_T_1 = tail(_value_T, 1) @[VendingMachineGenerator.scala 65:20]
      value <= _value_T_1 @[VendingMachineGenerator.scala 65:11]
    when io.inputs[0] : @[VendingMachineGenerator.scala 69:28]
      incValue <= UInt<1>("h1") @[VendingMachineGenerator.scala 69:39]
    when io.inputs[1] : @[VendingMachineGenerator.scala 69:28]
      incValue <= UInt<5>("h1d") @[VendingMachineGenerator.scala 69:39]
    io.dispense <= doDispense @[VendingMachineGenerator.scala 71:15]

  module ParameterizedVendingMachineTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of VendingMachineGenerator @[VendingMachineGenerator.scala 81:19]
    dut.clock <= clock
    dut.reset <= reset
    wire inputVec : UInt<2>[100] @[VendingMachineGenerator.scala 90:36]
    inputVec[0] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[1] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[2] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[3] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[4] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[5] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[6] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[7] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[8] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[9] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[10] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[11] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[12] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[13] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[14] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[15] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[16] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[17] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[18] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[19] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[20] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[21] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[22] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[23] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[24] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[25] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[26] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[27] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[28] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[29] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[30] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[31] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[32] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[33] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[34] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[35] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[36] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[37] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[38] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[39] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[40] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[41] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[42] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[43] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[44] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[45] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[46] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[47] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[48] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[49] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[50] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[51] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[52] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[53] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[54] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[55] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[56] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[57] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[58] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[59] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[60] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[61] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[62] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[63] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[64] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[65] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[66] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[67] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[68] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[69] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[70] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[71] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[72] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[73] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[74] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[75] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[76] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[77] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[78] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[79] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[80] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[81] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[82] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[83] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[84] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[85] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[86] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[87] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[88] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[89] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[90] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[91] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[92] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[93] <= UInt<2>("h2") @[VendingMachineGenerator.scala 90:36]
    inputVec[94] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[95] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[96] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[97] <= UInt<2>("h0") @[VendingMachineGenerator.scala 90:36]
    inputVec[98] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    inputVec[99] <= UInt<2>("h1") @[VendingMachineGenerator.scala 90:36]
    wire expectedVec : UInt<1>[100] @[VendingMachineGenerator.scala 94:39]
    expectedVec[0] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[1] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[2] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[3] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[4] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[5] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[6] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[7] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[8] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[9] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[10] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[11] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[12] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[13] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[14] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[15] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[16] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[17] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[18] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[19] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[20] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[21] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[22] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[23] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[24] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[25] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[26] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[27] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[28] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[29] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[30] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[31] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[32] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[33] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[34] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[35] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[36] <= UInt<1>("h1") @[VendingMachineGenerator.scala 94:39]
    expectedVec[37] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[38] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[39] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[40] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[41] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[42] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[43] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[44] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[45] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[46] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[47] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[48] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[49] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[50] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[51] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[52] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[53] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[54] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[55] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[56] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[57] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[58] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[59] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[60] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[61] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[62] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[63] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[64] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[65] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[66] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[67] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[68] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[69] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[70] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[71] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[72] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[73] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[74] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[75] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[76] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[77] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[78] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[79] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[80] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[81] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[82] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[83] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[84] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[85] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[86] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[87] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[88] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[89] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[90] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[91] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[92] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[93] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[94] <= UInt<1>("h1") @[VendingMachineGenerator.scala 94:39]
    expectedVec[95] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[96] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[97] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[98] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    expectedVec[99] <= UInt<1>("h0") @[VendingMachineGenerator.scala 94:39]
    reg idx : UInt<7>, clock with :
      reset => (reset, UInt<7>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(idx, UInt<7>("h64")) @[Counter.scala 74:24]
      node _wrap_value_T = add(idx, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      idx <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        idx <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[VendingMachineGenerator.scala 97:14]
      node _T = bits(reset, 0, 0) @[VendingMachineGenerator.scala 97:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[VendingMachineGenerator.scala 97:20]
      when _T_1 : @[VendingMachineGenerator.scala 97:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[VendingMachineGenerator.scala 97:20]
      node _T_2 = bits(reset, 0, 0) @[VendingMachineGenerator.scala 97:28]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[VendingMachineGenerator.scala 97:28]
      when _T_3 : @[VendingMachineGenerator.scala 97:28]
        stop(clock, UInt<1>("h1"), 0) : stop_1 @[VendingMachineGenerator.scala 97:28]
    node _T_4 = bits(inputVec[idx], 0, 0) @[VendingMachineGenerator.scala 99:34]
    node _T_5 = bits(inputVec[idx], 1, 1) @[VendingMachineGenerator.scala 99:34]
    dut.io.inputs[0] <= _T_4 @[VendingMachineGenerator.scala 99:17]
    dut.io.inputs[1] <= _T_5 @[VendingMachineGenerator.scala 99:17]
    node _T_6 = eq(dut.io.dispense, expectedVec[idx]) @[VendingMachineGenerator.scala 100:26]
    node _T_7 = bits(reset, 0, 0) @[VendingMachineGenerator.scala 100:9]
    node _T_8 = eq(_T_7, UInt<1>("h0")) @[VendingMachineGenerator.scala 100:9]
    when _T_8 : @[VendingMachineGenerator.scala 100:9]
      assert(clock, _T_6, UInt<1>("h1"), "") : assert @[VendingMachineGenerator.scala 100:9]
      node _T_9 = eq(_T_6, UInt<1>("h0")) @[VendingMachineGenerator.scala 100:9]
      when _T_9 : @[VendingMachineGenerator.scala 100:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VendingMachineGenerator.scala:100 assert(dut.io.dispense === expectedVec(idx))\n") : printf @[VendingMachineGenerator.scala 100:9]
