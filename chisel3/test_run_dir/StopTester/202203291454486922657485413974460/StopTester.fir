circuit StopTester :
  module StopTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = bits(reset, 0, 0) @[Stop.scala 9:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Stop.scala 9:7]
    when _T_1 : @[Stop.scala 9:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Stop.scala 9:7]
