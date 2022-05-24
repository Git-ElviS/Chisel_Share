// See LICENSE.txt for license details.
package examples

import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

class nn_mul_modTests(c: nn_mul_mod) extends PeekPokeTester(c) {
  val rnd2 = rnd.nextInt(2)
  for (t <- 0 until 4) {
    val rnd0 = rnd.nextInt(16)
    val rnd1 = rnd.nextInt(16)
    val rnd2 = rnd.nextInt(2)
    poke(c.io.A,   rnd0)
    poke(c.io.B,   rnd1)
    poke(c.io.Cin, rnd2)
    step(1)
    val rsum = (rnd0 & 0xF) + (rnd1 & 0xF) + (rnd2 & 0x1)
    expect(c.io.Sum, (rsum & 0xF))
    expect(c.io.Cout, rsum >> 4)
  }
}

class nn_mul_modTester extends ChiselFlatSpec {
  behavior of "nn_mul_mod"
  backends foreach {backend =>
    it should s"correctly add randomly generated numbers $backend" in {
      Driver(() => new nn_mul_mod, backend)(c => new nn_mul_modTests(c)) should be (true)
    }
  }
}

