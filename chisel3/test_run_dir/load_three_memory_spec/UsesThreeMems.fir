circuit UsesThreeMems :
  module UsesThreeMems :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip address : UInt<16>, value1 : UInt<16>, value2 : UInt<16>, value3 : UInt<16>}

    cmem memory1 : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 23:20]
    cmem memory2 : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 24:20]
    cmem memory3 : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 25:20]
    node _io_value1_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 30:23]
    infer mport io_value1_MPORT = memory1[_io_value1_T], clock @[LoadMemoryFromFileSpec.scala 30:23]
    io.value1 <= io_value1_MPORT @[LoadMemoryFromFileSpec.scala 30:13]
    node _io_value2_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 31:23]
    infer mport io_value2_MPORT = memory2[_io_value2_T], clock @[LoadMemoryFromFileSpec.scala 31:23]
    io.value2 <= io_value2_MPORT @[LoadMemoryFromFileSpec.scala 31:13]
    node _io_value3_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 32:23]
    infer mport io_value3_MPORT = memory3[_io_value3_T], clock @[LoadMemoryFromFileSpec.scala 32:23]
    io.value3 <= io_value3_MPORT @[LoadMemoryFromFileSpec.scala 32:13]

