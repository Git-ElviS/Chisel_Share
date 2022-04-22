circuit VecLiteralSpec_Anon :
  module ResetRegWithPartialVecLiteral :
    input clock : Clock
    input reset : Reset
    input in : UInt<8>[4]
    output out : UInt<8>[4]

    wire _y_WIRE : UInt<8>[4]
    _y_WIRE[0] <= UInt<8>("hab")
    _y_WIRE[1] is invalid
    _y_WIRE[2] <= UInt<8>("hef")
    _y_WIRE[3] <= UInt<8>("hff")
    reg y : UInt<8>[4], clock with :
      reset => (reset, _y_WIRE) @[VecLiteralSpec.scala 106:20]
    node _T = gt(in[1], UInt<1>("h0")) @[VecLiteralSpec.scala 107:16]
    when _T : @[VecLiteralSpec.scala 107:23]
      y[1] <= in[1] @[VecLiteralSpec.scala 108:12]
    node _T_1 = gt(in[2], UInt<1>("h0")) @[VecLiteralSpec.scala 110:16]
    when _T_1 : @[VecLiteralSpec.scala 110:23]
      y[2] <= in[2] @[VecLiteralSpec.scala 111:12]
    out <= y @[VecLiteralSpec.scala 113:9]

  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst m of ResetRegWithPartialVecLiteral @[VecLiteralSpec.scala 119:21]
    m.clock <= clock
    m.reset <= reset
    reg counter : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Counter.scala 62:40]
    wire wrapped : UInt<1>
    wrapped <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(counter, UInt<3>("h7")) @[Counter.scala 74:24]
      node _wrap_value_T = add(counter, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      counter <= _wrap_value_T_1 @[Counter.scala 78:15]
      wrapped <= wrap_wrap @[Counter.scala 120:23]
    m.in[0] is invalid @[VecLiteralSpec.scala 121:12]
    m.in[1] is invalid @[VecLiteralSpec.scala 121:12]
    m.in[2] is invalid @[VecLiteralSpec.scala 121:12]
    m.in[3] is invalid @[VecLiteralSpec.scala 121:12]
    node _T = lt(counter, UInt<2>("h2")) @[VecLiteralSpec.scala 122:20]
    when _T : @[VecLiteralSpec.scala 122:27]
      m.in[1] <= UInt<8>("hff") @[VecLiteralSpec.scala 123:17]
      m.in[2] <= UInt<8>("hff") @[VecLiteralSpec.scala 124:17]
    else :
      node _T_1 = eq(counter, UInt<2>("h2")) @[VecLiteralSpec.scala 125:26]
      when _T_1 : @[VecLiteralSpec.scala 125:35]
        node _T_2 = eq(m.out[1], UInt<8>("hff")) @[VecLiteralSpec.scala 126:33]
        node _T_3 = bits(reset, 0, 0) @[VecLiteralSpec.scala 126:23]
        node _T_4 = eq(_T_3, UInt<1>("h0")) @[VecLiteralSpec.scala 126:23]
        when _T_4 : @[VecLiteralSpec.scala 126:23]
          assert(clock, _T_2, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 126:23]
          node _T_5 = eq(_T_2, UInt<1>("h0")) @[VecLiteralSpec.scala 126:23]
          when _T_5 : @[VecLiteralSpec.scala 126:23]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:126 chisel3.assert(m.out(1) === 0xff.U)\n") : printf @[VecLiteralSpec.scala 126:23]
        node _T_6 = eq(m.out[2], UInt<8>("hff")) @[VecLiteralSpec.scala 127:33]
        node _T_7 = bits(reset, 0, 0) @[VecLiteralSpec.scala 127:23]
        node _T_8 = eq(_T_7, UInt<1>("h0")) @[VecLiteralSpec.scala 127:23]
        when _T_8 : @[VecLiteralSpec.scala 127:23]
          assert(clock, _T_6, UInt<1>("h1"), "") : assert_1 @[VecLiteralSpec.scala 127:23]
          node _T_9 = eq(_T_6, UInt<1>("h0")) @[VecLiteralSpec.scala 127:23]
          when _T_9 : @[VecLiteralSpec.scala 127:23]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:127 chisel3.assert(m.out(2) === 0xff.U)\n") : printf_1 @[VecLiteralSpec.scala 127:23]
      else :
        node _T_10 = eq(counter, UInt<2>("h3")) @[VecLiteralSpec.scala 128:26]
        when _T_10 : @[VecLiteralSpec.scala 128:35]
          m.in[1] <= UInt<1>("h0") @[VecLiteralSpec.scala 129:17]
          m.in[2] <= UInt<1>("h0") @[VecLiteralSpec.scala 130:17]
          m.reset <= UInt<1>("h1") @[VecLiteralSpec.scala 131:17]
        else :
          node _T_11 = gt(counter, UInt<2>("h2")) @[VecLiteralSpec.scala 132:26]
          when _T_11 : @[VecLiteralSpec.scala 132:33]
            node _T_12 = eq(m.out[1], UInt<8>("hff")) @[VecLiteralSpec.scala 134:33]
            node _T_13 = bits(reset, 0, 0) @[VecLiteralSpec.scala 134:23]
            node _T_14 = eq(_T_13, UInt<1>("h0")) @[VecLiteralSpec.scala 134:23]
            when _T_14 : @[VecLiteralSpec.scala 134:23]
              assert(clock, _T_12, UInt<1>("h1"), "") : assert_2 @[VecLiteralSpec.scala 134:23]
              node _T_15 = eq(_T_12, UInt<1>("h0")) @[VecLiteralSpec.scala 134:23]
              when _T_15 : @[VecLiteralSpec.scala 134:23]
                printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:134 chisel3.assert(m.out(1) === 0xff.U)\n") : printf_2 @[VecLiteralSpec.scala 134:23]
            node _T_16 = eq(m.out[2], UInt<8>("hef")) @[VecLiteralSpec.scala 135:33]
            node _T_17 = bits(reset, 0, 0) @[VecLiteralSpec.scala 135:23]
            node _T_18 = eq(_T_17, UInt<1>("h0")) @[VecLiteralSpec.scala 135:23]
            when _T_18 : @[VecLiteralSpec.scala 135:23]
              assert(clock, _T_16, UInt<1>("h1"), "") : assert_3 @[VecLiteralSpec.scala 135:23]
              node _T_19 = eq(_T_16, UInt<1>("h0")) @[VecLiteralSpec.scala 135:23]
              when _T_19 : @[VecLiteralSpec.scala 135:23]
                printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:135 chisel3.assert(m.out(2) === 0xef.U)\n") : printf_3 @[VecLiteralSpec.scala 135:23]
    when wrapped : @[VecLiteralSpec.scala 137:21]
      node _T_20 = bits(reset, 0, 0) @[VecLiteralSpec.scala 138:13]
      node _T_21 = eq(_T_20, UInt<1>("h0")) @[VecLiteralSpec.scala 138:13]
      when _T_21 : @[VecLiteralSpec.scala 138:13]
        stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 138:13]
