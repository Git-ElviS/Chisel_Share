circuit FormattedAssertTester :
  module FormattedAssertTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire foobar : UInt<32> @[Assert.scala 53:20]
    foobar <= UInt<7>("h7b") @[Assert.scala 54:10]
    node _T = eq(foobar, UInt<7>("h7b")) @[Assert.scala 55:17]
    node _T_1 = bits(reset, 0, 0) @[Assert.scala 55:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Assert.scala 55:9]
    when _T_2 : @[Assert.scala 55:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Assert.scala 55:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Assert.scala 55:9]
      when _T_3 : @[Assert.scala 55:9]
        printf(clock, UInt<1>("h1"), "Assertion failed: Error! Wire foobar =/= %x! This is 100%% wrong.\n\n    at Assert.scala:55 assert(foobar === 123.U, \"Error! Wire foobar =/= %%x! This is 100%%%% wrong.\\n\", foobar)\n", foobar) : printf @[Assert.scala 55:9]
    node _T_4 = bits(reset, 0, 0) @[Assert.scala 56:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[Assert.scala 56:7]
    when _T_5 : @[Assert.scala 56:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Assert.scala 56:7]
