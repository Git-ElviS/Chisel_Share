circuit RecordSerializationTest :
  module RecordSerializationTest :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire record : { buzz : UInt<16>, fizz : UInt<16>} @[RecordSpec.scala 43:22]
    record.fizz <= UInt<16>("hdead") @[RecordSpec.scala 45:20]
    record.buzz <= UInt<16>("hbeef") @[RecordSpec.scala 46:20]
    node uint = cat(record.buzz, record.fizz) @[RecordSpec.scala 48:23]
    node _T = eq(uint, UInt<32>("hbeefdead")) @[RecordSpec.scala 50:17]
    node _T_1 = bits(reset, 0, 0) @[RecordSpec.scala 50:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[RecordSpec.scala 50:11]
    when _T_2 : @[RecordSpec.scala 50:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[RecordSpec.scala 50:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[RecordSpec.scala 50:11]
      when _T_3 : @[RecordSpec.scala 50:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:50 assert(uint === \"hbeefdead\".U)\n") : printf @[RecordSpec.scala 50:11]
    wire record2 : { buzz : UInt<16>, fizz : UInt<16>} @[RecordSpec.scala 52:32]
    wire _record2_WIRE : UInt<32>
    _record2_WIRE <= uint
    node _record2_T = bits(_record2_WIRE, 15, 0) @[RecordSpec.scala 52:32]
    record2.fizz <= _record2_T @[RecordSpec.scala 52:32]
    node _record2_T_1 = bits(_record2_WIRE, 31, 16) @[RecordSpec.scala 52:32]
    record2.buzz <= _record2_T_1 @[RecordSpec.scala 52:32]
    node _T_4 = eq(UInt<16>("hdead"), record2.fizz) @[RecordSpec.scala 53:22]
    node _T_5 = bits(reset, 0, 0) @[RecordSpec.scala 53:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[RecordSpec.scala 53:11]
    when _T_6 : @[RecordSpec.scala 53:11]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[RecordSpec.scala 53:11]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[RecordSpec.scala 53:11]
      when _T_7 : @[RecordSpec.scala 53:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:53 assert(\"hdead\".U === record2(\"fizz\").asUInt)\n") : printf_1 @[RecordSpec.scala 53:11]
    node _T_8 = eq(UInt<16>("hbeef"), record2.buzz) @[RecordSpec.scala 54:22]
    node _T_9 = bits(reset, 0, 0) @[RecordSpec.scala 54:11]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[RecordSpec.scala 54:11]
    when _T_10 : @[RecordSpec.scala 54:11]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[RecordSpec.scala 54:11]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[RecordSpec.scala 54:11]
      when _T_11 : @[RecordSpec.scala 54:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:54 assert(\"hbeef\".U === record2(\"buzz\").asUInt)\n") : printf_2 @[RecordSpec.scala 54:11]
    node _T_12 = bits(reset, 0, 0) @[RecordSpec.scala 55:9]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[RecordSpec.scala 55:9]
    when _T_13 : @[RecordSpec.scala 55:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[RecordSpec.scala 55:9]
