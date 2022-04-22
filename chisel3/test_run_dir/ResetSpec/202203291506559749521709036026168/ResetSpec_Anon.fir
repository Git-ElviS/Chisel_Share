circuit ResetSpec_Anon :
  module ResetAgnosticModule :
    input clk : Clock
    input rst : Reset
    output out : UInt<8>

    reg reg : UInt<8>, clk with :
      reset => (rst, UInt<8>("h0")) @[ResetSpec.scala 15:48]
    node _reg_T = add(reg, UInt<1>("h1")) @[ResetSpec.scala 16:14]
    node _reg_T_1 = tail(_reg_T, 1) @[ResetSpec.scala 16:14]
    reg <= _reg_T_1 @[ResetSpec.scala 16:7]
    out <= reg @[ResetSpec.scala 17:7]

  module ResetSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { out : UInt<8>}

    inst inst of ResetAgnosticModule @[ResetSpec.scala 71:24]
    inst.clk <= clock @[ResetSpec.scala 72:16]
    inst.rst <= reset @[ResetSpec.scala 73:16]
    io.out <= inst.out @[ResetSpec.scala 75:14]

