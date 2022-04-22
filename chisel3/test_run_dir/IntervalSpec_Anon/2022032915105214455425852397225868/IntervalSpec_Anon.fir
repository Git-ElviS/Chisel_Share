circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = asInterval(asSInt(UInt<4>("h7")), -32, 30, 1) @[IntervalSpec.scala 960:38]
    node _T_1 = eq(_T, asInterval(UInt<4>("h7"), 7, 7, 1)) @[IntervalSpec.scala 960:58]
    node _T_2 = bits(reset, 0, 0) @[IntervalSpec.scala 960:23]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[IntervalSpec.scala 960:23]
    when _T_3 : @[IntervalSpec.scala 960:23]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 960:23]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 960:23]
      when _T_4 : @[IntervalSpec.scala 960:23]
        printf(clock, UInt<1>("h1"), "Assertion failed: adding binary point\n    at IntervalSpec.scala:960 chisel3.assert(7.S.asInterval(range\"[-16,15].1\") === 3.5.I(binaryPoint = 1.BP), \"adding binary point\")\n") : printf @[IntervalSpec.scala 960:23]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 961:13]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 961:13]
    when _T_6 : @[IntervalSpec.scala 961:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 961:13]
