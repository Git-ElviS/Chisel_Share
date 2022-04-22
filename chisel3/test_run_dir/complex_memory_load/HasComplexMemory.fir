circuit HasComplexMemory :
  module HasComplexMemory :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip address : UInt<3>, value : { a : UInt<8>, b : SInt<8>, c : UInt<1>}}

    cmem memory : { a : UInt<8>, b : SInt<8>, c : UInt<1>} [8] @[LoadMemoryFromFileSpec.scala 126:19]
    infer mport io_value_MPORT = memory[io.address], clock @[LoadMemoryFromFileSpec.scala 130:21]
    io.value <= io_value_MPORT @[LoadMemoryFromFileSpec.scala 130:12]

