circuit AsyncResetSpec_Anon :
  module AsyncResetSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _reg_T = asAsyncReset(reset) @[AsyncResetSpec.scala 248:33]
    wire _reg_WIRE : { x : UInt<16>, y : UInt<16>} @[AsyncResetSpec.scala 249:39]
    _reg_WIRE.y <= UInt<16>("hcad0") @[AsyncResetSpec.scala 249:39]
    _reg_WIRE.x <= UInt<16>("hbad0") @[AsyncResetSpec.scala 249:39]
    wire _reg_WIRE_1 : { x : UInt<16>, y : UInt<16>} @[AsyncResetSpec.scala 249:77]
    _reg_WIRE_1.y <= UInt<16>("hbeef") @[AsyncResetSpec.scala 249:77]
    _reg_WIRE_1.x <= UInt<16>("hdead") @[AsyncResetSpec.scala 249:77]
    reg reg : { x : UInt<16>, y : UInt<16>}, clock with :
      reset => (_reg_T, _reg_WIRE_1) @[AsyncResetSpec.scala 249:16]
    reg <= _reg_WIRE @[AsyncResetSpec.scala 249:16]
    reg count : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(count, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(count, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      count <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = eq(count, UInt<1>("h0")) @[AsyncResetSpec.scala 252:18]
    when _T : @[AsyncResetSpec.scala 252:27]
      node _T_1 = cat(reg.x, reg.y) @[AsyncResetSpec.scala 253:28]
      node _T_2 = eq(_T_1, UInt<32>("hdeadbeef")) @[AsyncResetSpec.scala 253:35]
      node _T_3 = bits(reset, 0, 0) @[AsyncResetSpec.scala 253:23]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[AsyncResetSpec.scala 253:23]
      when _T_4 : @[AsyncResetSpec.scala 253:23]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[AsyncResetSpec.scala 253:23]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[AsyncResetSpec.scala 253:23]
        when _T_5 : @[AsyncResetSpec.scala 253:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:253 chisel3.assert(reg.asUInt === 0xdeadbeefL.U)\n") : printf @[AsyncResetSpec.scala 253:23]
    else :
      node _T_6 = cat(reg.x, reg.y) @[AsyncResetSpec.scala 255:28]
      node _T_7 = eq(_T_6, UInt<32>("hbad0cad0")) @[AsyncResetSpec.scala 255:35]
      node _T_8 = bits(reset, 0, 0) @[AsyncResetSpec.scala 255:23]
      node _T_9 = eq(_T_8, UInt<1>("h0")) @[AsyncResetSpec.scala 255:23]
      when _T_9 : @[AsyncResetSpec.scala 255:23]
        assert(clock, _T_7, UInt<1>("h1"), "") : assert_1 @[AsyncResetSpec.scala 255:23]
        node _T_10 = eq(_T_7, UInt<1>("h0")) @[AsyncResetSpec.scala 255:23]
        when _T_10 : @[AsyncResetSpec.scala 255:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:255 chisel3.assert(reg.asUInt === 0xbad0cad0L.U)\n") : printf_1 @[AsyncResetSpec.scala 255:23]
    when done : @[AsyncResetSpec.scala 257:18]
      node _T_11 = bits(reset, 0, 0) @[AsyncResetSpec.scala 257:24]
      node _T_12 = eq(_T_11, UInt<1>("h0")) @[AsyncResetSpec.scala 257:24]
      when _T_12 : @[AsyncResetSpec.scala 257:24]
        stop(clock, UInt<1>("h1"), 0) : stop @[AsyncResetSpec.scala 257:24]
