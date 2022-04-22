circuit UsesMem :
  module UsesMemLow :
    input clock : Clock
    input reset : Reset
    output io : { flip address : UInt<16>, value : UInt<16>}

    cmem memory : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 88:19]
    node _io_value_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 92:21]
    infer mport io_value_MPORT = memory[_io_value_T], clock @[LoadMemoryFromFileSpec.scala 92:21]
    io.value <= io_value_MPORT @[LoadMemoryFromFileSpec.scala 92:12]

  module UsesMemLow_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip address : UInt<16>, value : UInt<16>}

    cmem memory : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 88:19]
    node _io_value_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 92:21]
    infer mport io_value_MPORT = memory[_io_value_T], clock @[LoadMemoryFromFileSpec.scala 92:21]
    io.value <= io_value_MPORT @[LoadMemoryFromFileSpec.scala 92:12]

  module UsesMem :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip address : UInt<16>, value : UInt<16>, value1 : UInt<16>, value2 : UInt<16>}

    cmem memory : UInt<16> [8] @[LoadMemoryFromFileSpec.scala 68:19]
    node _io_value_T = bits(io.address, 2, 0) @[LoadMemoryFromFileSpec.scala 71:21]
    infer mport io_value_MPORT = memory[_io_value_T], clock @[LoadMemoryFromFileSpec.scala 71:21]
    io.value <= io_value_MPORT @[LoadMemoryFromFileSpec.scala 71:12]
    inst low1 of UsesMemLow @[LoadMemoryFromFileSpec.scala 73:20]
    low1.clock <= clock
    low1.reset <= reset
    inst low2 of UsesMemLow_1 @[LoadMemoryFromFileSpec.scala 74:20]
    low2.clock <= clock
    low2.reset <= reset
    low2.io.address <= io.address @[LoadMemoryFromFileSpec.scala 76:19]
    low1.io.address <= io.address @[LoadMemoryFromFileSpec.scala 77:19]
    io.value1 <= low1.io.value @[LoadMemoryFromFileSpec.scala 78:13]
    io.value2 <= low2.io.value @[LoadMemoryFromFileSpec.scala 79:13]

