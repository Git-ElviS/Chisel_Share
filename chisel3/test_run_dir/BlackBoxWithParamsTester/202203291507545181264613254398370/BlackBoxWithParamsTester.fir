circuit BlackBoxWithParamsTester :
  extmodule BlackBoxConstant :
    output out : UInt<1>
    defname = BlackBoxConstant
    parameter VALUE = 1
    parameter WIDTH = 1

  extmodule BlackBoxConstant_1 :
    output out : UInt<3>
    defname = BlackBoxConstant
    parameter VALUE = 4
    parameter WIDTH = 3

  extmodule BlackBoxStringParam :
    output out : UInt<32>
    defname = BlackBoxStringParam
    parameter STRING = "one"

  extmodule BlackBoxStringParam_1 :
    output out : UInt<32>
    defname = BlackBoxStringParam
    parameter STRING = "two"

  extmodule BlackBoxRealParam :
    output out : UInt<64>
    defname = BlackBoxRealParam
    parameter REAL = 1.0

  extmodule BlackBoxRealParam_1 :
    output out : UInt<64>
    defname = BlackBoxRealParam
    parameter REAL = -1.0

  extmodule BlackBoxTypeParam :
    output out : UInt<1>
    defname = BlackBoxTypeParam
    parameter T = 'bit'

  extmodule BlackBoxTypeParam_1 :
    output out : UInt<32>
    defname = BlackBoxTypeParam
    parameter T = 'bit [31:0]'

  module BlackBoxWithParamsTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst blackBoxOne of BlackBoxConstant @[BlackBox.scala 149:27]
    blackBoxOne.out is invalid
    inst blackBoxFour of BlackBoxConstant_1 @[BlackBox.scala 150:28]
    blackBoxFour.out is invalid
    inst blackBoxStringParamOne of BlackBoxStringParam @[BlackBox.scala 151:38]
    blackBoxStringParamOne.out is invalid
    inst blackBoxStringParamTwo of BlackBoxStringParam_1 @[BlackBox.scala 152:38]
    blackBoxStringParamTwo.out is invalid
    inst blackBoxRealParamOne of BlackBoxRealParam @[BlackBox.scala 153:36]
    blackBoxRealParamOne.out is invalid
    inst blackBoxRealParamNeg of BlackBoxRealParam_1 @[BlackBox.scala 154:36]
    blackBoxRealParamNeg.out is invalid
    inst blackBoxTypeParamBit of BlackBoxTypeParam @[BlackBox.scala 155:36]
    blackBoxTypeParamBit.out is invalid
    inst blackBoxTypeParamWord of BlackBoxTypeParam_1 @[BlackBox.scala 156:37]
    blackBoxTypeParamWord.out is invalid
    reg cycles : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire end : UInt<1>
    end <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycles, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycles, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycles <= _wrap_value_T_1 @[Counter.scala 78:15]
      end <= wrap_wrap @[Counter.scala 120:23]
    node _T = eq(blackBoxOne.out, UInt<1>("h1")) @[BlackBox.scala 160:29]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 160:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BlackBox.scala 160:9]
    when _T_2 : @[BlackBox.scala 160:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BlackBox.scala 160:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BlackBox.scala 160:9]
      when _T_3 : @[BlackBox.scala 160:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:160 assert(blackBoxOne.io.out === 1.U)\n") : printf @[BlackBox.scala 160:9]
    node _T_4 = eq(blackBoxFour.out, UInt<3>("h4")) @[BlackBox.scala 161:30]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 161:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BlackBox.scala 161:9]
    when _T_6 : @[BlackBox.scala 161:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BlackBox.scala 161:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BlackBox.scala 161:9]
      when _T_7 : @[BlackBox.scala 161:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:161 assert(blackBoxFour.io.out === 4.U)\n") : printf_1 @[BlackBox.scala 161:9]
    node _T_8 = eq(blackBoxStringParamOne.out, UInt<1>("h1")) @[BlackBox.scala 162:40]
    node _T_9 = bits(reset, 0, 0) @[BlackBox.scala 162:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[BlackBox.scala 162:9]
    when _T_10 : @[BlackBox.scala 162:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[BlackBox.scala 162:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[BlackBox.scala 162:9]
      when _T_11 : @[BlackBox.scala 162:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:162 assert(blackBoxStringParamOne.io.out === 1.U)\n") : printf_2 @[BlackBox.scala 162:9]
    node _T_12 = eq(blackBoxStringParamTwo.out, UInt<2>("h2")) @[BlackBox.scala 163:40]
    node _T_13 = bits(reset, 0, 0) @[BlackBox.scala 163:9]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[BlackBox.scala 163:9]
    when _T_14 : @[BlackBox.scala 163:9]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[BlackBox.scala 163:9]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[BlackBox.scala 163:9]
      when _T_15 : @[BlackBox.scala 163:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:163 assert(blackBoxStringParamTwo.io.out === 2.U)\n") : printf_3 @[BlackBox.scala 163:9]
    node _T_16 = eq(blackBoxRealParamOne.out, UInt<62>("h3ff0000000000000")) @[BlackBox.scala 164:38]
    node _T_17 = bits(reset, 0, 0) @[BlackBox.scala 164:9]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[BlackBox.scala 164:9]
    when _T_18 : @[BlackBox.scala 164:9]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[BlackBox.scala 164:9]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[BlackBox.scala 164:9]
      when _T_19 : @[BlackBox.scala 164:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:164 assert(blackBoxRealParamOne.io.out === 0x3ff0000000000000L.U)\n") : printf_4 @[BlackBox.scala 164:9]
    node _T_20 = eq(blackBoxRealParamNeg.out, UInt<64>("hbff0000000000000")) @[BlackBox.scala 165:38]
    node _T_21 = bits(reset, 0, 0) @[BlackBox.scala 165:9]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[BlackBox.scala 165:9]
    when _T_22 : @[BlackBox.scala 165:9]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[BlackBox.scala 165:9]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[BlackBox.scala 165:9]
      when _T_23 : @[BlackBox.scala 165:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:165 assert(blackBoxRealParamNeg.io.out === BigInt(\"bff0000000000000\", 16).U)\n") : printf_5 @[BlackBox.scala 165:9]
    node _T_24 = eq(blackBoxTypeParamBit.out, UInt<1>("h1")) @[BlackBox.scala 166:38]
    node _T_25 = bits(reset, 0, 0) @[BlackBox.scala 166:9]
    node _T_26 = eq(_T_25, UInt<1>("h0")) @[BlackBox.scala 166:9]
    when _T_26 : @[BlackBox.scala 166:9]
      assert(clock, _T_24, UInt<1>("h1"), "") : assert_6 @[BlackBox.scala 166:9]
      node _T_27 = eq(_T_24, UInt<1>("h0")) @[BlackBox.scala 166:9]
      when _T_27 : @[BlackBox.scala 166:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:166 assert(blackBoxTypeParamBit.io.out === 1.U)\n") : printf_6 @[BlackBox.scala 166:9]
    node _T_28 = eq(blackBoxTypeParamWord.out, UInt<32>("hdeadbeef")) @[BlackBox.scala 167:39]
    node _T_29 = bits(reset, 0, 0) @[BlackBox.scala 167:9]
    node _T_30 = eq(_T_29, UInt<1>("h0")) @[BlackBox.scala 167:9]
    when _T_30 : @[BlackBox.scala 167:9]
      assert(clock, _T_28, UInt<1>("h1"), "") : assert_7 @[BlackBox.scala 167:9]
      node _T_31 = eq(_T_28, UInt<1>("h0")) @[BlackBox.scala 167:9]
      when _T_31 : @[BlackBox.scala 167:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:167 assert(blackBoxTypeParamWord.io.out === \"hdeadbeef\".U(32.W))\n") : printf_7 @[BlackBox.scala 167:9]
    when end : @[BlackBox.scala 169:13]
      node _T_32 = bits(reset, 0, 0) @[BlackBox.scala 169:19]
      node _T_33 = eq(_T_32, UInt<1>("h0")) @[BlackBox.scala 169:19]
      when _T_33 : @[BlackBox.scala 169:19]
        stop(clock, UInt<1>("h1"), 0) : stop @[BlackBox.scala 169:19]
