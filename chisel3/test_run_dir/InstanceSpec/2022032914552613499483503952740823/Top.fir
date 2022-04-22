circuit Top :
  module MyModule :
    input a : UInt<8>
    output b : { foo : UInt<8>}

    b.foo <= a @[InstanceSpec.scala 740:17]

  module Top :
    input foo : UInt<8>
    output bar : { bar : UInt<8>}

    inst i of MyModule @[InstanceSpec.scala 745:25]
    i.a <= foo @[InstanceSpec.scala 746:14]
    bar.bar <= i.b.foo @[InstanceSpec.scala 747:13]
    bar.bar <= i.b.foo @[InstanceSpec.scala 748:17]

