circuit PrintfAnnotationTest :
  module PrintfAnnotationTest :
    input clock : Clock
    input reset : UInt<1>

    wire myBun : { foo : UInt<32>, bar : UInt<32>} @[PrintableSpec.scala 218:23]
    myBun.foo <= UInt<1>("h0") @[PrintableSpec.scala 222:17]
    myBun.bar <= UInt<1>("h0") @[PrintableSpec.scala 223:17]
    node _T = bits(reset, 0, 0) @[PrintableSpec.scala 224:25]
    node _T_1 = eq(_T, UInt<1>("h0")) @[PrintableSpec.scala 224:25]
    when _T_1 : @[PrintableSpec.scala 224:25]
      printf(clock, UInt<1>("h1"), "hello AnonymousBundle(foo -> %d, bar -> %d)", myBun.foo, myBun.bar) : howdy @[PrintableSpec.scala 224:25]
    node _T_2 = bits(reset, 0, 0) @[PrintableSpec.scala 226:39]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[PrintableSpec.scala 226:39]
    when _T_3 : @[PrintableSpec.scala 226:39]
      printf(clock, UInt<1>("h1"), "goodbye AnonymousBundle(foo -> %d, bar -> %d)", myBun.foo, myBun.bar) : printf @[PrintableSpec.scala 226:39]
    node _T_4 = bits(reset, 0, 0) @[PrintableSpec.scala 227:39]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[PrintableSpec.scala 227:39]
    when _T_5 : @[PrintableSpec.scala 227:39]
      printf(clock, UInt<1>("h1"), "adieu AnonymousBundle(foo -> %d, bar -> %d)", myBun.foo, myBun.bar) : farewell @[PrintableSpec.scala 227:39]

