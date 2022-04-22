circuit HasBinarySupport :
  module HasBinarySupport :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip address : UInt<16>, value : UInt<16>}

    cmem memory : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 139:19]
    node _io_value_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 143:21]
    infer mport io_value_MPORT = memory[_io_value_T], clock @[LoadMemoryFromFileSpec.scala 143:21]
    io.value <= io_value_MPORT @[LoadMemoryFromFileSpec.scala 143:12]

