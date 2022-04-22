circuit Foo :
  extmodule Bar :
    input clock : Clock
    input reset : UInt<1>
    input in : UInt<4>
    output out : UInt<4>
    defname = Bar

  module Foo :
    input clock : Clock
    input reset : UInt<1>
    input addr : UInt<4>
    output out : UInt<1>

    mem memory : @[ChiselStageSpec.scala 27:29]
      data-type => UInt<1>
      depth => 8
      read-latency => 1
      write-latency => 1
      reader => out_MPORT
      read-under-write => undefined
    memory.out_MPORT.addr is invalid @[ChiselStageSpec.scala 27:29]
    memory.out_MPORT.clk is invalid @[ChiselStageSpec.scala 27:29]
    memory.out_MPORT.en <= UInt<1>("h0") @[ChiselStageSpec.scala 27:29]
    inst bar of Bar @[ChiselStageSpec.scala 28:21]
    bar.clock <= clock
    bar.reset <= reset
    bar.in <= addr @[ChiselStageSpec.scala 29:12]
    node _out_T = bits(bar.out, 2, 0) @[ChiselStageSpec.scala 30:18]
    memory.out_MPORT.en <= UInt<1>("h1") @[ChiselStageSpec.scala 30:18]
    memory.out_MPORT.addr <= _out_T @[ChiselStageSpec.scala 30:18]
    memory.out_MPORT.clk <= clock @[ChiselStageSpec.scala 30:18]
    out <= memory.out_MPORT.data @[ChiselStageSpec.scala 30:9]
