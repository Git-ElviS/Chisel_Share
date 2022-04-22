circuit MixedVecUIntDynamicIndexTester :
  module MixedVecUIntDynamicIndexTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire wire : { 3 : UInt<7>, 2 : UInt<4>, 1 : UInt<16>, 0 : UInt<8>} @[MixedVecSpec.scala 78:18]
    wire.0 <= UInt<1>("h0") @[MixedVecSpec.scala 82:13]
    wire.1 <= UInt<1>("h1") @[MixedVecSpec.scala 82:13]
    wire.2 <= UInt<2>("h2") @[MixedVecSpec.scala 82:13]
    wire.3 <= UInt<2>("h3") @[MixedVecSpec.scala 82:13]
    wire vecWire : UInt<16>[4] @[MixedVecSpec.scala 85:24]
    vecWire[0] <= wire.0 @[MixedVecSpec.scala 85:24]
    vecWire[1] <= wire.1 @[MixedVecSpec.scala 85:24]
    vecWire[2] <= wire.2 @[MixedVecSpec.scala 85:24]
    vecWire[3] <= wire.3 @[MixedVecSpec.scala 85:24]
    reg cycle : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = eq(vecWire[cycle], cycle) @[MixedVecSpec.scala 88:25]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 88:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[MixedVecSpec.scala 88:9]
    when _T_2 : @[MixedVecSpec.scala 88:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MixedVecSpec.scala 88:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[MixedVecSpec.scala 88:9]
      when _T_3 : @[MixedVecSpec.scala 88:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:88 assert(vecWire(cycle) === cycle)\n") : printf @[MixedVecSpec.scala 88:9]
    when done : @[MixedVecSpec.scala 90:14]
      node _T_4 = bits(reset, 0, 0) @[MixedVecSpec.scala 90:20]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[MixedVecSpec.scala 90:20]
      when _T_5 : @[MixedVecSpec.scala 90:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[MixedVecSpec.scala 90:20]
