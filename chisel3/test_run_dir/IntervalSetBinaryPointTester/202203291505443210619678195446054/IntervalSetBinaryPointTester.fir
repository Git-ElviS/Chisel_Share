circuit IntervalSetBinaryPointTester :
  module IntervalSetBinaryPointTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire in1 : Interval[0, 4].4
    node in2 = setp(in1, 2)
    in1 <= asInterval(UInt<3>("h2"), 2, 2, 0)
    node shiftedLeft = incp(in1, 2)
    node shiftedRight = decp(in1, 2)
    node _T = bits(reset, 0, 0)
    node _T_1 = eq(_T, UInt<1>("h0"))
    when _T_1 :
      stop(clock, UInt<1>("h1"), 0) : stop
