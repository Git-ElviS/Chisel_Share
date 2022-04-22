circuit Top :
  extmodule MyBlackBox :
    input in : UInt<8>
    output out : UInt<8>
    defname = MyBlackBox

  module Top :
    input foo : UInt<8>
    output bar : UInt<8>

    inst i of MyBlackBox @[InstanceSpec.scala 819:25]
    i.in <= foo @[InstanceSpec.scala 821:15]
    bar <= i.out @[InstanceSpec.scala 822:13]

