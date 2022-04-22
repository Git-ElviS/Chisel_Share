circuit AnnotationRenameTest :
  module AnnotationRenameTest :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<8>, out : UInt<8>}

    io.out <= io.in @[VerificationSpec.scala 121:14]
    node _T = eq(io.in, UInt<1>("h1")) @[VerificationSpec.scala 123:42]
    node _T_1 = bits(reset, 0, 0) @[VerificationSpec.scala 123:35]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VerificationSpec.scala 123:35]
    when _T_2 : @[VerificationSpec.scala 123:35]
      assert(clock, _T, UInt<1>("h1"), "") : hello @[VerificationSpec.scala 123:35]
      node _T_3 = eq(_T, UInt<1>("h0")) @[VerificationSpec.scala 123:35]
      when _T_3 : @[VerificationSpec.scala 123:35]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VerificationSpec.scala:123 val goodbye = chisel3.assert(io.in === 1.U)\n") : printf @[VerificationSpec.scala 123:35]
    node _T_4 = neq(io.in, UInt<2>("h2")) @[VerificationSpec.scala 127:53]
    node _T_5 = bits(reset, 0, 0) @[VerificationSpec.scala 127:46]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[VerificationSpec.scala 127:46]
    when _T_6 : @[VerificationSpec.scala 127:46]
      assume(clock, _T_4, UInt<1>("h1"), "") : howdy @[VerificationSpec.scala 127:46]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[VerificationSpec.scala 127:46]
      when _T_7 : @[VerificationSpec.scala 127:46]
        printf(clock, UInt<1>("h1"), "Assumption failed\n    at VerificationSpec.scala:127 VerifAnnotation.annotate(chisel3.assume(io.in =/= 2.U).suggestName(\"howdy\"))\n") : printf_1 @[VerificationSpec.scala 127:46]

