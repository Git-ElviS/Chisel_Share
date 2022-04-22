circuit VecOfBool2UInt :
  module VecOfBool2UInt :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<1>("h1")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[CookbookSpec.scala 19:14]
      node _T = bits(reset, 0, 0) @[CookbookSpec.scala 19:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[CookbookSpec.scala 19:20]
      when _T_1 : @[CookbookSpec.scala 19:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[CookbookSpec.scala 19:20]
    wire vec : UInt<1>[4] @[VecOfBool2UInt.scala 13:20]
    vec[0] <= UInt<1>("h1") @[VecOfBool2UInt.scala 13:20]
    vec[1] <= UInt<1>("h0") @[VecOfBool2UInt.scala 13:20]
    vec[2] <= UInt<1>("h1") @[VecOfBool2UInt.scala 13:20]
    vec[3] <= UInt<1>("h1") @[VecOfBool2UInt.scala 13:20]
    node uint_lo = cat(vec[1], vec[0]) @[VecOfBool2UInt.scala 14:18]
    node uint_hi = cat(vec[3], vec[2]) @[VecOfBool2UInt.scala 14:18]
    node uint = cat(uint_hi, uint_lo) @[VecOfBool2UInt.scala 14:18]
    node _T_2 = bits(reset, 0, 0) @[VecOfBool2UInt.scala 15:9]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[VecOfBool2UInt.scala 15:9]
    when _T_3 : @[VecOfBool2UInt.scala 15:9]
      printf(clock, UInt<1>("h1"), "%d", uint) : printf @[VecOfBool2UInt.scala 15:9]
    node _T_4 = eq(UInt<4>("hd"), uint) @[VecOfBool2UInt.scala 21:16]
    node _T_5 = bits(reset, 0, 0) @[VecOfBool2UInt.scala 21:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[VecOfBool2UInt.scala 21:9]
    when _T_6 : @[VecOfBool2UInt.scala 21:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert @[VecOfBool2UInt.scala 21:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[VecOfBool2UInt.scala 21:9]
      when _T_7 : @[VecOfBool2UInt.scala 21:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecOfBool2UInt.scala:21 assert(0xd.U === uint)\n") : printf_1 @[VecOfBool2UInt.scala 21:9]
