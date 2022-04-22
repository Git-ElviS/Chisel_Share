circuit RecordDigitTester :
  module RecordDigitTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire wire : { 0 : UInt<32>} @[RecordSpec.scala 98:20]
    wire.0 <= UInt<7>("h7b") @[RecordSpec.scala 99:15]
    node _T = eq(wire.0, UInt<7>("h7b")) @[RecordSpec.scala 100:29]
    node _T_1 = bits(reset, 0, 0) @[RecordSpec.scala 100:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[RecordSpec.scala 100:11]
    when _T_2 : @[RecordSpec.scala 100:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[RecordSpec.scala 100:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[RecordSpec.scala 100:11]
      when _T_3 : @[RecordSpec.scala 100:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:100 assert(wire(\"0\").asUInt === 123.U)\n") : printf @[RecordSpec.scala 100:11]
    node _T_4 = bits(reset, 0, 0) @[RecordSpec.scala 101:9]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[RecordSpec.scala 101:9]
    when _T_5 : @[RecordSpec.scala 101:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[RecordSpec.scala 101:9]
