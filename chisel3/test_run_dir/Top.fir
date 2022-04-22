circuit Top :
  module Sub :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<1>}

    skip

  module _2_Anon :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<1>}

    inst sub of Sub @[InlineSpec.scala 23:21]
    sub.clock <= clock
    sub.reset <= reset
    sub.io.a <= io.a @[InlineSpec.scala 24:14]

  module Top :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip a : UInt<1>}

    inst x of _2_Anon @[InlineSpec.scala 71:21]
    x.clock <= clock
    x.reset <= reset
    x.io.a <= io.a @[InlineSpec.scala 72:14]

