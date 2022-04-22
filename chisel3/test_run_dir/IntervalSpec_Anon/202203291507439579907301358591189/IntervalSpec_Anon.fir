circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 763:26]
    base <= asInterval(UInt<4>("h8"), -8, -8, 0) @[IntervalSpec.scala 764:16]
