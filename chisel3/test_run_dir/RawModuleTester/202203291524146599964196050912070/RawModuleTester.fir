circuit RawModuleTester :
  module UnclockedPlusOne :
    input in : UInt<32>
    output out : UInt<32>

    node _out_T = add(in, UInt<1>("h1")) @[RawModuleSpec.scala 13:13]
    node _out_T_1 = tail(_out_T, 1) @[RawModuleSpec.scala 13:13]
    out <= _out_T_1 @[RawModuleSpec.scala 13:7]

  module RawModuleTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst plusModule of UnclockedPlusOne @[RawModuleSpec.scala 17:26]
    plusModule.in <= UInt<6>("h2a") @[RawModuleSpec.scala 18:17]
    node _T = eq(plusModule.out, UInt<6>("h2b")) @[RawModuleSpec.scala 19:25]
    node _T_1 = bits(reset, 0, 0) @[RawModuleSpec.scala 19:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[RawModuleSpec.scala 19:9]
    when _T_2 : @[RawModuleSpec.scala 19:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[RawModuleSpec.scala 19:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[RawModuleSpec.scala 19:9]
      when _T_3 : @[RawModuleSpec.scala 19:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RawModuleSpec.scala:19 assert(plusModule.out === 43.U)\n") : printf @[RawModuleSpec.scala 19:9]
    node _T_4 = bits(reset, 0, 0) @[RawModuleSpec.scala 20:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[RawModuleSpec.scala 20:7]
    when _T_5 : @[RawModuleSpec.scala 20:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[RawModuleSpec.scala 20:7]
