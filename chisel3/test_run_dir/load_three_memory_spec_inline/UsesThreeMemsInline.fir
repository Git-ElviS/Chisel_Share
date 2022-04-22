circuit UsesThreeMemsInline :
  module UsesThreeMemsInline :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip address : UInt<16>, value1 : UInt<16>, value2 : UInt<16>, value3 : UInt<16>}

    cmem memory1 : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 48:20]
    cmem memory2 : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 49:20]
    cmem memory3 : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 50:20]
    node _io_value1_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 55:23]
    infer mport io_value1_MPORT = memory1[_io_value1_T], clock @[LoadMemoryFromFileSpec.scala 55:23]
    io.value1 <= io_value1_MPORT @[LoadMemoryFromFileSpec.scala 55:13]
    node _io_value2_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 56:23]
    infer mport io_value2_MPORT = memory2[_io_value2_T], clock @[LoadMemoryFromFileSpec.scala 56:23]
    io.value2 <= io_value2_MPORT @[LoadMemoryFromFileSpec.scala 56:13]
    node _io_value3_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 57:23]
    infer mport io_value3_MPORT = memory3[_io_value3_T], clock @[LoadMemoryFromFileSpec.scala 57:23]
    io.value3 <= io_value3_MPORT @[LoadMemoryFromFileSpec.scala 57:13]

