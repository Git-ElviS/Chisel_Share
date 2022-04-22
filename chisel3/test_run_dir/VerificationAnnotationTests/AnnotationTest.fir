circuit AnnotationTest :
  module AnnotationTest :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<8>, out : UInt<8>}

    io.out <= io.in @[VerificationSpec.scala 75:14]
    node _T = eq(io.in, UInt<2>("h3")) @[VerificationSpec.scala 76:29]
    node _T_1 = bits(reset, 0, 0) @[VerificationSpec.scala 76:22]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VerificationSpec.scala 76:22]
    when _T_2 : @[VerificationSpec.scala 76:22]
      cover(clock, _T, UInt<1>("h1"), "") : cov @[VerificationSpec.scala 76:22]
    node _T_3 = neq(io.in, UInt<2>("h2")) @[VerificationSpec.scala 77:39]
    node _T_4 = bits(reset, 0, 0) @[VerificationSpec.scala 77:32]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[VerificationSpec.scala 77:32]
    when _T_5 : @[VerificationSpec.scala 77:32]
      assume(clock, _T_3, UInt<1>("h1"), "") : assm @[VerificationSpec.scala 77:32]
      node _T_6 = eq(_T_3, UInt<1>("h0")) @[VerificationSpec.scala 77:32]
      when _T_6 : @[VerificationSpec.scala 77:32]
        printf(clock, UInt<1>("h1"), "Assumption failed\n    at VerificationSpec.scala:77 val assm = chisel3.assume(io.in =/= 2.U)\n") : printf @[VerificationSpec.scala 77:32]
    node _T_7 = eq(io.out, io.in) @[VerificationSpec.scala 78:40]
    node _T_8 = bits(reset, 0, 0) @[VerificationSpec.scala 78:32]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[VerificationSpec.scala 78:32]
    when _T_9 : @[VerificationSpec.scala 78:32]
      assert(clock, _T_7, UInt<1>("h1"), "") : asst @[VerificationSpec.scala 78:32]
      node _T_10 = eq(_T_7, UInt<1>("h0")) @[VerificationSpec.scala 78:32]
      when _T_10 : @[VerificationSpec.scala 78:32]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VerificationSpec.scala:78 val asst = chisel3.assert(io.out === io.in)\n") : printf_1 @[VerificationSpec.scala 78:32]

