circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire u1 : UInt<5> @[IntervalSpec.scala 934:22]
    u1 <= UInt<3>("h7") @[IntervalSpec.scala 935:12]
    node i1 = asInterval(u1, 0, 15, 0) @[IntervalSpec.scala 936:31]
    node i2 = asInterval(u1, 0, 60, 2) @[IntervalSpec.scala 937:31]
    node _T = asUInt(i1) @[IntervalSpec.scala 938:30]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 938:15]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 938:15]
    when _T_2 : @[IntervalSpec.scala 938:15]
      printf(clock, UInt<1>("h1"), "i1 %d\n", _T) : printf @[IntervalSpec.scala 938:15]
    node _T_3 = eq(i1, asInterval(UInt<4>("h7"), 7, 7, 0)) @[IntervalSpec.scala 939:27]
    node _T_4 = bits(reset, 0, 0) @[IntervalSpec.scala 939:23]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[IntervalSpec.scala 939:23]
    when _T_5 : @[IntervalSpec.scala 939:23]
      assert(clock, _T_3, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 939:23]
      node _T_6 = eq(_T_3, UInt<1>("h0")) @[IntervalSpec.scala 939:23]
      when _T_6 : @[IntervalSpec.scala 939:23]
        printf(clock, UInt<1>("h1"), "Assertion failed: i1\n    at IntervalSpec.scala:939 chisel3.assert(i1 === 7.I, \"i1\")\n") : printf_1 @[IntervalSpec.scala 939:23]
    node _T_7 = bits(reset, 0, 0) @[IntervalSpec.scala 940:13]
    node _T_8 = eq(_T_7, UInt<1>("h0")) @[IntervalSpec.scala 940:13]
    when _T_8 : @[IntervalSpec.scala 940:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 940:13]
