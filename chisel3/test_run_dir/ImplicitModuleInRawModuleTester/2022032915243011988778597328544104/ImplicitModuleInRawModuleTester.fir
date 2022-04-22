circuit ImplicitModuleInRawModuleTester :
  module PlusOneModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    node _io_out_T = add(io.in, UInt<1>("h1")) @[RawModuleSpec.scala 28:19]
    node _io_out_T_1 = tail(_io_out_T, 1) @[RawModuleSpec.scala 28:19]
    io.out <= _io_out_T_1 @[RawModuleSpec.scala 28:10]

  module RawModuleWithImplicitModule :
    input in : UInt<32>
    output out : UInt<32>
    input clk : Clock
    input rst : UInt<1>

    inst plusModule of PlusOneModule @[RawModuleSpec.scala 38:28]
    plusModule.clock <= clk
    plusModule.reset <= rst
    plusModule.io.in <= in @[RawModuleSpec.scala 39:22]
    out <= plusModule.io.out @[RawModuleSpec.scala 40:9]

  module ImplicitModuleInRawModuleTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst plusModule of RawModuleWithImplicitModule @[RawModuleSpec.scala 45:26]
    plusModule.clk <= clock @[RawModuleSpec.scala 46:18]
    plusModule.rst <= reset @[RawModuleSpec.scala 47:18]
    plusModule.in <= UInt<6>("h2a") @[RawModuleSpec.scala 48:17]
    node _T = eq(plusModule.out, UInt<6>("h2b")) @[RawModuleSpec.scala 49:25]
    node _T_1 = bits(reset, 0, 0) @[RawModuleSpec.scala 49:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[RawModuleSpec.scala 49:9]
    when _T_2 : @[RawModuleSpec.scala 49:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[RawModuleSpec.scala 49:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[RawModuleSpec.scala 49:9]
      when _T_3 : @[RawModuleSpec.scala 49:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RawModuleSpec.scala:49 assert(plusModule.out === 43.U)\n") : printf @[RawModuleSpec.scala 49:9]
    node _T_4 = bits(reset, 0, 0) @[RawModuleSpec.scala 50:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[RawModuleSpec.scala 50:7]
    when _T_5 : @[RawModuleSpec.scala 50:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[RawModuleSpec.scala 50:7]
