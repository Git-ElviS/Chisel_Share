circuit SafeCastFromNonLitTester :
  module SafeCastFromNonLit :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_16 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_17 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_18 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_19 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_20 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_21 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_22 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_23 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_24 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_25 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_26 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_27 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_28 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_29 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_30 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_31 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_32 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_33 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_34 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_35 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_36 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_37 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_38 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_39 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_40 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_41 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_42 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_43 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_44 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_45 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_46 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_47 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_48 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_49 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_50 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_51 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_52 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_53 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_54 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_55 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_56 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_57 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_58 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_59 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_60 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_61 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_62 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_63 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_64 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_65 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_66 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_67 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_68 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_69 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_70 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_71 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_72 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_73 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_74 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_75 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_76 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_77 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_78 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_79 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_80 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_81 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_82 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_83 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_84 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_85 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_86 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_87 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_88 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_89 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_90 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_91 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_92 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_93 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_94 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_95 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_96 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_97 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_98 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_99 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_100 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_101 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_102 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_103 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_104 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_105 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_106 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_107 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_108 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_109 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_110 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_111 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_112 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_113 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_114 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_115 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_116 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_117 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_118 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_119 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_120 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_121 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_122 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_123 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_124 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_125 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_126 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLit_127 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}

    wire _WIRE : UInt<7> @[StrongEnum.scala 84:39]
    _WIRE <= io.in @[StrongEnum.scala 84:39]
    wire enum : UInt<7> @[StrongEnum.scala 84:39]
    enum <= _WIRE @[StrongEnum.scala 84:39]
    node _T = eq(enum, UInt<1>("h0")) @[StrongEnum.scala 84:39]
    node _T_1 = eq(enum, UInt<1>("h1")) @[StrongEnum.scala 84:39]
    node _T_2 = eq(enum, UInt<2>("h2")) @[StrongEnum.scala 84:39]
    node _T_3 = eq(enum, UInt<7>("h64")) @[StrongEnum.scala 84:39]
    node _T_4 = eq(enum, UInt<7>("h65")) @[StrongEnum.scala 84:39]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 84:39]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 84:39]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 84:39]
    node valid = or(_T_7, _T_4) @[StrongEnum.scala 84:39]
    io.out <= enum @[StrongEnum.scala 85:10]
    io.valid <= valid @[StrongEnum.scala 86:12]

  module SafeCastFromNonLitTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst mod of SafeCastFromNonLit @[StrongEnum.scala 207:21]
    mod.clock <= clock
    mod.reset <= reset
    mod.io.in <= UInt<1>("h0") @[StrongEnum.scala 208:15]
    node _T = eq(mod.io.out, UInt<1>("h0")) @[StrongEnum.scala 209:23]
    node _T_1 = bits(reset, 0, 0) @[StrongEnum.scala 209:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[StrongEnum.scala 209:11]
    when _T_2 : @[StrongEnum.scala 209:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[StrongEnum.scala 209:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[StrongEnum.scala 209:11]
      when _T_3 : @[StrongEnum.scala 209:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:209 assert(mod.io.out === enum)\n") : printf @[StrongEnum.scala 209:11]
    node _T_4 = eq(mod.io.valid, UInt<1>("h1")) @[StrongEnum.scala 210:25]
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 210:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[StrongEnum.scala 210:11]
    when _T_6 : @[StrongEnum.scala 210:11]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[StrongEnum.scala 210:11]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[StrongEnum.scala 210:11]
      when _T_7 : @[StrongEnum.scala 210:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:210 assert(mod.io.valid === true.B)\n") : printf_1 @[StrongEnum.scala 210:11]
    inst mod_1 of SafeCastFromNonLit_1 @[StrongEnum.scala 207:21]
    mod_1.clock <= clock
    mod_1.reset <= reset
    mod_1.io.in <= UInt<1>("h1") @[StrongEnum.scala 208:15]
    node _T_8 = eq(mod_1.io.out, UInt<1>("h1")) @[StrongEnum.scala 209:23]
    node _T_9 = bits(reset, 0, 0) @[StrongEnum.scala 209:11]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[StrongEnum.scala 209:11]
    when _T_10 : @[StrongEnum.scala 209:11]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[StrongEnum.scala 209:11]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[StrongEnum.scala 209:11]
      when _T_11 : @[StrongEnum.scala 209:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:209 assert(mod.io.out === enum)\n") : printf_2 @[StrongEnum.scala 209:11]
    node _T_12 = eq(mod_1.io.valid, UInt<1>("h1")) @[StrongEnum.scala 210:25]
    node _T_13 = bits(reset, 0, 0) @[StrongEnum.scala 210:11]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[StrongEnum.scala 210:11]
    when _T_14 : @[StrongEnum.scala 210:11]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[StrongEnum.scala 210:11]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[StrongEnum.scala 210:11]
      when _T_15 : @[StrongEnum.scala 210:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:210 assert(mod.io.valid === true.B)\n") : printf_3 @[StrongEnum.scala 210:11]
    inst mod_2 of SafeCastFromNonLit_2 @[StrongEnum.scala 207:21]
    mod_2.clock <= clock
    mod_2.reset <= reset
    mod_2.io.in <= UInt<2>("h2") @[StrongEnum.scala 208:15]
    node _T_16 = eq(mod_2.io.out, UInt<2>("h2")) @[StrongEnum.scala 209:23]
    node _T_17 = bits(reset, 0, 0) @[StrongEnum.scala 209:11]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[StrongEnum.scala 209:11]
    when _T_18 : @[StrongEnum.scala 209:11]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[StrongEnum.scala 209:11]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[StrongEnum.scala 209:11]
      when _T_19 : @[StrongEnum.scala 209:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:209 assert(mod.io.out === enum)\n") : printf_4 @[StrongEnum.scala 209:11]
    node _T_20 = eq(mod_2.io.valid, UInt<1>("h1")) @[StrongEnum.scala 210:25]
    node _T_21 = bits(reset, 0, 0) @[StrongEnum.scala 210:11]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[StrongEnum.scala 210:11]
    when _T_22 : @[StrongEnum.scala 210:11]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[StrongEnum.scala 210:11]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[StrongEnum.scala 210:11]
      when _T_23 : @[StrongEnum.scala 210:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:210 assert(mod.io.valid === true.B)\n") : printf_5 @[StrongEnum.scala 210:11]
    inst mod_3 of SafeCastFromNonLit_3 @[StrongEnum.scala 207:21]
    mod_3.clock <= clock
    mod_3.reset <= reset
    mod_3.io.in <= UInt<7>("h64") @[StrongEnum.scala 208:15]
    node _T_24 = eq(mod_3.io.out, UInt<7>("h64")) @[StrongEnum.scala 209:23]
    node _T_25 = bits(reset, 0, 0) @[StrongEnum.scala 209:11]
    node _T_26 = eq(_T_25, UInt<1>("h0")) @[StrongEnum.scala 209:11]
    when _T_26 : @[StrongEnum.scala 209:11]
      assert(clock, _T_24, UInt<1>("h1"), "") : assert_6 @[StrongEnum.scala 209:11]
      node _T_27 = eq(_T_24, UInt<1>("h0")) @[StrongEnum.scala 209:11]
      when _T_27 : @[StrongEnum.scala 209:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:209 assert(mod.io.out === enum)\n") : printf_6 @[StrongEnum.scala 209:11]
    node _T_28 = eq(mod_3.io.valid, UInt<1>("h1")) @[StrongEnum.scala 210:25]
    node _T_29 = bits(reset, 0, 0) @[StrongEnum.scala 210:11]
    node _T_30 = eq(_T_29, UInt<1>("h0")) @[StrongEnum.scala 210:11]
    when _T_30 : @[StrongEnum.scala 210:11]
      assert(clock, _T_28, UInt<1>("h1"), "") : assert_7 @[StrongEnum.scala 210:11]
      node _T_31 = eq(_T_28, UInt<1>("h0")) @[StrongEnum.scala 210:11]
      when _T_31 : @[StrongEnum.scala 210:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:210 assert(mod.io.valid === true.B)\n") : printf_7 @[StrongEnum.scala 210:11]
    inst mod_4 of SafeCastFromNonLit_4 @[StrongEnum.scala 207:21]
    mod_4.clock <= clock
    mod_4.reset <= reset
    mod_4.io.in <= UInt<7>("h65") @[StrongEnum.scala 208:15]
    node _T_32 = eq(mod_4.io.out, UInt<7>("h65")) @[StrongEnum.scala 209:23]
    node _T_33 = bits(reset, 0, 0) @[StrongEnum.scala 209:11]
    node _T_34 = eq(_T_33, UInt<1>("h0")) @[StrongEnum.scala 209:11]
    when _T_34 : @[StrongEnum.scala 209:11]
      assert(clock, _T_32, UInt<1>("h1"), "") : assert_8 @[StrongEnum.scala 209:11]
      node _T_35 = eq(_T_32, UInt<1>("h0")) @[StrongEnum.scala 209:11]
      when _T_35 : @[StrongEnum.scala 209:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:209 assert(mod.io.out === enum)\n") : printf_8 @[StrongEnum.scala 209:11]
    node _T_36 = eq(mod_4.io.valid, UInt<1>("h1")) @[StrongEnum.scala 210:25]
    node _T_37 = bits(reset, 0, 0) @[StrongEnum.scala 210:11]
    node _T_38 = eq(_T_37, UInt<1>("h0")) @[StrongEnum.scala 210:11]
    when _T_38 : @[StrongEnum.scala 210:11]
      assert(clock, _T_36, UInt<1>("h1"), "") : assert_9 @[StrongEnum.scala 210:11]
      node _T_39 = eq(_T_36, UInt<1>("h0")) @[StrongEnum.scala 210:11]
      when _T_39 : @[StrongEnum.scala 210:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:210 assert(mod.io.valid === true.B)\n") : printf_9 @[StrongEnum.scala 210:11]
    inst mod_5 of SafeCastFromNonLit_5 @[StrongEnum.scala 217:21]
    mod_5.clock <= clock
    mod_5.reset <= reset
    mod_5.io.in <= UInt<2>("h3") @[StrongEnum.scala 218:15]
    node _T_40 = eq(mod_5.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_41 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_42 = eq(_T_41, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_42 : @[StrongEnum.scala 220:11]
      assert(clock, _T_40, UInt<1>("h1"), "") : assert_10 @[StrongEnum.scala 220:11]
      node _T_43 = eq(_T_40, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_43 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_10 @[StrongEnum.scala 220:11]
    inst mod_6 of SafeCastFromNonLit_6 @[StrongEnum.scala 217:21]
    mod_6.clock <= clock
    mod_6.reset <= reset
    mod_6.io.in <= UInt<3>("h4") @[StrongEnum.scala 218:15]
    node _T_44 = eq(mod_6.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_45 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_46 = eq(_T_45, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_46 : @[StrongEnum.scala 220:11]
      assert(clock, _T_44, UInt<1>("h1"), "") : assert_11 @[StrongEnum.scala 220:11]
      node _T_47 = eq(_T_44, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_47 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_11 @[StrongEnum.scala 220:11]
    inst mod_7 of SafeCastFromNonLit_7 @[StrongEnum.scala 217:21]
    mod_7.clock <= clock
    mod_7.reset <= reset
    mod_7.io.in <= UInt<3>("h5") @[StrongEnum.scala 218:15]
    node _T_48 = eq(mod_7.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_49 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_50 = eq(_T_49, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_50 : @[StrongEnum.scala 220:11]
      assert(clock, _T_48, UInt<1>("h1"), "") : assert_12 @[StrongEnum.scala 220:11]
      node _T_51 = eq(_T_48, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_51 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_12 @[StrongEnum.scala 220:11]
    inst mod_8 of SafeCastFromNonLit_8 @[StrongEnum.scala 217:21]
    mod_8.clock <= clock
    mod_8.reset <= reset
    mod_8.io.in <= UInt<3>("h6") @[StrongEnum.scala 218:15]
    node _T_52 = eq(mod_8.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_53 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_54 = eq(_T_53, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_54 : @[StrongEnum.scala 220:11]
      assert(clock, _T_52, UInt<1>("h1"), "") : assert_13 @[StrongEnum.scala 220:11]
      node _T_55 = eq(_T_52, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_55 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_13 @[StrongEnum.scala 220:11]
    inst mod_9 of SafeCastFromNonLit_9 @[StrongEnum.scala 217:21]
    mod_9.clock <= clock
    mod_9.reset <= reset
    mod_9.io.in <= UInt<3>("h7") @[StrongEnum.scala 218:15]
    node _T_56 = eq(mod_9.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_57 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_58 = eq(_T_57, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_58 : @[StrongEnum.scala 220:11]
      assert(clock, _T_56, UInt<1>("h1"), "") : assert_14 @[StrongEnum.scala 220:11]
      node _T_59 = eq(_T_56, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_59 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_14 @[StrongEnum.scala 220:11]
    inst mod_10 of SafeCastFromNonLit_10 @[StrongEnum.scala 217:21]
    mod_10.clock <= clock
    mod_10.reset <= reset
    mod_10.io.in <= UInt<4>("h8") @[StrongEnum.scala 218:15]
    node _T_60 = eq(mod_10.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_61 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_62 = eq(_T_61, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_62 : @[StrongEnum.scala 220:11]
      assert(clock, _T_60, UInt<1>("h1"), "") : assert_15 @[StrongEnum.scala 220:11]
      node _T_63 = eq(_T_60, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_63 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_15 @[StrongEnum.scala 220:11]
    inst mod_11 of SafeCastFromNonLit_11 @[StrongEnum.scala 217:21]
    mod_11.clock <= clock
    mod_11.reset <= reset
    mod_11.io.in <= UInt<4>("h9") @[StrongEnum.scala 218:15]
    node _T_64 = eq(mod_11.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_65 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_66 = eq(_T_65, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_66 : @[StrongEnum.scala 220:11]
      assert(clock, _T_64, UInt<1>("h1"), "") : assert_16 @[StrongEnum.scala 220:11]
      node _T_67 = eq(_T_64, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_67 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_16 @[StrongEnum.scala 220:11]
    inst mod_12 of SafeCastFromNonLit_12 @[StrongEnum.scala 217:21]
    mod_12.clock <= clock
    mod_12.reset <= reset
    mod_12.io.in <= UInt<4>("ha") @[StrongEnum.scala 218:15]
    node _T_68 = eq(mod_12.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_69 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_70 = eq(_T_69, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_70 : @[StrongEnum.scala 220:11]
      assert(clock, _T_68, UInt<1>("h1"), "") : assert_17 @[StrongEnum.scala 220:11]
      node _T_71 = eq(_T_68, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_71 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_17 @[StrongEnum.scala 220:11]
    inst mod_13 of SafeCastFromNonLit_13 @[StrongEnum.scala 217:21]
    mod_13.clock <= clock
    mod_13.reset <= reset
    mod_13.io.in <= UInt<4>("hb") @[StrongEnum.scala 218:15]
    node _T_72 = eq(mod_13.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_73 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_74 = eq(_T_73, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_74 : @[StrongEnum.scala 220:11]
      assert(clock, _T_72, UInt<1>("h1"), "") : assert_18 @[StrongEnum.scala 220:11]
      node _T_75 = eq(_T_72, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_75 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_18 @[StrongEnum.scala 220:11]
    inst mod_14 of SafeCastFromNonLit_14 @[StrongEnum.scala 217:21]
    mod_14.clock <= clock
    mod_14.reset <= reset
    mod_14.io.in <= UInt<4>("hc") @[StrongEnum.scala 218:15]
    node _T_76 = eq(mod_14.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_77 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_78 = eq(_T_77, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_78 : @[StrongEnum.scala 220:11]
      assert(clock, _T_76, UInt<1>("h1"), "") : assert_19 @[StrongEnum.scala 220:11]
      node _T_79 = eq(_T_76, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_79 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_19 @[StrongEnum.scala 220:11]
    inst mod_15 of SafeCastFromNonLit_15 @[StrongEnum.scala 217:21]
    mod_15.clock <= clock
    mod_15.reset <= reset
    mod_15.io.in <= UInt<4>("hd") @[StrongEnum.scala 218:15]
    node _T_80 = eq(mod_15.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_81 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_82 = eq(_T_81, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_82 : @[StrongEnum.scala 220:11]
      assert(clock, _T_80, UInt<1>("h1"), "") : assert_20 @[StrongEnum.scala 220:11]
      node _T_83 = eq(_T_80, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_83 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_20 @[StrongEnum.scala 220:11]
    inst mod_16 of SafeCastFromNonLit_16 @[StrongEnum.scala 217:21]
    mod_16.clock <= clock
    mod_16.reset <= reset
    mod_16.io.in <= UInt<4>("he") @[StrongEnum.scala 218:15]
    node _T_84 = eq(mod_16.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_85 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_86 = eq(_T_85, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_86 : @[StrongEnum.scala 220:11]
      assert(clock, _T_84, UInt<1>("h1"), "") : assert_21 @[StrongEnum.scala 220:11]
      node _T_87 = eq(_T_84, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_87 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_21 @[StrongEnum.scala 220:11]
    inst mod_17 of SafeCastFromNonLit_17 @[StrongEnum.scala 217:21]
    mod_17.clock <= clock
    mod_17.reset <= reset
    mod_17.io.in <= UInt<4>("hf") @[StrongEnum.scala 218:15]
    node _T_88 = eq(mod_17.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_89 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_90 = eq(_T_89, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_90 : @[StrongEnum.scala 220:11]
      assert(clock, _T_88, UInt<1>("h1"), "") : assert_22 @[StrongEnum.scala 220:11]
      node _T_91 = eq(_T_88, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_91 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_22 @[StrongEnum.scala 220:11]
    inst mod_18 of SafeCastFromNonLit_18 @[StrongEnum.scala 217:21]
    mod_18.clock <= clock
    mod_18.reset <= reset
    mod_18.io.in <= UInt<5>("h10") @[StrongEnum.scala 218:15]
    node _T_92 = eq(mod_18.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_93 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_94 = eq(_T_93, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_94 : @[StrongEnum.scala 220:11]
      assert(clock, _T_92, UInt<1>("h1"), "") : assert_23 @[StrongEnum.scala 220:11]
      node _T_95 = eq(_T_92, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_95 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_23 @[StrongEnum.scala 220:11]
    inst mod_19 of SafeCastFromNonLit_19 @[StrongEnum.scala 217:21]
    mod_19.clock <= clock
    mod_19.reset <= reset
    mod_19.io.in <= UInt<5>("h11") @[StrongEnum.scala 218:15]
    node _T_96 = eq(mod_19.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_97 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_98 = eq(_T_97, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_98 : @[StrongEnum.scala 220:11]
      assert(clock, _T_96, UInt<1>("h1"), "") : assert_24 @[StrongEnum.scala 220:11]
      node _T_99 = eq(_T_96, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_99 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_24 @[StrongEnum.scala 220:11]
    inst mod_20 of SafeCastFromNonLit_20 @[StrongEnum.scala 217:21]
    mod_20.clock <= clock
    mod_20.reset <= reset
    mod_20.io.in <= UInt<5>("h12") @[StrongEnum.scala 218:15]
    node _T_100 = eq(mod_20.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_101 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_102 = eq(_T_101, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_102 : @[StrongEnum.scala 220:11]
      assert(clock, _T_100, UInt<1>("h1"), "") : assert_25 @[StrongEnum.scala 220:11]
      node _T_103 = eq(_T_100, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_103 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_25 @[StrongEnum.scala 220:11]
    inst mod_21 of SafeCastFromNonLit_21 @[StrongEnum.scala 217:21]
    mod_21.clock <= clock
    mod_21.reset <= reset
    mod_21.io.in <= UInt<5>("h13") @[StrongEnum.scala 218:15]
    node _T_104 = eq(mod_21.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_105 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_106 = eq(_T_105, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_106 : @[StrongEnum.scala 220:11]
      assert(clock, _T_104, UInt<1>("h1"), "") : assert_26 @[StrongEnum.scala 220:11]
      node _T_107 = eq(_T_104, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_107 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_26 @[StrongEnum.scala 220:11]
    inst mod_22 of SafeCastFromNonLit_22 @[StrongEnum.scala 217:21]
    mod_22.clock <= clock
    mod_22.reset <= reset
    mod_22.io.in <= UInt<5>("h14") @[StrongEnum.scala 218:15]
    node _T_108 = eq(mod_22.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_109 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_110 = eq(_T_109, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_110 : @[StrongEnum.scala 220:11]
      assert(clock, _T_108, UInt<1>("h1"), "") : assert_27 @[StrongEnum.scala 220:11]
      node _T_111 = eq(_T_108, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_111 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_27 @[StrongEnum.scala 220:11]
    inst mod_23 of SafeCastFromNonLit_23 @[StrongEnum.scala 217:21]
    mod_23.clock <= clock
    mod_23.reset <= reset
    mod_23.io.in <= UInt<5>("h15") @[StrongEnum.scala 218:15]
    node _T_112 = eq(mod_23.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_113 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_114 = eq(_T_113, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_114 : @[StrongEnum.scala 220:11]
      assert(clock, _T_112, UInt<1>("h1"), "") : assert_28 @[StrongEnum.scala 220:11]
      node _T_115 = eq(_T_112, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_115 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_28 @[StrongEnum.scala 220:11]
    inst mod_24 of SafeCastFromNonLit_24 @[StrongEnum.scala 217:21]
    mod_24.clock <= clock
    mod_24.reset <= reset
    mod_24.io.in <= UInt<5>("h16") @[StrongEnum.scala 218:15]
    node _T_116 = eq(mod_24.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_117 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_118 = eq(_T_117, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_118 : @[StrongEnum.scala 220:11]
      assert(clock, _T_116, UInt<1>("h1"), "") : assert_29 @[StrongEnum.scala 220:11]
      node _T_119 = eq(_T_116, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_119 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_29 @[StrongEnum.scala 220:11]
    inst mod_25 of SafeCastFromNonLit_25 @[StrongEnum.scala 217:21]
    mod_25.clock <= clock
    mod_25.reset <= reset
    mod_25.io.in <= UInt<5>("h17") @[StrongEnum.scala 218:15]
    node _T_120 = eq(mod_25.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_121 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_122 = eq(_T_121, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_122 : @[StrongEnum.scala 220:11]
      assert(clock, _T_120, UInt<1>("h1"), "") : assert_30 @[StrongEnum.scala 220:11]
      node _T_123 = eq(_T_120, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_123 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_30 @[StrongEnum.scala 220:11]
    inst mod_26 of SafeCastFromNonLit_26 @[StrongEnum.scala 217:21]
    mod_26.clock <= clock
    mod_26.reset <= reset
    mod_26.io.in <= UInt<5>("h18") @[StrongEnum.scala 218:15]
    node _T_124 = eq(mod_26.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_125 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_126 = eq(_T_125, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_126 : @[StrongEnum.scala 220:11]
      assert(clock, _T_124, UInt<1>("h1"), "") : assert_31 @[StrongEnum.scala 220:11]
      node _T_127 = eq(_T_124, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_127 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_31 @[StrongEnum.scala 220:11]
    inst mod_27 of SafeCastFromNonLit_27 @[StrongEnum.scala 217:21]
    mod_27.clock <= clock
    mod_27.reset <= reset
    mod_27.io.in <= UInt<5>("h19") @[StrongEnum.scala 218:15]
    node _T_128 = eq(mod_27.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_129 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_130 = eq(_T_129, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_130 : @[StrongEnum.scala 220:11]
      assert(clock, _T_128, UInt<1>("h1"), "") : assert_32 @[StrongEnum.scala 220:11]
      node _T_131 = eq(_T_128, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_131 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_32 @[StrongEnum.scala 220:11]
    inst mod_28 of SafeCastFromNonLit_28 @[StrongEnum.scala 217:21]
    mod_28.clock <= clock
    mod_28.reset <= reset
    mod_28.io.in <= UInt<5>("h1a") @[StrongEnum.scala 218:15]
    node _T_132 = eq(mod_28.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_133 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_134 = eq(_T_133, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_134 : @[StrongEnum.scala 220:11]
      assert(clock, _T_132, UInt<1>("h1"), "") : assert_33 @[StrongEnum.scala 220:11]
      node _T_135 = eq(_T_132, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_135 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_33 @[StrongEnum.scala 220:11]
    inst mod_29 of SafeCastFromNonLit_29 @[StrongEnum.scala 217:21]
    mod_29.clock <= clock
    mod_29.reset <= reset
    mod_29.io.in <= UInt<5>("h1b") @[StrongEnum.scala 218:15]
    node _T_136 = eq(mod_29.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_137 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_138 = eq(_T_137, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_138 : @[StrongEnum.scala 220:11]
      assert(clock, _T_136, UInt<1>("h1"), "") : assert_34 @[StrongEnum.scala 220:11]
      node _T_139 = eq(_T_136, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_139 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_34 @[StrongEnum.scala 220:11]
    inst mod_30 of SafeCastFromNonLit_30 @[StrongEnum.scala 217:21]
    mod_30.clock <= clock
    mod_30.reset <= reset
    mod_30.io.in <= UInt<5>("h1c") @[StrongEnum.scala 218:15]
    node _T_140 = eq(mod_30.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_141 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_142 = eq(_T_141, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_142 : @[StrongEnum.scala 220:11]
      assert(clock, _T_140, UInt<1>("h1"), "") : assert_35 @[StrongEnum.scala 220:11]
      node _T_143 = eq(_T_140, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_143 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_35 @[StrongEnum.scala 220:11]
    inst mod_31 of SafeCastFromNonLit_31 @[StrongEnum.scala 217:21]
    mod_31.clock <= clock
    mod_31.reset <= reset
    mod_31.io.in <= UInt<5>("h1d") @[StrongEnum.scala 218:15]
    node _T_144 = eq(mod_31.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_145 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_146 = eq(_T_145, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_146 : @[StrongEnum.scala 220:11]
      assert(clock, _T_144, UInt<1>("h1"), "") : assert_36 @[StrongEnum.scala 220:11]
      node _T_147 = eq(_T_144, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_147 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_36 @[StrongEnum.scala 220:11]
    inst mod_32 of SafeCastFromNonLit_32 @[StrongEnum.scala 217:21]
    mod_32.clock <= clock
    mod_32.reset <= reset
    mod_32.io.in <= UInt<5>("h1e") @[StrongEnum.scala 218:15]
    node _T_148 = eq(mod_32.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_149 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_150 = eq(_T_149, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_150 : @[StrongEnum.scala 220:11]
      assert(clock, _T_148, UInt<1>("h1"), "") : assert_37 @[StrongEnum.scala 220:11]
      node _T_151 = eq(_T_148, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_151 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_37 @[StrongEnum.scala 220:11]
    inst mod_33 of SafeCastFromNonLit_33 @[StrongEnum.scala 217:21]
    mod_33.clock <= clock
    mod_33.reset <= reset
    mod_33.io.in <= UInt<5>("h1f") @[StrongEnum.scala 218:15]
    node _T_152 = eq(mod_33.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_153 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_154 = eq(_T_153, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_154 : @[StrongEnum.scala 220:11]
      assert(clock, _T_152, UInt<1>("h1"), "") : assert_38 @[StrongEnum.scala 220:11]
      node _T_155 = eq(_T_152, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_155 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_38 @[StrongEnum.scala 220:11]
    inst mod_34 of SafeCastFromNonLit_34 @[StrongEnum.scala 217:21]
    mod_34.clock <= clock
    mod_34.reset <= reset
    mod_34.io.in <= UInt<6>("h20") @[StrongEnum.scala 218:15]
    node _T_156 = eq(mod_34.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_157 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_158 = eq(_T_157, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_158 : @[StrongEnum.scala 220:11]
      assert(clock, _T_156, UInt<1>("h1"), "") : assert_39 @[StrongEnum.scala 220:11]
      node _T_159 = eq(_T_156, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_159 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_39 @[StrongEnum.scala 220:11]
    inst mod_35 of SafeCastFromNonLit_35 @[StrongEnum.scala 217:21]
    mod_35.clock <= clock
    mod_35.reset <= reset
    mod_35.io.in <= UInt<6>("h21") @[StrongEnum.scala 218:15]
    node _T_160 = eq(mod_35.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_161 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_162 = eq(_T_161, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_162 : @[StrongEnum.scala 220:11]
      assert(clock, _T_160, UInt<1>("h1"), "") : assert_40 @[StrongEnum.scala 220:11]
      node _T_163 = eq(_T_160, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_163 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_40 @[StrongEnum.scala 220:11]
    inst mod_36 of SafeCastFromNonLit_36 @[StrongEnum.scala 217:21]
    mod_36.clock <= clock
    mod_36.reset <= reset
    mod_36.io.in <= UInt<6>("h22") @[StrongEnum.scala 218:15]
    node _T_164 = eq(mod_36.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_165 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_166 = eq(_T_165, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_166 : @[StrongEnum.scala 220:11]
      assert(clock, _T_164, UInt<1>("h1"), "") : assert_41 @[StrongEnum.scala 220:11]
      node _T_167 = eq(_T_164, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_167 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_41 @[StrongEnum.scala 220:11]
    inst mod_37 of SafeCastFromNonLit_37 @[StrongEnum.scala 217:21]
    mod_37.clock <= clock
    mod_37.reset <= reset
    mod_37.io.in <= UInt<6>("h23") @[StrongEnum.scala 218:15]
    node _T_168 = eq(mod_37.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_169 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_170 = eq(_T_169, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_170 : @[StrongEnum.scala 220:11]
      assert(clock, _T_168, UInt<1>("h1"), "") : assert_42 @[StrongEnum.scala 220:11]
      node _T_171 = eq(_T_168, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_171 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_42 @[StrongEnum.scala 220:11]
    inst mod_38 of SafeCastFromNonLit_38 @[StrongEnum.scala 217:21]
    mod_38.clock <= clock
    mod_38.reset <= reset
    mod_38.io.in <= UInt<6>("h24") @[StrongEnum.scala 218:15]
    node _T_172 = eq(mod_38.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_173 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_174 = eq(_T_173, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_174 : @[StrongEnum.scala 220:11]
      assert(clock, _T_172, UInt<1>("h1"), "") : assert_43 @[StrongEnum.scala 220:11]
      node _T_175 = eq(_T_172, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_175 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_43 @[StrongEnum.scala 220:11]
    inst mod_39 of SafeCastFromNonLit_39 @[StrongEnum.scala 217:21]
    mod_39.clock <= clock
    mod_39.reset <= reset
    mod_39.io.in <= UInt<6>("h25") @[StrongEnum.scala 218:15]
    node _T_176 = eq(mod_39.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_177 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_178 = eq(_T_177, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_178 : @[StrongEnum.scala 220:11]
      assert(clock, _T_176, UInt<1>("h1"), "") : assert_44 @[StrongEnum.scala 220:11]
      node _T_179 = eq(_T_176, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_179 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_44 @[StrongEnum.scala 220:11]
    inst mod_40 of SafeCastFromNonLit_40 @[StrongEnum.scala 217:21]
    mod_40.clock <= clock
    mod_40.reset <= reset
    mod_40.io.in <= UInt<6>("h26") @[StrongEnum.scala 218:15]
    node _T_180 = eq(mod_40.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_181 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_182 = eq(_T_181, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_182 : @[StrongEnum.scala 220:11]
      assert(clock, _T_180, UInt<1>("h1"), "") : assert_45 @[StrongEnum.scala 220:11]
      node _T_183 = eq(_T_180, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_183 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_45 @[StrongEnum.scala 220:11]
    inst mod_41 of SafeCastFromNonLit_41 @[StrongEnum.scala 217:21]
    mod_41.clock <= clock
    mod_41.reset <= reset
    mod_41.io.in <= UInt<6>("h27") @[StrongEnum.scala 218:15]
    node _T_184 = eq(mod_41.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_185 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_186 = eq(_T_185, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_186 : @[StrongEnum.scala 220:11]
      assert(clock, _T_184, UInt<1>("h1"), "") : assert_46 @[StrongEnum.scala 220:11]
      node _T_187 = eq(_T_184, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_187 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_46 @[StrongEnum.scala 220:11]
    inst mod_42 of SafeCastFromNonLit_42 @[StrongEnum.scala 217:21]
    mod_42.clock <= clock
    mod_42.reset <= reset
    mod_42.io.in <= UInt<6>("h28") @[StrongEnum.scala 218:15]
    node _T_188 = eq(mod_42.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_189 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_190 = eq(_T_189, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_190 : @[StrongEnum.scala 220:11]
      assert(clock, _T_188, UInt<1>("h1"), "") : assert_47 @[StrongEnum.scala 220:11]
      node _T_191 = eq(_T_188, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_191 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_47 @[StrongEnum.scala 220:11]
    inst mod_43 of SafeCastFromNonLit_43 @[StrongEnum.scala 217:21]
    mod_43.clock <= clock
    mod_43.reset <= reset
    mod_43.io.in <= UInt<6>("h29") @[StrongEnum.scala 218:15]
    node _T_192 = eq(mod_43.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_193 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_194 = eq(_T_193, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_194 : @[StrongEnum.scala 220:11]
      assert(clock, _T_192, UInt<1>("h1"), "") : assert_48 @[StrongEnum.scala 220:11]
      node _T_195 = eq(_T_192, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_195 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_48 @[StrongEnum.scala 220:11]
    inst mod_44 of SafeCastFromNonLit_44 @[StrongEnum.scala 217:21]
    mod_44.clock <= clock
    mod_44.reset <= reset
    mod_44.io.in <= UInt<6>("h2a") @[StrongEnum.scala 218:15]
    node _T_196 = eq(mod_44.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_197 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_198 = eq(_T_197, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_198 : @[StrongEnum.scala 220:11]
      assert(clock, _T_196, UInt<1>("h1"), "") : assert_49 @[StrongEnum.scala 220:11]
      node _T_199 = eq(_T_196, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_199 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_49 @[StrongEnum.scala 220:11]
    inst mod_45 of SafeCastFromNonLit_45 @[StrongEnum.scala 217:21]
    mod_45.clock <= clock
    mod_45.reset <= reset
    mod_45.io.in <= UInt<6>("h2b") @[StrongEnum.scala 218:15]
    node _T_200 = eq(mod_45.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_201 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_202 = eq(_T_201, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_202 : @[StrongEnum.scala 220:11]
      assert(clock, _T_200, UInt<1>("h1"), "") : assert_50 @[StrongEnum.scala 220:11]
      node _T_203 = eq(_T_200, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_203 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_50 @[StrongEnum.scala 220:11]
    inst mod_46 of SafeCastFromNonLit_46 @[StrongEnum.scala 217:21]
    mod_46.clock <= clock
    mod_46.reset <= reset
    mod_46.io.in <= UInt<6>("h2c") @[StrongEnum.scala 218:15]
    node _T_204 = eq(mod_46.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_205 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_206 = eq(_T_205, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_206 : @[StrongEnum.scala 220:11]
      assert(clock, _T_204, UInt<1>("h1"), "") : assert_51 @[StrongEnum.scala 220:11]
      node _T_207 = eq(_T_204, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_207 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_51 @[StrongEnum.scala 220:11]
    inst mod_47 of SafeCastFromNonLit_47 @[StrongEnum.scala 217:21]
    mod_47.clock <= clock
    mod_47.reset <= reset
    mod_47.io.in <= UInt<6>("h2d") @[StrongEnum.scala 218:15]
    node _T_208 = eq(mod_47.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_209 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_210 = eq(_T_209, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_210 : @[StrongEnum.scala 220:11]
      assert(clock, _T_208, UInt<1>("h1"), "") : assert_52 @[StrongEnum.scala 220:11]
      node _T_211 = eq(_T_208, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_211 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_52 @[StrongEnum.scala 220:11]
    inst mod_48 of SafeCastFromNonLit_48 @[StrongEnum.scala 217:21]
    mod_48.clock <= clock
    mod_48.reset <= reset
    mod_48.io.in <= UInt<6>("h2e") @[StrongEnum.scala 218:15]
    node _T_212 = eq(mod_48.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_213 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_214 = eq(_T_213, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_214 : @[StrongEnum.scala 220:11]
      assert(clock, _T_212, UInt<1>("h1"), "") : assert_53 @[StrongEnum.scala 220:11]
      node _T_215 = eq(_T_212, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_215 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_53 @[StrongEnum.scala 220:11]
    inst mod_49 of SafeCastFromNonLit_49 @[StrongEnum.scala 217:21]
    mod_49.clock <= clock
    mod_49.reset <= reset
    mod_49.io.in <= UInt<6>("h2f") @[StrongEnum.scala 218:15]
    node _T_216 = eq(mod_49.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_217 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_218 = eq(_T_217, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_218 : @[StrongEnum.scala 220:11]
      assert(clock, _T_216, UInt<1>("h1"), "") : assert_54 @[StrongEnum.scala 220:11]
      node _T_219 = eq(_T_216, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_219 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_54 @[StrongEnum.scala 220:11]
    inst mod_50 of SafeCastFromNonLit_50 @[StrongEnum.scala 217:21]
    mod_50.clock <= clock
    mod_50.reset <= reset
    mod_50.io.in <= UInt<6>("h30") @[StrongEnum.scala 218:15]
    node _T_220 = eq(mod_50.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_221 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_222 = eq(_T_221, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_222 : @[StrongEnum.scala 220:11]
      assert(clock, _T_220, UInt<1>("h1"), "") : assert_55 @[StrongEnum.scala 220:11]
      node _T_223 = eq(_T_220, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_223 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_55 @[StrongEnum.scala 220:11]
    inst mod_51 of SafeCastFromNonLit_51 @[StrongEnum.scala 217:21]
    mod_51.clock <= clock
    mod_51.reset <= reset
    mod_51.io.in <= UInt<6>("h31") @[StrongEnum.scala 218:15]
    node _T_224 = eq(mod_51.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_225 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_226 = eq(_T_225, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_226 : @[StrongEnum.scala 220:11]
      assert(clock, _T_224, UInt<1>("h1"), "") : assert_56 @[StrongEnum.scala 220:11]
      node _T_227 = eq(_T_224, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_227 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_56 @[StrongEnum.scala 220:11]
    inst mod_52 of SafeCastFromNonLit_52 @[StrongEnum.scala 217:21]
    mod_52.clock <= clock
    mod_52.reset <= reset
    mod_52.io.in <= UInt<6>("h32") @[StrongEnum.scala 218:15]
    node _T_228 = eq(mod_52.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_229 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_230 = eq(_T_229, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_230 : @[StrongEnum.scala 220:11]
      assert(clock, _T_228, UInt<1>("h1"), "") : assert_57 @[StrongEnum.scala 220:11]
      node _T_231 = eq(_T_228, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_231 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_57 @[StrongEnum.scala 220:11]
    inst mod_53 of SafeCastFromNonLit_53 @[StrongEnum.scala 217:21]
    mod_53.clock <= clock
    mod_53.reset <= reset
    mod_53.io.in <= UInt<6>("h33") @[StrongEnum.scala 218:15]
    node _T_232 = eq(mod_53.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_233 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_234 = eq(_T_233, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_234 : @[StrongEnum.scala 220:11]
      assert(clock, _T_232, UInt<1>("h1"), "") : assert_58 @[StrongEnum.scala 220:11]
      node _T_235 = eq(_T_232, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_235 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_58 @[StrongEnum.scala 220:11]
    inst mod_54 of SafeCastFromNonLit_54 @[StrongEnum.scala 217:21]
    mod_54.clock <= clock
    mod_54.reset <= reset
    mod_54.io.in <= UInt<6>("h34") @[StrongEnum.scala 218:15]
    node _T_236 = eq(mod_54.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_237 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_238 = eq(_T_237, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_238 : @[StrongEnum.scala 220:11]
      assert(clock, _T_236, UInt<1>("h1"), "") : assert_59 @[StrongEnum.scala 220:11]
      node _T_239 = eq(_T_236, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_239 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_59 @[StrongEnum.scala 220:11]
    inst mod_55 of SafeCastFromNonLit_55 @[StrongEnum.scala 217:21]
    mod_55.clock <= clock
    mod_55.reset <= reset
    mod_55.io.in <= UInt<6>("h35") @[StrongEnum.scala 218:15]
    node _T_240 = eq(mod_55.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_241 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_242 = eq(_T_241, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_242 : @[StrongEnum.scala 220:11]
      assert(clock, _T_240, UInt<1>("h1"), "") : assert_60 @[StrongEnum.scala 220:11]
      node _T_243 = eq(_T_240, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_243 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_60 @[StrongEnum.scala 220:11]
    inst mod_56 of SafeCastFromNonLit_56 @[StrongEnum.scala 217:21]
    mod_56.clock <= clock
    mod_56.reset <= reset
    mod_56.io.in <= UInt<6>("h36") @[StrongEnum.scala 218:15]
    node _T_244 = eq(mod_56.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_245 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_246 = eq(_T_245, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_246 : @[StrongEnum.scala 220:11]
      assert(clock, _T_244, UInt<1>("h1"), "") : assert_61 @[StrongEnum.scala 220:11]
      node _T_247 = eq(_T_244, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_247 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_61 @[StrongEnum.scala 220:11]
    inst mod_57 of SafeCastFromNonLit_57 @[StrongEnum.scala 217:21]
    mod_57.clock <= clock
    mod_57.reset <= reset
    mod_57.io.in <= UInt<6>("h37") @[StrongEnum.scala 218:15]
    node _T_248 = eq(mod_57.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_249 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_250 = eq(_T_249, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_250 : @[StrongEnum.scala 220:11]
      assert(clock, _T_248, UInt<1>("h1"), "") : assert_62 @[StrongEnum.scala 220:11]
      node _T_251 = eq(_T_248, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_251 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_62 @[StrongEnum.scala 220:11]
    inst mod_58 of SafeCastFromNonLit_58 @[StrongEnum.scala 217:21]
    mod_58.clock <= clock
    mod_58.reset <= reset
    mod_58.io.in <= UInt<6>("h38") @[StrongEnum.scala 218:15]
    node _T_252 = eq(mod_58.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_253 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_254 = eq(_T_253, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_254 : @[StrongEnum.scala 220:11]
      assert(clock, _T_252, UInt<1>("h1"), "") : assert_63 @[StrongEnum.scala 220:11]
      node _T_255 = eq(_T_252, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_255 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_63 @[StrongEnum.scala 220:11]
    inst mod_59 of SafeCastFromNonLit_59 @[StrongEnum.scala 217:21]
    mod_59.clock <= clock
    mod_59.reset <= reset
    mod_59.io.in <= UInt<6>("h39") @[StrongEnum.scala 218:15]
    node _T_256 = eq(mod_59.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_257 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_258 = eq(_T_257, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_258 : @[StrongEnum.scala 220:11]
      assert(clock, _T_256, UInt<1>("h1"), "") : assert_64 @[StrongEnum.scala 220:11]
      node _T_259 = eq(_T_256, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_259 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_64 @[StrongEnum.scala 220:11]
    inst mod_60 of SafeCastFromNonLit_60 @[StrongEnum.scala 217:21]
    mod_60.clock <= clock
    mod_60.reset <= reset
    mod_60.io.in <= UInt<6>("h3a") @[StrongEnum.scala 218:15]
    node _T_260 = eq(mod_60.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_261 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_262 = eq(_T_261, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_262 : @[StrongEnum.scala 220:11]
      assert(clock, _T_260, UInt<1>("h1"), "") : assert_65 @[StrongEnum.scala 220:11]
      node _T_263 = eq(_T_260, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_263 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_65 @[StrongEnum.scala 220:11]
    inst mod_61 of SafeCastFromNonLit_61 @[StrongEnum.scala 217:21]
    mod_61.clock <= clock
    mod_61.reset <= reset
    mod_61.io.in <= UInt<6>("h3b") @[StrongEnum.scala 218:15]
    node _T_264 = eq(mod_61.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_265 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_266 = eq(_T_265, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_266 : @[StrongEnum.scala 220:11]
      assert(clock, _T_264, UInt<1>("h1"), "") : assert_66 @[StrongEnum.scala 220:11]
      node _T_267 = eq(_T_264, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_267 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_66 @[StrongEnum.scala 220:11]
    inst mod_62 of SafeCastFromNonLit_62 @[StrongEnum.scala 217:21]
    mod_62.clock <= clock
    mod_62.reset <= reset
    mod_62.io.in <= UInt<6>("h3c") @[StrongEnum.scala 218:15]
    node _T_268 = eq(mod_62.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_269 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_270 = eq(_T_269, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_270 : @[StrongEnum.scala 220:11]
      assert(clock, _T_268, UInt<1>("h1"), "") : assert_67 @[StrongEnum.scala 220:11]
      node _T_271 = eq(_T_268, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_271 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_67 @[StrongEnum.scala 220:11]
    inst mod_63 of SafeCastFromNonLit_63 @[StrongEnum.scala 217:21]
    mod_63.clock <= clock
    mod_63.reset <= reset
    mod_63.io.in <= UInt<6>("h3d") @[StrongEnum.scala 218:15]
    node _T_272 = eq(mod_63.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_273 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_274 = eq(_T_273, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_274 : @[StrongEnum.scala 220:11]
      assert(clock, _T_272, UInt<1>("h1"), "") : assert_68 @[StrongEnum.scala 220:11]
      node _T_275 = eq(_T_272, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_275 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_68 @[StrongEnum.scala 220:11]
    inst mod_64 of SafeCastFromNonLit_64 @[StrongEnum.scala 217:21]
    mod_64.clock <= clock
    mod_64.reset <= reset
    mod_64.io.in <= UInt<6>("h3e") @[StrongEnum.scala 218:15]
    node _T_276 = eq(mod_64.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_277 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_278 = eq(_T_277, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_278 : @[StrongEnum.scala 220:11]
      assert(clock, _T_276, UInt<1>("h1"), "") : assert_69 @[StrongEnum.scala 220:11]
      node _T_279 = eq(_T_276, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_279 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_69 @[StrongEnum.scala 220:11]
    inst mod_65 of SafeCastFromNonLit_65 @[StrongEnum.scala 217:21]
    mod_65.clock <= clock
    mod_65.reset <= reset
    mod_65.io.in <= UInt<6>("h3f") @[StrongEnum.scala 218:15]
    node _T_280 = eq(mod_65.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_281 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_282 = eq(_T_281, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_282 : @[StrongEnum.scala 220:11]
      assert(clock, _T_280, UInt<1>("h1"), "") : assert_70 @[StrongEnum.scala 220:11]
      node _T_283 = eq(_T_280, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_283 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_70 @[StrongEnum.scala 220:11]
    inst mod_66 of SafeCastFromNonLit_66 @[StrongEnum.scala 217:21]
    mod_66.clock <= clock
    mod_66.reset <= reset
    mod_66.io.in <= UInt<7>("h40") @[StrongEnum.scala 218:15]
    node _T_284 = eq(mod_66.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_285 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_286 = eq(_T_285, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_286 : @[StrongEnum.scala 220:11]
      assert(clock, _T_284, UInt<1>("h1"), "") : assert_71 @[StrongEnum.scala 220:11]
      node _T_287 = eq(_T_284, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_287 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_71 @[StrongEnum.scala 220:11]
    inst mod_67 of SafeCastFromNonLit_67 @[StrongEnum.scala 217:21]
    mod_67.clock <= clock
    mod_67.reset <= reset
    mod_67.io.in <= UInt<7>("h41") @[StrongEnum.scala 218:15]
    node _T_288 = eq(mod_67.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_289 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_290 = eq(_T_289, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_290 : @[StrongEnum.scala 220:11]
      assert(clock, _T_288, UInt<1>("h1"), "") : assert_72 @[StrongEnum.scala 220:11]
      node _T_291 = eq(_T_288, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_291 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_72 @[StrongEnum.scala 220:11]
    inst mod_68 of SafeCastFromNonLit_68 @[StrongEnum.scala 217:21]
    mod_68.clock <= clock
    mod_68.reset <= reset
    mod_68.io.in <= UInt<7>("h42") @[StrongEnum.scala 218:15]
    node _T_292 = eq(mod_68.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_293 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_294 = eq(_T_293, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_294 : @[StrongEnum.scala 220:11]
      assert(clock, _T_292, UInt<1>("h1"), "") : assert_73 @[StrongEnum.scala 220:11]
      node _T_295 = eq(_T_292, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_295 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_73 @[StrongEnum.scala 220:11]
    inst mod_69 of SafeCastFromNonLit_69 @[StrongEnum.scala 217:21]
    mod_69.clock <= clock
    mod_69.reset <= reset
    mod_69.io.in <= UInt<7>("h43") @[StrongEnum.scala 218:15]
    node _T_296 = eq(mod_69.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_297 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_298 = eq(_T_297, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_298 : @[StrongEnum.scala 220:11]
      assert(clock, _T_296, UInt<1>("h1"), "") : assert_74 @[StrongEnum.scala 220:11]
      node _T_299 = eq(_T_296, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_299 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_74 @[StrongEnum.scala 220:11]
    inst mod_70 of SafeCastFromNonLit_70 @[StrongEnum.scala 217:21]
    mod_70.clock <= clock
    mod_70.reset <= reset
    mod_70.io.in <= UInt<7>("h44") @[StrongEnum.scala 218:15]
    node _T_300 = eq(mod_70.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_301 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_302 = eq(_T_301, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_302 : @[StrongEnum.scala 220:11]
      assert(clock, _T_300, UInt<1>("h1"), "") : assert_75 @[StrongEnum.scala 220:11]
      node _T_303 = eq(_T_300, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_303 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_75 @[StrongEnum.scala 220:11]
    inst mod_71 of SafeCastFromNonLit_71 @[StrongEnum.scala 217:21]
    mod_71.clock <= clock
    mod_71.reset <= reset
    mod_71.io.in <= UInt<7>("h45") @[StrongEnum.scala 218:15]
    node _T_304 = eq(mod_71.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_305 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_306 = eq(_T_305, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_306 : @[StrongEnum.scala 220:11]
      assert(clock, _T_304, UInt<1>("h1"), "") : assert_76 @[StrongEnum.scala 220:11]
      node _T_307 = eq(_T_304, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_307 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_76 @[StrongEnum.scala 220:11]
    inst mod_72 of SafeCastFromNonLit_72 @[StrongEnum.scala 217:21]
    mod_72.clock <= clock
    mod_72.reset <= reset
    mod_72.io.in <= UInt<7>("h46") @[StrongEnum.scala 218:15]
    node _T_308 = eq(mod_72.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_309 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_310 = eq(_T_309, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_310 : @[StrongEnum.scala 220:11]
      assert(clock, _T_308, UInt<1>("h1"), "") : assert_77 @[StrongEnum.scala 220:11]
      node _T_311 = eq(_T_308, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_311 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_77 @[StrongEnum.scala 220:11]
    inst mod_73 of SafeCastFromNonLit_73 @[StrongEnum.scala 217:21]
    mod_73.clock <= clock
    mod_73.reset <= reset
    mod_73.io.in <= UInt<7>("h47") @[StrongEnum.scala 218:15]
    node _T_312 = eq(mod_73.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_313 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_314 = eq(_T_313, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_314 : @[StrongEnum.scala 220:11]
      assert(clock, _T_312, UInt<1>("h1"), "") : assert_78 @[StrongEnum.scala 220:11]
      node _T_315 = eq(_T_312, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_315 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_78 @[StrongEnum.scala 220:11]
    inst mod_74 of SafeCastFromNonLit_74 @[StrongEnum.scala 217:21]
    mod_74.clock <= clock
    mod_74.reset <= reset
    mod_74.io.in <= UInt<7>("h48") @[StrongEnum.scala 218:15]
    node _T_316 = eq(mod_74.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_317 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_318 = eq(_T_317, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_318 : @[StrongEnum.scala 220:11]
      assert(clock, _T_316, UInt<1>("h1"), "") : assert_79 @[StrongEnum.scala 220:11]
      node _T_319 = eq(_T_316, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_319 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_79 @[StrongEnum.scala 220:11]
    inst mod_75 of SafeCastFromNonLit_75 @[StrongEnum.scala 217:21]
    mod_75.clock <= clock
    mod_75.reset <= reset
    mod_75.io.in <= UInt<7>("h49") @[StrongEnum.scala 218:15]
    node _T_320 = eq(mod_75.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_321 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_322 = eq(_T_321, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_322 : @[StrongEnum.scala 220:11]
      assert(clock, _T_320, UInt<1>("h1"), "") : assert_80 @[StrongEnum.scala 220:11]
      node _T_323 = eq(_T_320, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_323 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_80 @[StrongEnum.scala 220:11]
    inst mod_76 of SafeCastFromNonLit_76 @[StrongEnum.scala 217:21]
    mod_76.clock <= clock
    mod_76.reset <= reset
    mod_76.io.in <= UInt<7>("h4a") @[StrongEnum.scala 218:15]
    node _T_324 = eq(mod_76.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_325 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_326 = eq(_T_325, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_326 : @[StrongEnum.scala 220:11]
      assert(clock, _T_324, UInt<1>("h1"), "") : assert_81 @[StrongEnum.scala 220:11]
      node _T_327 = eq(_T_324, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_327 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_81 @[StrongEnum.scala 220:11]
    inst mod_77 of SafeCastFromNonLit_77 @[StrongEnum.scala 217:21]
    mod_77.clock <= clock
    mod_77.reset <= reset
    mod_77.io.in <= UInt<7>("h4b") @[StrongEnum.scala 218:15]
    node _T_328 = eq(mod_77.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_329 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_330 = eq(_T_329, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_330 : @[StrongEnum.scala 220:11]
      assert(clock, _T_328, UInt<1>("h1"), "") : assert_82 @[StrongEnum.scala 220:11]
      node _T_331 = eq(_T_328, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_331 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_82 @[StrongEnum.scala 220:11]
    inst mod_78 of SafeCastFromNonLit_78 @[StrongEnum.scala 217:21]
    mod_78.clock <= clock
    mod_78.reset <= reset
    mod_78.io.in <= UInt<7>("h4c") @[StrongEnum.scala 218:15]
    node _T_332 = eq(mod_78.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_333 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_334 = eq(_T_333, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_334 : @[StrongEnum.scala 220:11]
      assert(clock, _T_332, UInt<1>("h1"), "") : assert_83 @[StrongEnum.scala 220:11]
      node _T_335 = eq(_T_332, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_335 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_83 @[StrongEnum.scala 220:11]
    inst mod_79 of SafeCastFromNonLit_79 @[StrongEnum.scala 217:21]
    mod_79.clock <= clock
    mod_79.reset <= reset
    mod_79.io.in <= UInt<7>("h4d") @[StrongEnum.scala 218:15]
    node _T_336 = eq(mod_79.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_337 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_338 = eq(_T_337, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_338 : @[StrongEnum.scala 220:11]
      assert(clock, _T_336, UInt<1>("h1"), "") : assert_84 @[StrongEnum.scala 220:11]
      node _T_339 = eq(_T_336, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_339 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_84 @[StrongEnum.scala 220:11]
    inst mod_80 of SafeCastFromNonLit_80 @[StrongEnum.scala 217:21]
    mod_80.clock <= clock
    mod_80.reset <= reset
    mod_80.io.in <= UInt<7>("h4e") @[StrongEnum.scala 218:15]
    node _T_340 = eq(mod_80.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_341 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_342 = eq(_T_341, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_342 : @[StrongEnum.scala 220:11]
      assert(clock, _T_340, UInt<1>("h1"), "") : assert_85 @[StrongEnum.scala 220:11]
      node _T_343 = eq(_T_340, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_343 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_85 @[StrongEnum.scala 220:11]
    inst mod_81 of SafeCastFromNonLit_81 @[StrongEnum.scala 217:21]
    mod_81.clock <= clock
    mod_81.reset <= reset
    mod_81.io.in <= UInt<7>("h4f") @[StrongEnum.scala 218:15]
    node _T_344 = eq(mod_81.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_345 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_346 = eq(_T_345, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_346 : @[StrongEnum.scala 220:11]
      assert(clock, _T_344, UInt<1>("h1"), "") : assert_86 @[StrongEnum.scala 220:11]
      node _T_347 = eq(_T_344, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_347 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_86 @[StrongEnum.scala 220:11]
    inst mod_82 of SafeCastFromNonLit_82 @[StrongEnum.scala 217:21]
    mod_82.clock <= clock
    mod_82.reset <= reset
    mod_82.io.in <= UInt<7>("h50") @[StrongEnum.scala 218:15]
    node _T_348 = eq(mod_82.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_349 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_350 = eq(_T_349, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_350 : @[StrongEnum.scala 220:11]
      assert(clock, _T_348, UInt<1>("h1"), "") : assert_87 @[StrongEnum.scala 220:11]
      node _T_351 = eq(_T_348, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_351 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_87 @[StrongEnum.scala 220:11]
    inst mod_83 of SafeCastFromNonLit_83 @[StrongEnum.scala 217:21]
    mod_83.clock <= clock
    mod_83.reset <= reset
    mod_83.io.in <= UInt<7>("h51") @[StrongEnum.scala 218:15]
    node _T_352 = eq(mod_83.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_353 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_354 = eq(_T_353, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_354 : @[StrongEnum.scala 220:11]
      assert(clock, _T_352, UInt<1>("h1"), "") : assert_88 @[StrongEnum.scala 220:11]
      node _T_355 = eq(_T_352, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_355 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_88 @[StrongEnum.scala 220:11]
    inst mod_84 of SafeCastFromNonLit_84 @[StrongEnum.scala 217:21]
    mod_84.clock <= clock
    mod_84.reset <= reset
    mod_84.io.in <= UInt<7>("h52") @[StrongEnum.scala 218:15]
    node _T_356 = eq(mod_84.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_357 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_358 = eq(_T_357, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_358 : @[StrongEnum.scala 220:11]
      assert(clock, _T_356, UInt<1>("h1"), "") : assert_89 @[StrongEnum.scala 220:11]
      node _T_359 = eq(_T_356, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_359 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_89 @[StrongEnum.scala 220:11]
    inst mod_85 of SafeCastFromNonLit_85 @[StrongEnum.scala 217:21]
    mod_85.clock <= clock
    mod_85.reset <= reset
    mod_85.io.in <= UInt<7>("h53") @[StrongEnum.scala 218:15]
    node _T_360 = eq(mod_85.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_361 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_362 = eq(_T_361, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_362 : @[StrongEnum.scala 220:11]
      assert(clock, _T_360, UInt<1>("h1"), "") : assert_90 @[StrongEnum.scala 220:11]
      node _T_363 = eq(_T_360, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_363 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_90 @[StrongEnum.scala 220:11]
    inst mod_86 of SafeCastFromNonLit_86 @[StrongEnum.scala 217:21]
    mod_86.clock <= clock
    mod_86.reset <= reset
    mod_86.io.in <= UInt<7>("h54") @[StrongEnum.scala 218:15]
    node _T_364 = eq(mod_86.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_365 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_366 = eq(_T_365, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_366 : @[StrongEnum.scala 220:11]
      assert(clock, _T_364, UInt<1>("h1"), "") : assert_91 @[StrongEnum.scala 220:11]
      node _T_367 = eq(_T_364, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_367 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_91 @[StrongEnum.scala 220:11]
    inst mod_87 of SafeCastFromNonLit_87 @[StrongEnum.scala 217:21]
    mod_87.clock <= clock
    mod_87.reset <= reset
    mod_87.io.in <= UInt<7>("h55") @[StrongEnum.scala 218:15]
    node _T_368 = eq(mod_87.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_369 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_370 = eq(_T_369, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_370 : @[StrongEnum.scala 220:11]
      assert(clock, _T_368, UInt<1>("h1"), "") : assert_92 @[StrongEnum.scala 220:11]
      node _T_371 = eq(_T_368, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_371 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_92 @[StrongEnum.scala 220:11]
    inst mod_88 of SafeCastFromNonLit_88 @[StrongEnum.scala 217:21]
    mod_88.clock <= clock
    mod_88.reset <= reset
    mod_88.io.in <= UInt<7>("h56") @[StrongEnum.scala 218:15]
    node _T_372 = eq(mod_88.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_373 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_374 = eq(_T_373, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_374 : @[StrongEnum.scala 220:11]
      assert(clock, _T_372, UInt<1>("h1"), "") : assert_93 @[StrongEnum.scala 220:11]
      node _T_375 = eq(_T_372, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_375 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_93 @[StrongEnum.scala 220:11]
    inst mod_89 of SafeCastFromNonLit_89 @[StrongEnum.scala 217:21]
    mod_89.clock <= clock
    mod_89.reset <= reset
    mod_89.io.in <= UInt<7>("h57") @[StrongEnum.scala 218:15]
    node _T_376 = eq(mod_89.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_377 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_378 = eq(_T_377, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_378 : @[StrongEnum.scala 220:11]
      assert(clock, _T_376, UInt<1>("h1"), "") : assert_94 @[StrongEnum.scala 220:11]
      node _T_379 = eq(_T_376, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_379 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_94 @[StrongEnum.scala 220:11]
    inst mod_90 of SafeCastFromNonLit_90 @[StrongEnum.scala 217:21]
    mod_90.clock <= clock
    mod_90.reset <= reset
    mod_90.io.in <= UInt<7>("h58") @[StrongEnum.scala 218:15]
    node _T_380 = eq(mod_90.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_381 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_382 = eq(_T_381, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_382 : @[StrongEnum.scala 220:11]
      assert(clock, _T_380, UInt<1>("h1"), "") : assert_95 @[StrongEnum.scala 220:11]
      node _T_383 = eq(_T_380, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_383 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_95 @[StrongEnum.scala 220:11]
    inst mod_91 of SafeCastFromNonLit_91 @[StrongEnum.scala 217:21]
    mod_91.clock <= clock
    mod_91.reset <= reset
    mod_91.io.in <= UInt<7>("h59") @[StrongEnum.scala 218:15]
    node _T_384 = eq(mod_91.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_385 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_386 = eq(_T_385, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_386 : @[StrongEnum.scala 220:11]
      assert(clock, _T_384, UInt<1>("h1"), "") : assert_96 @[StrongEnum.scala 220:11]
      node _T_387 = eq(_T_384, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_387 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_96 @[StrongEnum.scala 220:11]
    inst mod_92 of SafeCastFromNonLit_92 @[StrongEnum.scala 217:21]
    mod_92.clock <= clock
    mod_92.reset <= reset
    mod_92.io.in <= UInt<7>("h5a") @[StrongEnum.scala 218:15]
    node _T_388 = eq(mod_92.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_389 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_390 = eq(_T_389, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_390 : @[StrongEnum.scala 220:11]
      assert(clock, _T_388, UInt<1>("h1"), "") : assert_97 @[StrongEnum.scala 220:11]
      node _T_391 = eq(_T_388, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_391 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_97 @[StrongEnum.scala 220:11]
    inst mod_93 of SafeCastFromNonLit_93 @[StrongEnum.scala 217:21]
    mod_93.clock <= clock
    mod_93.reset <= reset
    mod_93.io.in <= UInt<7>("h5b") @[StrongEnum.scala 218:15]
    node _T_392 = eq(mod_93.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_393 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_394 = eq(_T_393, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_394 : @[StrongEnum.scala 220:11]
      assert(clock, _T_392, UInt<1>("h1"), "") : assert_98 @[StrongEnum.scala 220:11]
      node _T_395 = eq(_T_392, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_395 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_98 @[StrongEnum.scala 220:11]
    inst mod_94 of SafeCastFromNonLit_94 @[StrongEnum.scala 217:21]
    mod_94.clock <= clock
    mod_94.reset <= reset
    mod_94.io.in <= UInt<7>("h5c") @[StrongEnum.scala 218:15]
    node _T_396 = eq(mod_94.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_397 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_398 = eq(_T_397, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_398 : @[StrongEnum.scala 220:11]
      assert(clock, _T_396, UInt<1>("h1"), "") : assert_99 @[StrongEnum.scala 220:11]
      node _T_399 = eq(_T_396, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_399 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_99 @[StrongEnum.scala 220:11]
    inst mod_95 of SafeCastFromNonLit_95 @[StrongEnum.scala 217:21]
    mod_95.clock <= clock
    mod_95.reset <= reset
    mod_95.io.in <= UInt<7>("h5d") @[StrongEnum.scala 218:15]
    node _T_400 = eq(mod_95.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_401 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_402 = eq(_T_401, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_402 : @[StrongEnum.scala 220:11]
      assert(clock, _T_400, UInt<1>("h1"), "") : assert_100 @[StrongEnum.scala 220:11]
      node _T_403 = eq(_T_400, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_403 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_100 @[StrongEnum.scala 220:11]
    inst mod_96 of SafeCastFromNonLit_96 @[StrongEnum.scala 217:21]
    mod_96.clock <= clock
    mod_96.reset <= reset
    mod_96.io.in <= UInt<7>("h5e") @[StrongEnum.scala 218:15]
    node _T_404 = eq(mod_96.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_405 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_406 = eq(_T_405, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_406 : @[StrongEnum.scala 220:11]
      assert(clock, _T_404, UInt<1>("h1"), "") : assert_101 @[StrongEnum.scala 220:11]
      node _T_407 = eq(_T_404, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_407 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_101 @[StrongEnum.scala 220:11]
    inst mod_97 of SafeCastFromNonLit_97 @[StrongEnum.scala 217:21]
    mod_97.clock <= clock
    mod_97.reset <= reset
    mod_97.io.in <= UInt<7>("h5f") @[StrongEnum.scala 218:15]
    node _T_408 = eq(mod_97.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_409 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_410 = eq(_T_409, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_410 : @[StrongEnum.scala 220:11]
      assert(clock, _T_408, UInt<1>("h1"), "") : assert_102 @[StrongEnum.scala 220:11]
      node _T_411 = eq(_T_408, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_411 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_102 @[StrongEnum.scala 220:11]
    inst mod_98 of SafeCastFromNonLit_98 @[StrongEnum.scala 217:21]
    mod_98.clock <= clock
    mod_98.reset <= reset
    mod_98.io.in <= UInt<7>("h60") @[StrongEnum.scala 218:15]
    node _T_412 = eq(mod_98.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_413 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_414 = eq(_T_413, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_414 : @[StrongEnum.scala 220:11]
      assert(clock, _T_412, UInt<1>("h1"), "") : assert_103 @[StrongEnum.scala 220:11]
      node _T_415 = eq(_T_412, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_415 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_103 @[StrongEnum.scala 220:11]
    inst mod_99 of SafeCastFromNonLit_99 @[StrongEnum.scala 217:21]
    mod_99.clock <= clock
    mod_99.reset <= reset
    mod_99.io.in <= UInt<7>("h61") @[StrongEnum.scala 218:15]
    node _T_416 = eq(mod_99.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_417 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_418 = eq(_T_417, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_418 : @[StrongEnum.scala 220:11]
      assert(clock, _T_416, UInt<1>("h1"), "") : assert_104 @[StrongEnum.scala 220:11]
      node _T_419 = eq(_T_416, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_419 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_104 @[StrongEnum.scala 220:11]
    inst mod_100 of SafeCastFromNonLit_100 @[StrongEnum.scala 217:21]
    mod_100.clock <= clock
    mod_100.reset <= reset
    mod_100.io.in <= UInt<7>("h62") @[StrongEnum.scala 218:15]
    node _T_420 = eq(mod_100.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_421 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_422 = eq(_T_421, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_422 : @[StrongEnum.scala 220:11]
      assert(clock, _T_420, UInt<1>("h1"), "") : assert_105 @[StrongEnum.scala 220:11]
      node _T_423 = eq(_T_420, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_423 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_105 @[StrongEnum.scala 220:11]
    inst mod_101 of SafeCastFromNonLit_101 @[StrongEnum.scala 217:21]
    mod_101.clock <= clock
    mod_101.reset <= reset
    mod_101.io.in <= UInt<7>("h63") @[StrongEnum.scala 218:15]
    node _T_424 = eq(mod_101.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_425 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_426 = eq(_T_425, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_426 : @[StrongEnum.scala 220:11]
      assert(clock, _T_424, UInt<1>("h1"), "") : assert_106 @[StrongEnum.scala 220:11]
      node _T_427 = eq(_T_424, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_427 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_106 @[StrongEnum.scala 220:11]
    inst mod_102 of SafeCastFromNonLit_102 @[StrongEnum.scala 217:21]
    mod_102.clock <= clock
    mod_102.reset <= reset
    mod_102.io.in <= UInt<7>("h66") @[StrongEnum.scala 218:15]
    node _T_428 = eq(mod_102.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_429 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_430 = eq(_T_429, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_430 : @[StrongEnum.scala 220:11]
      assert(clock, _T_428, UInt<1>("h1"), "") : assert_107 @[StrongEnum.scala 220:11]
      node _T_431 = eq(_T_428, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_431 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_107 @[StrongEnum.scala 220:11]
    inst mod_103 of SafeCastFromNonLit_103 @[StrongEnum.scala 217:21]
    mod_103.clock <= clock
    mod_103.reset <= reset
    mod_103.io.in <= UInt<7>("h67") @[StrongEnum.scala 218:15]
    node _T_432 = eq(mod_103.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_433 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_434 = eq(_T_433, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_434 : @[StrongEnum.scala 220:11]
      assert(clock, _T_432, UInt<1>("h1"), "") : assert_108 @[StrongEnum.scala 220:11]
      node _T_435 = eq(_T_432, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_435 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_108 @[StrongEnum.scala 220:11]
    inst mod_104 of SafeCastFromNonLit_104 @[StrongEnum.scala 217:21]
    mod_104.clock <= clock
    mod_104.reset <= reset
    mod_104.io.in <= UInt<7>("h68") @[StrongEnum.scala 218:15]
    node _T_436 = eq(mod_104.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_437 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_438 = eq(_T_437, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_438 : @[StrongEnum.scala 220:11]
      assert(clock, _T_436, UInt<1>("h1"), "") : assert_109 @[StrongEnum.scala 220:11]
      node _T_439 = eq(_T_436, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_439 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_109 @[StrongEnum.scala 220:11]
    inst mod_105 of SafeCastFromNonLit_105 @[StrongEnum.scala 217:21]
    mod_105.clock <= clock
    mod_105.reset <= reset
    mod_105.io.in <= UInt<7>("h69") @[StrongEnum.scala 218:15]
    node _T_440 = eq(mod_105.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_441 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_442 = eq(_T_441, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_442 : @[StrongEnum.scala 220:11]
      assert(clock, _T_440, UInt<1>("h1"), "") : assert_110 @[StrongEnum.scala 220:11]
      node _T_443 = eq(_T_440, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_443 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_110 @[StrongEnum.scala 220:11]
    inst mod_106 of SafeCastFromNonLit_106 @[StrongEnum.scala 217:21]
    mod_106.clock <= clock
    mod_106.reset <= reset
    mod_106.io.in <= UInt<7>("h6a") @[StrongEnum.scala 218:15]
    node _T_444 = eq(mod_106.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_445 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_446 = eq(_T_445, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_446 : @[StrongEnum.scala 220:11]
      assert(clock, _T_444, UInt<1>("h1"), "") : assert_111 @[StrongEnum.scala 220:11]
      node _T_447 = eq(_T_444, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_447 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_111 @[StrongEnum.scala 220:11]
    inst mod_107 of SafeCastFromNonLit_107 @[StrongEnum.scala 217:21]
    mod_107.clock <= clock
    mod_107.reset <= reset
    mod_107.io.in <= UInt<7>("h6b") @[StrongEnum.scala 218:15]
    node _T_448 = eq(mod_107.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_449 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_450 = eq(_T_449, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_450 : @[StrongEnum.scala 220:11]
      assert(clock, _T_448, UInt<1>("h1"), "") : assert_112 @[StrongEnum.scala 220:11]
      node _T_451 = eq(_T_448, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_451 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_112 @[StrongEnum.scala 220:11]
    inst mod_108 of SafeCastFromNonLit_108 @[StrongEnum.scala 217:21]
    mod_108.clock <= clock
    mod_108.reset <= reset
    mod_108.io.in <= UInt<7>("h6c") @[StrongEnum.scala 218:15]
    node _T_452 = eq(mod_108.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_453 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_454 = eq(_T_453, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_454 : @[StrongEnum.scala 220:11]
      assert(clock, _T_452, UInt<1>("h1"), "") : assert_113 @[StrongEnum.scala 220:11]
      node _T_455 = eq(_T_452, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_455 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_113 @[StrongEnum.scala 220:11]
    inst mod_109 of SafeCastFromNonLit_109 @[StrongEnum.scala 217:21]
    mod_109.clock <= clock
    mod_109.reset <= reset
    mod_109.io.in <= UInt<7>("h6d") @[StrongEnum.scala 218:15]
    node _T_456 = eq(mod_109.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_457 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_458 = eq(_T_457, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_458 : @[StrongEnum.scala 220:11]
      assert(clock, _T_456, UInt<1>("h1"), "") : assert_114 @[StrongEnum.scala 220:11]
      node _T_459 = eq(_T_456, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_459 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_114 @[StrongEnum.scala 220:11]
    inst mod_110 of SafeCastFromNonLit_110 @[StrongEnum.scala 217:21]
    mod_110.clock <= clock
    mod_110.reset <= reset
    mod_110.io.in <= UInt<7>("h6e") @[StrongEnum.scala 218:15]
    node _T_460 = eq(mod_110.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_461 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_462 = eq(_T_461, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_462 : @[StrongEnum.scala 220:11]
      assert(clock, _T_460, UInt<1>("h1"), "") : assert_115 @[StrongEnum.scala 220:11]
      node _T_463 = eq(_T_460, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_463 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_115 @[StrongEnum.scala 220:11]
    inst mod_111 of SafeCastFromNonLit_111 @[StrongEnum.scala 217:21]
    mod_111.clock <= clock
    mod_111.reset <= reset
    mod_111.io.in <= UInt<7>("h6f") @[StrongEnum.scala 218:15]
    node _T_464 = eq(mod_111.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_465 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_466 = eq(_T_465, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_466 : @[StrongEnum.scala 220:11]
      assert(clock, _T_464, UInt<1>("h1"), "") : assert_116 @[StrongEnum.scala 220:11]
      node _T_467 = eq(_T_464, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_467 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_116 @[StrongEnum.scala 220:11]
    inst mod_112 of SafeCastFromNonLit_112 @[StrongEnum.scala 217:21]
    mod_112.clock <= clock
    mod_112.reset <= reset
    mod_112.io.in <= UInt<7>("h70") @[StrongEnum.scala 218:15]
    node _T_468 = eq(mod_112.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_469 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_470 = eq(_T_469, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_470 : @[StrongEnum.scala 220:11]
      assert(clock, _T_468, UInt<1>("h1"), "") : assert_117 @[StrongEnum.scala 220:11]
      node _T_471 = eq(_T_468, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_471 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_117 @[StrongEnum.scala 220:11]
    inst mod_113 of SafeCastFromNonLit_113 @[StrongEnum.scala 217:21]
    mod_113.clock <= clock
    mod_113.reset <= reset
    mod_113.io.in <= UInt<7>("h71") @[StrongEnum.scala 218:15]
    node _T_472 = eq(mod_113.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_473 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_474 = eq(_T_473, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_474 : @[StrongEnum.scala 220:11]
      assert(clock, _T_472, UInt<1>("h1"), "") : assert_118 @[StrongEnum.scala 220:11]
      node _T_475 = eq(_T_472, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_475 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_118 @[StrongEnum.scala 220:11]
    inst mod_114 of SafeCastFromNonLit_114 @[StrongEnum.scala 217:21]
    mod_114.clock <= clock
    mod_114.reset <= reset
    mod_114.io.in <= UInt<7>("h72") @[StrongEnum.scala 218:15]
    node _T_476 = eq(mod_114.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_477 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_478 = eq(_T_477, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_478 : @[StrongEnum.scala 220:11]
      assert(clock, _T_476, UInt<1>("h1"), "") : assert_119 @[StrongEnum.scala 220:11]
      node _T_479 = eq(_T_476, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_479 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_119 @[StrongEnum.scala 220:11]
    inst mod_115 of SafeCastFromNonLit_115 @[StrongEnum.scala 217:21]
    mod_115.clock <= clock
    mod_115.reset <= reset
    mod_115.io.in <= UInt<7>("h73") @[StrongEnum.scala 218:15]
    node _T_480 = eq(mod_115.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_481 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_482 = eq(_T_481, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_482 : @[StrongEnum.scala 220:11]
      assert(clock, _T_480, UInt<1>("h1"), "") : assert_120 @[StrongEnum.scala 220:11]
      node _T_483 = eq(_T_480, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_483 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_120 @[StrongEnum.scala 220:11]
    inst mod_116 of SafeCastFromNonLit_116 @[StrongEnum.scala 217:21]
    mod_116.clock <= clock
    mod_116.reset <= reset
    mod_116.io.in <= UInt<7>("h74") @[StrongEnum.scala 218:15]
    node _T_484 = eq(mod_116.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_485 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_486 = eq(_T_485, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_486 : @[StrongEnum.scala 220:11]
      assert(clock, _T_484, UInt<1>("h1"), "") : assert_121 @[StrongEnum.scala 220:11]
      node _T_487 = eq(_T_484, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_487 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_121 @[StrongEnum.scala 220:11]
    inst mod_117 of SafeCastFromNonLit_117 @[StrongEnum.scala 217:21]
    mod_117.clock <= clock
    mod_117.reset <= reset
    mod_117.io.in <= UInt<7>("h75") @[StrongEnum.scala 218:15]
    node _T_488 = eq(mod_117.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_489 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_490 = eq(_T_489, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_490 : @[StrongEnum.scala 220:11]
      assert(clock, _T_488, UInt<1>("h1"), "") : assert_122 @[StrongEnum.scala 220:11]
      node _T_491 = eq(_T_488, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_491 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_122 @[StrongEnum.scala 220:11]
    inst mod_118 of SafeCastFromNonLit_118 @[StrongEnum.scala 217:21]
    mod_118.clock <= clock
    mod_118.reset <= reset
    mod_118.io.in <= UInt<7>("h76") @[StrongEnum.scala 218:15]
    node _T_492 = eq(mod_118.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_493 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_494 = eq(_T_493, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_494 : @[StrongEnum.scala 220:11]
      assert(clock, _T_492, UInt<1>("h1"), "") : assert_123 @[StrongEnum.scala 220:11]
      node _T_495 = eq(_T_492, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_495 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_123 @[StrongEnum.scala 220:11]
    inst mod_119 of SafeCastFromNonLit_119 @[StrongEnum.scala 217:21]
    mod_119.clock <= clock
    mod_119.reset <= reset
    mod_119.io.in <= UInt<7>("h77") @[StrongEnum.scala 218:15]
    node _T_496 = eq(mod_119.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_497 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_498 = eq(_T_497, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_498 : @[StrongEnum.scala 220:11]
      assert(clock, _T_496, UInt<1>("h1"), "") : assert_124 @[StrongEnum.scala 220:11]
      node _T_499 = eq(_T_496, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_499 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_124 @[StrongEnum.scala 220:11]
    inst mod_120 of SafeCastFromNonLit_120 @[StrongEnum.scala 217:21]
    mod_120.clock <= clock
    mod_120.reset <= reset
    mod_120.io.in <= UInt<7>("h78") @[StrongEnum.scala 218:15]
    node _T_500 = eq(mod_120.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_501 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_502 = eq(_T_501, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_502 : @[StrongEnum.scala 220:11]
      assert(clock, _T_500, UInt<1>("h1"), "") : assert_125 @[StrongEnum.scala 220:11]
      node _T_503 = eq(_T_500, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_503 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_125 @[StrongEnum.scala 220:11]
    inst mod_121 of SafeCastFromNonLit_121 @[StrongEnum.scala 217:21]
    mod_121.clock <= clock
    mod_121.reset <= reset
    mod_121.io.in <= UInt<7>("h79") @[StrongEnum.scala 218:15]
    node _T_504 = eq(mod_121.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_505 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_506 = eq(_T_505, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_506 : @[StrongEnum.scala 220:11]
      assert(clock, _T_504, UInt<1>("h1"), "") : assert_126 @[StrongEnum.scala 220:11]
      node _T_507 = eq(_T_504, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_507 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_126 @[StrongEnum.scala 220:11]
    inst mod_122 of SafeCastFromNonLit_122 @[StrongEnum.scala 217:21]
    mod_122.clock <= clock
    mod_122.reset <= reset
    mod_122.io.in <= UInt<7>("h7a") @[StrongEnum.scala 218:15]
    node _T_508 = eq(mod_122.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_509 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_510 = eq(_T_509, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_510 : @[StrongEnum.scala 220:11]
      assert(clock, _T_508, UInt<1>("h1"), "") : assert_127 @[StrongEnum.scala 220:11]
      node _T_511 = eq(_T_508, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_511 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_127 @[StrongEnum.scala 220:11]
    inst mod_123 of SafeCastFromNonLit_123 @[StrongEnum.scala 217:21]
    mod_123.clock <= clock
    mod_123.reset <= reset
    mod_123.io.in <= UInt<7>("h7b") @[StrongEnum.scala 218:15]
    node _T_512 = eq(mod_123.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_513 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_514 = eq(_T_513, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_514 : @[StrongEnum.scala 220:11]
      assert(clock, _T_512, UInt<1>("h1"), "") : assert_128 @[StrongEnum.scala 220:11]
      node _T_515 = eq(_T_512, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_515 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_128 @[StrongEnum.scala 220:11]
    inst mod_124 of SafeCastFromNonLit_124 @[StrongEnum.scala 217:21]
    mod_124.clock <= clock
    mod_124.reset <= reset
    mod_124.io.in <= UInt<7>("h7c") @[StrongEnum.scala 218:15]
    node _T_516 = eq(mod_124.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_517 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_518 = eq(_T_517, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_518 : @[StrongEnum.scala 220:11]
      assert(clock, _T_516, UInt<1>("h1"), "") : assert_129 @[StrongEnum.scala 220:11]
      node _T_519 = eq(_T_516, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_519 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_129 @[StrongEnum.scala 220:11]
    inst mod_125 of SafeCastFromNonLit_125 @[StrongEnum.scala 217:21]
    mod_125.clock <= clock
    mod_125.reset <= reset
    mod_125.io.in <= UInt<7>("h7d") @[StrongEnum.scala 218:15]
    node _T_520 = eq(mod_125.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_521 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_522 = eq(_T_521, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_522 : @[StrongEnum.scala 220:11]
      assert(clock, _T_520, UInt<1>("h1"), "") : assert_130 @[StrongEnum.scala 220:11]
      node _T_523 = eq(_T_520, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_523 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_130 @[StrongEnum.scala 220:11]
    inst mod_126 of SafeCastFromNonLit_126 @[StrongEnum.scala 217:21]
    mod_126.clock <= clock
    mod_126.reset <= reset
    mod_126.io.in <= UInt<7>("h7e") @[StrongEnum.scala 218:15]
    node _T_524 = eq(mod_126.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_525 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_526 = eq(_T_525, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_526 : @[StrongEnum.scala 220:11]
      assert(clock, _T_524, UInt<1>("h1"), "") : assert_131 @[StrongEnum.scala 220:11]
      node _T_527 = eq(_T_524, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_527 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_131 @[StrongEnum.scala 220:11]
    inst mod_127 of SafeCastFromNonLit_127 @[StrongEnum.scala 217:21]
    mod_127.clock <= clock
    mod_127.reset <= reset
    mod_127.io.in <= UInt<7>("h7f") @[StrongEnum.scala 218:15]
    node _T_528 = eq(mod_127.io.valid, UInt<1>("h0")) @[StrongEnum.scala 220:25]
    node _T_529 = bits(reset, 0, 0) @[StrongEnum.scala 220:11]
    node _T_530 = eq(_T_529, UInt<1>("h0")) @[StrongEnum.scala 220:11]
    when _T_530 : @[StrongEnum.scala 220:11]
      assert(clock, _T_528, UInt<1>("h1"), "") : assert_132 @[StrongEnum.scala 220:11]
      node _T_531 = eq(_T_528, UInt<1>("h0")) @[StrongEnum.scala 220:11]
      when _T_531 : @[StrongEnum.scala 220:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:220 assert(mod.io.valid === false.B)\n") : printf_132 @[StrongEnum.scala 220:11]
    node _T_532 = bits(reset, 0, 0) @[StrongEnum.scala 223:7]
    node _T_533 = eq(_T_532, UInt<1>("h0")) @[StrongEnum.scala 223:7]
    when _T_533 : @[StrongEnum.scala 223:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[StrongEnum.scala 223:7]
