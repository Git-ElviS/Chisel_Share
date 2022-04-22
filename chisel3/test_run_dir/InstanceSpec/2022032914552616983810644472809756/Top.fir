circuit Top :
  module MyModule :
    input in : UInt<8>
    output out : UInt<8>

    node _sum_T = add(in, UInt<1>("h1")) @[InstanceSpec.scala 645:22]
    node sum = tail(_sum_T, 1) @[InstanceSpec.scala 645:22]
    node _out_T = add(sum, UInt<1>("h1")) @[InstanceSpec.scala 646:20]
    node _out_T_1 = tail(_out_T, 1) @[InstanceSpec.scala 646:20]
    out <= _out_T_1 @[InstanceSpec.scala 646:13]

  module Top :
    input foo : UInt<8>
    output bar : UInt<8>

    inst i of MyModule @[InstanceSpec.scala 653:25]
    i.in <= foo @[InstanceSpec.scala 654:15]
    bar <= i.out @[InstanceSpec.scala 655:13]

