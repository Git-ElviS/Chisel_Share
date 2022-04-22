circuit EnumSpec_Anon :
  module EnumSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire wire : UInt<1>
    wire <= UInt<1>("h0")
    node _T = eq(wire, UInt<1>("h0")) @[EnumSpec.scala 15:27]
    node _T_1 = bits(reset, 0, 0) @[EnumSpec.scala 15:21]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[EnumSpec.scala 15:21]
    when _T_2 : @[EnumSpec.scala 15:21]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[EnumSpec.scala 15:21]
      node _T_3 = eq(_T, UInt<1>("h0")) @[EnumSpec.scala 15:21]
      when _T_3 : @[EnumSpec.scala 15:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at EnumSpec.scala:15 chisel3.assert(wire === onlyState)\n") : printf @[EnumSpec.scala 15:21]
    node _T_4 = bits(reset, 0, 0) @[EnumSpec.scala 16:11]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[EnumSpec.scala 16:11]
    when _T_5 : @[EnumSpec.scala 16:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[EnumSpec.scala 16:11]
