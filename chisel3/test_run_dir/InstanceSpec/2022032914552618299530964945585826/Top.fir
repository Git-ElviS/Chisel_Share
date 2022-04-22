circuit Top :
  module MyModule :
    input a : UInt<8>
    output b : UInt<8>

    b <= a @[InstanceSpec.scala 777:11]

  module Top :
    input foo : UInt<8>
    output bar : UInt<8>

    inst i of MyModule @[InstanceSpec.scala 782:25]
    i.a <= foo @[InstanceSpec.scala 783:17]
    bar <= i.b @[InstanceSpec.scala 783:17]

