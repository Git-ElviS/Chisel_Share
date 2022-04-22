circuit ZeroEntryVecTester :
  module ZeroEntryVecTester_Anon :
    input clock : Clock
    input reset : Reset
    output io : { foo : UInt<1>, bar : UInt<1>[0]}

    io.foo <= UInt<1>("h0") @[Vec.scala 285:12]

  module ZeroEntryVecTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _WIRE : { foo : UInt<1>, bar : UInt<1>[0]} @[Vec.scala 280:23]
    _WIRE.foo <= UInt<1>("h0") @[Vec.scala 280:23]
    inst m of ZeroEntryVecTester_Anon @[Vec.scala 283:17]
    m.clock <= clock
    m.reset <= reset
    wire _WIRE_1 : UInt<1>[0]
    _WIRE_1 <= m.io.bar
    node _T = bits(reset, 0, 0) @[Vec.scala 289:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Vec.scala 289:7]
    when _T_1 : @[Vec.scala 289:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 289:7]
