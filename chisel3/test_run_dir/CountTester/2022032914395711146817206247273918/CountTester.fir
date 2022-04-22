circuit CountTester :
  module CountTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire value : UInt
    value <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 12:16]
      skip
    node _T = eq(value, UInt<1>("h0")) @[Counter.scala 14:18]
    when _T : @[Counter.scala 14:32]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 15:9]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Counter.scala 15:9]
      when _T_2 : @[Counter.scala 15:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Counter.scala 15:9]
