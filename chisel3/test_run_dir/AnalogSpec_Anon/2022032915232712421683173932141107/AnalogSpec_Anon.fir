circuit AnalogSpec_Anon :
  extmodule AnalogWriterBlackBox :
    output bus : Analog<32>
    input in : UInt<32>
    defname = AnalogWriterBlackBox

  extmodule AnalogReaderBlackBox :
    output bus : Analog<32>
    output out : UInt<32>
    defname = AnalogReaderBlackBox

  module VecBundleAnalogReaderWrapper :
    output vecBunBus : { analog : Analog<32>}[1]
    output out : UInt<32>

    inst mod of AnalogReaderBlackBox @[AnalogSpec.scala 72:19]
    mod.out is invalid
    mod.bus is invalid
    attach (mod.bus, vecBunBus[0].analog) @[AnalogSpec.scala 73:14]
    out <= mod.out @[AnalogSpec.scala 74:7]

  module AnalogSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<1>("h1")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[AnalogSpec.scala 82:14]
      node _T = bits(reset, 0, 0) @[AnalogSpec.scala 82:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[AnalogSpec.scala 82:20]
      when _T_1 : @[AnalogSpec.scala 82:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[AnalogSpec.scala 82:20]
    inst writer of AnalogWriterBlackBox @[AnalogSpec.scala 84:28]
    writer.in is invalid
    writer.bus is invalid
    writer.in <= UInt<32>("hdeadbeef") @[AnalogSpec.scala 85:16]
    inst mod of VecBundleAnalogReaderWrapper @[AnalogSpec.scala 344:25]
    attach (mod.vecBunBus[0].analog, writer.bus) @[AnalogSpec.scala 345:17]
    node _T_2 = eq(mod.out, UInt<32>("hdeadbeef")) @[AnalogSpec.scala 88:23]
    node _T_3 = bits(reset, 0, 0) @[AnalogSpec.scala 88:11]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[AnalogSpec.scala 88:11]
    when _T_4 : @[AnalogSpec.scala 88:11]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[AnalogSpec.scala 88:11]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[AnalogSpec.scala 88:11]
      when _T_5 : @[AnalogSpec.scala 88:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AnalogSpec.scala:88 assert(reader.out === BusValue)\n") : printf @[AnalogSpec.scala 88:11]
