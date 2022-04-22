circuit IsLitTester :
  module IsLitTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire wire : UInt<7>
    wire <= UInt<1>("h0")
    wire wire_1 : UInt<7>
    wire_1 <= UInt<1>("h1")
    wire wire_2 : UInt<7>
    wire_2 <= UInt<2>("h2")
    wire wire_3 : UInt<7>
    wire_3 <= UInt<7>("h64")
    wire wire_4 : UInt<7>
    wire_4 <= UInt<7>("h65")
    node _T = bits(reset, 0, 0) @[StrongEnum.scala 263:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[StrongEnum.scala 263:7]
    when _T_1 : @[StrongEnum.scala 263:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[StrongEnum.scala 263:7]
