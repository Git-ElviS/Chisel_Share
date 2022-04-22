circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : Interval[0, 1].0, out : Interval.0}

    wire intervalResult : Interval.0 @[IntervalSpec.scala 840:34]
    node _intervalResult_T = add(asInterval(UInt<2>("h1"), 1, 1, 0), asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 842:31]
    node _intervalResult_T_1 = add(_intervalResult_T, asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 842:37]
    node _intervalResult_T_2 = add(_intervalResult_T_1, asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 842:43]
    node _intervalResult_T_3 = add(_intervalResult_T_2, asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 842:49]
    node _intervalResult_T_4 = add(_intervalResult_T_3, asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 842:55]
    node _intervalResult_T_5 = add(_intervalResult_T_4, asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 842:61]
    intervalResult <= _intervalResult_T_5 @[IntervalSpec.scala 842:24]
    io.out <= intervalResult @[IntervalSpec.scala 843:16]

