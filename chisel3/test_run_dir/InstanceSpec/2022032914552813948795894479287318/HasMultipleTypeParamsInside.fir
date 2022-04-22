circuit HasMultipleTypeParamsInside :
  module HasTypeParams :
    input clock : Clock
    input reset : Reset

    wire blah : UInt<1> @[Examples.scala 256:28]

  module HasTypeParams_1 :
    input clock : Clock
    input reset : Reset

    wire blah : UInt<4> @[Examples.scala 256:28]

  module HasMultipleTypeParamsInside :
    input clock : Clock
    input reset : UInt<1>

    inst i00 of HasTypeParams @[Examples.scala 263:23]
    i00.clock <= clock @[Examples.scala 263:23]
    i00.reset <= reset @[Examples.scala 263:23]
    inst i01 of HasTypeParams @[Examples.scala 264:23]
    i01.clock <= clock @[Examples.scala 264:23]
    i01.reset <= reset @[Examples.scala 264:23]
    inst i10 of HasTypeParams_1 @[Examples.scala 265:23]
    i10.clock <= clock @[Examples.scala 265:23]
    i10.reset <= reset @[Examples.scala 265:23]
    inst i11 of HasTypeParams_1 @[Examples.scala 266:23]
    i11.clock <= clock @[Examples.scala 266:23]
    i11.reset <= reset @[Examples.scala 266:23]

