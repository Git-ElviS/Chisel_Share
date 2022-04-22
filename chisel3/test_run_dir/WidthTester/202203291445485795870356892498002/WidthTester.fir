circuit WidthTester :
  module WidthTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire w : UInt<7>
    w <= UInt<1>("h0")
    wire w_1 : UInt<7>
    w_1 <= UInt<1>("h1")
    wire w_2 : UInt<7>
    w_2 <= UInt<2>("h2")
    wire w_3 : UInt<7>
    w_3 <= UInt<7>("h64")
    wire w_4 : UInt<7>
    w_4 <= UInt<7>("h65")
    node _T = bits(reset, 0, 0) @[StrongEnum.scala 282:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[StrongEnum.scala 282:7]
    when _T_1 : @[StrongEnum.scala 282:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[StrongEnum.scala 282:7]
