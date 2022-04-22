circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    input io_in : SInt<2>
    output io_out : SInt<4>

    node _intervalResult_T = add(asSInt(UInt<2>("h1")), asSInt(UInt<2>("h1"))) @[IntervalSpec.scala 842:{31,31}]
    node _intervalResult_T_1 = asSInt(bits(add(_intervalResult_T, asSInt(UInt<2>("h1"))), 2, 0)) @[IntervalSpec.scala 842:{37,37}]
    node _intervalResult_T_2 = add(_intervalResult_T_1, asSInt(UInt<2>("h1"))) @[IntervalSpec.scala 842:{43,43}]
    node _intervalResult_T_3 = asSInt(bits(add(_intervalResult_T_2, asSInt(UInt<2>("h1"))), 3, 0)) @[IntervalSpec.scala 842:{49,49}]
    node _intervalResult_T_4 = asSInt(bits(add(_intervalResult_T_3, asSInt(UInt<2>("h1"))), 3, 0)) @[IntervalSpec.scala 842:{55,55}]
    node _intervalResult_T_5 = asSInt(bits(add(_intervalResult_T_4, asSInt(UInt<2>("h1"))), 3, 0)) @[IntervalSpec.scala 842:{61,61}]
    node intervalResult = _intervalResult_T_5 @[IntervalSpec.scala 840:34 842:24]
    io_out <= intervalResult @[IntervalSpec.scala 843:16]
