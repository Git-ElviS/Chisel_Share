circuit CompatibilityInteroperabilitySpec_Anon :
  module Child :
    output deq : { bidir1 : { flip a : UInt<8>, b : UInt<8>}, flip bidir2 : { flip a : UInt<8>, b : UInt<8>}, struct1 : { a : UInt<8>}, flip struct2 : { a : UInt<8>}}
    input enq : { bidir1 : { flip a : UInt<8>, b : UInt<8>}, flip bidir2 : { flip a : UInt<8>, b : UInt<8>}, struct1 : { a : UInt<8>}, flip struct2 : { a : UInt<8>}}

    deq <= enq @[CompatibilityInteroperabilitySpec.scala 310:13]
    deq <= enq @[CompatibilityInteroperabilitySpec.scala 311:13]

  module Child_1 :
    output deq : { bidir1 : { flip a : UInt<8>, b : UInt<8>}, flip bidir2 : { flip a : UInt<8>, b : UInt<8>}, struct1 : { a : UInt<8>}, flip struct2 : { a : UInt<8>}}
    input enq : { bidir1 : { flip a : UInt<8>, b : UInt<8>}, flip bidir2 : { flip a : UInt<8>, b : UInt<8>}, struct1 : { a : UInt<8>}, flip struct2 : { a : UInt<8>}}

    deq <= enq @[CompatibilityInteroperabilitySpec.scala 310:13]
    deq <= enq @[CompatibilityInteroperabilitySpec.scala 311:13]

  module CompatibilityInteroperabilitySpec_Anon :
    output deq : { bidir1 : { flip a : UInt<8>, b : UInt<8>}, flip bidir2 : { flip a : UInt<8>, b : UInt<8>}, struct1 : { a : UInt<8>}, flip struct2 : { a : UInt<8>}}
    input enq : { bidir1 : { flip a : UInt<8>, b : UInt<8>}, flip bidir2 : { flip a : UInt<8>, b : UInt<8>}, struct1 : { a : UInt<8>}, flip struct2 : { a : UInt<8>}}

    inst c1 of Child @[CompatibilityInteroperabilitySpec.scala 317:24]
    inst c2 of Child_1 @[CompatibilityInteroperabilitySpec.scala 318:24]
    c1.enq <= enq @[CompatibilityInteroperabilitySpec.scala 319:16]
    c1.enq <= enq @[CompatibilityInteroperabilitySpec.scala 320:13]
    c2.enq <= c1.deq @[CompatibilityInteroperabilitySpec.scala 321:16]
    c2.enq <= c1.deq @[CompatibilityInteroperabilitySpec.scala 322:16]
    c2.deq.struct2 <= deq.struct2 @[CompatibilityInteroperabilitySpec.scala 323:13]
    deq.struct1 <= c2.deq.struct1 @[CompatibilityInteroperabilitySpec.scala 323:13]
    c2.deq.bidir2 <= deq.bidir2 @[CompatibilityInteroperabilitySpec.scala 323:13]
    deq.bidir1 <- c2.deq.bidir1 @[CompatibilityInteroperabilitySpec.scala 323:13]
    c2.deq.struct2 <= deq.struct2 @[CompatibilityInteroperabilitySpec.scala 324:16]
    deq.struct1 <= c2.deq.struct1 @[CompatibilityInteroperabilitySpec.scala 324:16]
    c2.deq.bidir2 <= deq.bidir2 @[CompatibilityInteroperabilitySpec.scala 324:16]
    deq.bidir1 <- c2.deq.bidir1 @[CompatibilityInteroperabilitySpec.scala 324:16]

