module EnumOps(
  input  [6:0] io_x,
  input  [6:0] io_y,
  output       io_lt,
  output       io_le,
  output       io_gt,
  output       io_ge,
  output       io_eq,
  output       io_ne
);
  assign io_lt = io_x < io_y; // @[StrongEnum.scala 113:17]
  assign io_le = io_x <= io_y; // @[StrongEnum.scala 114:17]
  assign io_gt = io_x > io_y; // @[StrongEnum.scala 115:17]
  assign io_ge = io_x >= io_y; // @[StrongEnum.scala 116:17]
  assign io_eq = io_x == io_y; // @[StrongEnum.scala 117:17]
  assign io_ne = io_x != io_y; // @[StrongEnum.scala 118:17]
endmodule
module EnumOpsTester(
  input   clock,
  input   reset
);
  wire [6:0] mod_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_1_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_1_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_1_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_1_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_1_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_1_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_1_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_1_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_2_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_2_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_2_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_2_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_2_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_2_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_2_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_2_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_3_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_3_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_3_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_3_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_3_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_3_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_3_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_3_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_4_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_4_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_4_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_4_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_4_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_4_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_4_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_4_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_5_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_5_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_5_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_5_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_5_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_5_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_5_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_5_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_6_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_6_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_6_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_6_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_6_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_6_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_6_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_6_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_7_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_7_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_7_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_7_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_7_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_7_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_7_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_7_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_8_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_8_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_8_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_8_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_8_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_8_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_8_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_8_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_9_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_9_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_9_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_9_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_9_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_9_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_9_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_9_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_10_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_10_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_10_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_10_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_10_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_10_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_10_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_10_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_11_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_11_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_11_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_11_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_11_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_11_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_11_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_11_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_12_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_12_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_12_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_12_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_12_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_12_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_12_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_12_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_13_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_13_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_13_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_13_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_13_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_13_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_13_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_13_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_14_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_14_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_14_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_14_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_14_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_14_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_14_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_14_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_15_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_15_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_15_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_15_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_15_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_15_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_15_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_15_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_16_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_16_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_16_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_16_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_16_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_16_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_16_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_16_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_17_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_17_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_17_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_17_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_17_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_17_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_17_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_17_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_18_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_18_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_18_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_18_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_18_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_18_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_18_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_18_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_19_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_19_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_19_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_19_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_19_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_19_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_19_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_19_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_20_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_20_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_20_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_20_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_20_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_20_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_20_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_20_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_21_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_21_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_21_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_21_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_21_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_21_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_21_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_21_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_22_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_22_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_22_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_22_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_22_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_22_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_22_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_22_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_23_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_23_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_23_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_23_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_23_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_23_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_23_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_23_io_ne; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_24_io_x; // @[StrongEnum.scala 236:21]
  wire [6:0] mod_24_io_y; // @[StrongEnum.scala 236:21]
  wire  mod_24_io_lt; // @[StrongEnum.scala 236:21]
  wire  mod_24_io_le; // @[StrongEnum.scala 236:21]
  wire  mod_24_io_gt; // @[StrongEnum.scala 236:21]
  wire  mod_24_io_ge; // @[StrongEnum.scala 236:21]
  wire  mod_24_io_eq; // @[StrongEnum.scala 236:21]
  wire  mod_24_io_ne; // @[StrongEnum.scala 236:21]
  wire  _T_5 = ~reset; // @[StrongEnum.scala 240:11]
  EnumOps mod ( // @[StrongEnum.scala 236:21]
    .io_x(mod_io_x),
    .io_y(mod_io_y),
    .io_lt(mod_io_lt),
    .io_le(mod_io_le),
    .io_gt(mod_io_gt),
    .io_ge(mod_io_ge),
    .io_eq(mod_io_eq),
    .io_ne(mod_io_ne)
  );
  EnumOps mod_1 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_1_io_x),
    .io_y(mod_1_io_y),
    .io_lt(mod_1_io_lt),
    .io_le(mod_1_io_le),
    .io_gt(mod_1_io_gt),
    .io_ge(mod_1_io_ge),
    .io_eq(mod_1_io_eq),
    .io_ne(mod_1_io_ne)
  );
  EnumOps mod_2 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_2_io_x),
    .io_y(mod_2_io_y),
    .io_lt(mod_2_io_lt),
    .io_le(mod_2_io_le),
    .io_gt(mod_2_io_gt),
    .io_ge(mod_2_io_ge),
    .io_eq(mod_2_io_eq),
    .io_ne(mod_2_io_ne)
  );
  EnumOps mod_3 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_3_io_x),
    .io_y(mod_3_io_y),
    .io_lt(mod_3_io_lt),
    .io_le(mod_3_io_le),
    .io_gt(mod_3_io_gt),
    .io_ge(mod_3_io_ge),
    .io_eq(mod_3_io_eq),
    .io_ne(mod_3_io_ne)
  );
  EnumOps mod_4 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_4_io_x),
    .io_y(mod_4_io_y),
    .io_lt(mod_4_io_lt),
    .io_le(mod_4_io_le),
    .io_gt(mod_4_io_gt),
    .io_ge(mod_4_io_ge),
    .io_eq(mod_4_io_eq),
    .io_ne(mod_4_io_ne)
  );
  EnumOps mod_5 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_5_io_x),
    .io_y(mod_5_io_y),
    .io_lt(mod_5_io_lt),
    .io_le(mod_5_io_le),
    .io_gt(mod_5_io_gt),
    .io_ge(mod_5_io_ge),
    .io_eq(mod_5_io_eq),
    .io_ne(mod_5_io_ne)
  );
  EnumOps mod_6 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_6_io_x),
    .io_y(mod_6_io_y),
    .io_lt(mod_6_io_lt),
    .io_le(mod_6_io_le),
    .io_gt(mod_6_io_gt),
    .io_ge(mod_6_io_ge),
    .io_eq(mod_6_io_eq),
    .io_ne(mod_6_io_ne)
  );
  EnumOps mod_7 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_7_io_x),
    .io_y(mod_7_io_y),
    .io_lt(mod_7_io_lt),
    .io_le(mod_7_io_le),
    .io_gt(mod_7_io_gt),
    .io_ge(mod_7_io_ge),
    .io_eq(mod_7_io_eq),
    .io_ne(mod_7_io_ne)
  );
  EnumOps mod_8 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_8_io_x),
    .io_y(mod_8_io_y),
    .io_lt(mod_8_io_lt),
    .io_le(mod_8_io_le),
    .io_gt(mod_8_io_gt),
    .io_ge(mod_8_io_ge),
    .io_eq(mod_8_io_eq),
    .io_ne(mod_8_io_ne)
  );
  EnumOps mod_9 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_9_io_x),
    .io_y(mod_9_io_y),
    .io_lt(mod_9_io_lt),
    .io_le(mod_9_io_le),
    .io_gt(mod_9_io_gt),
    .io_ge(mod_9_io_ge),
    .io_eq(mod_9_io_eq),
    .io_ne(mod_9_io_ne)
  );
  EnumOps mod_10 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_10_io_x),
    .io_y(mod_10_io_y),
    .io_lt(mod_10_io_lt),
    .io_le(mod_10_io_le),
    .io_gt(mod_10_io_gt),
    .io_ge(mod_10_io_ge),
    .io_eq(mod_10_io_eq),
    .io_ne(mod_10_io_ne)
  );
  EnumOps mod_11 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_11_io_x),
    .io_y(mod_11_io_y),
    .io_lt(mod_11_io_lt),
    .io_le(mod_11_io_le),
    .io_gt(mod_11_io_gt),
    .io_ge(mod_11_io_ge),
    .io_eq(mod_11_io_eq),
    .io_ne(mod_11_io_ne)
  );
  EnumOps mod_12 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_12_io_x),
    .io_y(mod_12_io_y),
    .io_lt(mod_12_io_lt),
    .io_le(mod_12_io_le),
    .io_gt(mod_12_io_gt),
    .io_ge(mod_12_io_ge),
    .io_eq(mod_12_io_eq),
    .io_ne(mod_12_io_ne)
  );
  EnumOps mod_13 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_13_io_x),
    .io_y(mod_13_io_y),
    .io_lt(mod_13_io_lt),
    .io_le(mod_13_io_le),
    .io_gt(mod_13_io_gt),
    .io_ge(mod_13_io_ge),
    .io_eq(mod_13_io_eq),
    .io_ne(mod_13_io_ne)
  );
  EnumOps mod_14 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_14_io_x),
    .io_y(mod_14_io_y),
    .io_lt(mod_14_io_lt),
    .io_le(mod_14_io_le),
    .io_gt(mod_14_io_gt),
    .io_ge(mod_14_io_ge),
    .io_eq(mod_14_io_eq),
    .io_ne(mod_14_io_ne)
  );
  EnumOps mod_15 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_15_io_x),
    .io_y(mod_15_io_y),
    .io_lt(mod_15_io_lt),
    .io_le(mod_15_io_le),
    .io_gt(mod_15_io_gt),
    .io_ge(mod_15_io_ge),
    .io_eq(mod_15_io_eq),
    .io_ne(mod_15_io_ne)
  );
  EnumOps mod_16 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_16_io_x),
    .io_y(mod_16_io_y),
    .io_lt(mod_16_io_lt),
    .io_le(mod_16_io_le),
    .io_gt(mod_16_io_gt),
    .io_ge(mod_16_io_ge),
    .io_eq(mod_16_io_eq),
    .io_ne(mod_16_io_ne)
  );
  EnumOps mod_17 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_17_io_x),
    .io_y(mod_17_io_y),
    .io_lt(mod_17_io_lt),
    .io_le(mod_17_io_le),
    .io_gt(mod_17_io_gt),
    .io_ge(mod_17_io_ge),
    .io_eq(mod_17_io_eq),
    .io_ne(mod_17_io_ne)
  );
  EnumOps mod_18 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_18_io_x),
    .io_y(mod_18_io_y),
    .io_lt(mod_18_io_lt),
    .io_le(mod_18_io_le),
    .io_gt(mod_18_io_gt),
    .io_ge(mod_18_io_ge),
    .io_eq(mod_18_io_eq),
    .io_ne(mod_18_io_ne)
  );
  EnumOps mod_19 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_19_io_x),
    .io_y(mod_19_io_y),
    .io_lt(mod_19_io_lt),
    .io_le(mod_19_io_le),
    .io_gt(mod_19_io_gt),
    .io_ge(mod_19_io_ge),
    .io_eq(mod_19_io_eq),
    .io_ne(mod_19_io_ne)
  );
  EnumOps mod_20 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_20_io_x),
    .io_y(mod_20_io_y),
    .io_lt(mod_20_io_lt),
    .io_le(mod_20_io_le),
    .io_gt(mod_20_io_gt),
    .io_ge(mod_20_io_ge),
    .io_eq(mod_20_io_eq),
    .io_ne(mod_20_io_ne)
  );
  EnumOps mod_21 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_21_io_x),
    .io_y(mod_21_io_y),
    .io_lt(mod_21_io_lt),
    .io_le(mod_21_io_le),
    .io_gt(mod_21_io_gt),
    .io_ge(mod_21_io_ge),
    .io_eq(mod_21_io_eq),
    .io_ne(mod_21_io_ne)
  );
  EnumOps mod_22 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_22_io_x),
    .io_y(mod_22_io_y),
    .io_lt(mod_22_io_lt),
    .io_le(mod_22_io_le),
    .io_gt(mod_22_io_gt),
    .io_ge(mod_22_io_ge),
    .io_eq(mod_22_io_eq),
    .io_ne(mod_22_io_ne)
  );
  EnumOps mod_23 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_23_io_x),
    .io_y(mod_23_io_y),
    .io_lt(mod_23_io_lt),
    .io_le(mod_23_io_le),
    .io_gt(mod_23_io_gt),
    .io_ge(mod_23_io_ge),
    .io_eq(mod_23_io_eq),
    .io_ne(mod_23_io_ne)
  );
  EnumOps mod_24 ( // @[StrongEnum.scala 236:21]
    .io_x(mod_24_io_x),
    .io_y(mod_24_io_y),
    .io_lt(mod_24_io_lt),
    .io_le(mod_24_io_le),
    .io_gt(mod_24_io_gt),
    .io_ge(mod_24_io_ge),
    .io_eq(mod_24_io_eq),
    .io_ne(mod_24_io_ne)
  );
  assign mod_io_x = 7'h0; // @[StrongEnum.scala 237:14]
  assign mod_io_y = 7'h0; // @[StrongEnum.scala 238:14]
  assign mod_1_io_x = 7'h0; // @[StrongEnum.scala 237:14]
  assign mod_1_io_y = 7'h1; // @[StrongEnum.scala 238:14]
  assign mod_2_io_x = 7'h0; // @[StrongEnum.scala 237:14]
  assign mod_2_io_y = 7'h2; // @[StrongEnum.scala 238:14]
  assign mod_3_io_x = 7'h0; // @[StrongEnum.scala 237:14]
  assign mod_3_io_y = 7'h64; // @[StrongEnum.scala 238:14]
  assign mod_4_io_x = 7'h0; // @[StrongEnum.scala 237:14]
  assign mod_4_io_y = 7'h65; // @[StrongEnum.scala 238:14]
  assign mod_5_io_x = 7'h1; // @[StrongEnum.scala 237:14]
  assign mod_5_io_y = 7'h0; // @[StrongEnum.scala 238:14]
  assign mod_6_io_x = 7'h1; // @[StrongEnum.scala 237:14]
  assign mod_6_io_y = 7'h1; // @[StrongEnum.scala 238:14]
  assign mod_7_io_x = 7'h1; // @[StrongEnum.scala 237:14]
  assign mod_7_io_y = 7'h2; // @[StrongEnum.scala 238:14]
  assign mod_8_io_x = 7'h1; // @[StrongEnum.scala 237:14]
  assign mod_8_io_y = 7'h64; // @[StrongEnum.scala 238:14]
  assign mod_9_io_x = 7'h1; // @[StrongEnum.scala 237:14]
  assign mod_9_io_y = 7'h65; // @[StrongEnum.scala 238:14]
  assign mod_10_io_x = 7'h2; // @[StrongEnum.scala 237:14]
  assign mod_10_io_y = 7'h0; // @[StrongEnum.scala 238:14]
  assign mod_11_io_x = 7'h2; // @[StrongEnum.scala 237:14]
  assign mod_11_io_y = 7'h1; // @[StrongEnum.scala 238:14]
  assign mod_12_io_x = 7'h2; // @[StrongEnum.scala 237:14]
  assign mod_12_io_y = 7'h2; // @[StrongEnum.scala 238:14]
  assign mod_13_io_x = 7'h2; // @[StrongEnum.scala 237:14]
  assign mod_13_io_y = 7'h64; // @[StrongEnum.scala 238:14]
  assign mod_14_io_x = 7'h2; // @[StrongEnum.scala 237:14]
  assign mod_14_io_y = 7'h65; // @[StrongEnum.scala 238:14]
  assign mod_15_io_x = 7'h64; // @[StrongEnum.scala 237:14]
  assign mod_15_io_y = 7'h0; // @[StrongEnum.scala 238:14]
  assign mod_16_io_x = 7'h64; // @[StrongEnum.scala 237:14]
  assign mod_16_io_y = 7'h1; // @[StrongEnum.scala 238:14]
  assign mod_17_io_x = 7'h64; // @[StrongEnum.scala 237:14]
  assign mod_17_io_y = 7'h2; // @[StrongEnum.scala 238:14]
  assign mod_18_io_x = 7'h64; // @[StrongEnum.scala 237:14]
  assign mod_18_io_y = 7'h64; // @[StrongEnum.scala 238:14]
  assign mod_19_io_x = 7'h64; // @[StrongEnum.scala 237:14]
  assign mod_19_io_y = 7'h65; // @[StrongEnum.scala 238:14]
  assign mod_20_io_x = 7'h65; // @[StrongEnum.scala 237:14]
  assign mod_20_io_y = 7'h0; // @[StrongEnum.scala 238:14]
  assign mod_21_io_x = 7'h65; // @[StrongEnum.scala 237:14]
  assign mod_21_io_y = 7'h1; // @[StrongEnum.scala 238:14]
  assign mod_22_io_x = 7'h65; // @[StrongEnum.scala 237:14]
  assign mod_22_io_y = 7'h2; // @[StrongEnum.scala 238:14]
  assign mod_23_io_x = 7'h65; // @[StrongEnum.scala 237:14]
  assign mod_23_io_y = 7'h64; // @[StrongEnum.scala 238:14]
  assign mod_24_io_x = 7'h65; // @[StrongEnum.scala 237:14]
  assign mod_24_io_y = 7'h65; // @[StrongEnum.scala 238:14]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_io_eq) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_io_eq) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_io_ne)) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_io_ne)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_1_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_1_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_1_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_1_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_1_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_1_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_1_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_1_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_1_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_1_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_1_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_1_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_2_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_2_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_2_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_2_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_2_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_2_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_2_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_2_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_2_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_2_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_2_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_2_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_3_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_3_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_3_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_3_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_3_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_3_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_3_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_3_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_3_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_3_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_3_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_3_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_4_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_4_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_4_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_4_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_4_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_4_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_4_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_4_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_4_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_4_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_4_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_4_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_5_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_5_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_5_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_5_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_5_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_5_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_5_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_5_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_5_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_5_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_5_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_5_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_6_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_6_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_6_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_6_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_6_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_6_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_6_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_6_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_6_io_eq) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_6_io_eq) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_6_io_ne)) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_6_io_ne)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_7_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_7_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_7_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_7_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_7_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_7_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_7_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_7_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_7_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_7_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_7_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_7_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_8_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_8_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_8_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_8_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_8_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_8_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_8_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_8_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_8_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_8_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_8_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_8_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_9_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_9_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_9_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_9_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_9_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_9_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_9_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_9_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_9_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_9_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_9_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_9_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_10_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_10_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_10_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_10_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_10_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_10_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_10_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_10_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_10_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_10_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_10_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_10_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_11_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_11_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_11_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_11_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_11_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_11_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_11_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_11_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_11_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_11_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_11_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_11_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_12_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_12_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_12_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_12_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_12_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_12_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_12_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_12_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_12_io_eq) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_12_io_eq) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_12_io_ne)) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_12_io_ne)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_13_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_13_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_13_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_13_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_13_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_13_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_13_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_13_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_13_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_13_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_13_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_13_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_14_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_14_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_14_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_14_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_14_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_14_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_14_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_14_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_14_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_14_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_14_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_14_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_15_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_15_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_15_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_15_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_15_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_15_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_15_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_15_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_15_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_15_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_15_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_15_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_16_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_16_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_16_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_16_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_16_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_16_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_16_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_16_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_16_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_16_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_16_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_16_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_17_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_17_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_17_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_17_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_17_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_17_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_17_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_17_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_17_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_17_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_17_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_17_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_18_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_18_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_18_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_18_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_18_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_18_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_18_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_18_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_18_io_eq) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_18_io_eq) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_18_io_ne)) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_18_io_ne)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~mod_19_io_lt) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~mod_19_io_lt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_19_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_19_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_19_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_19_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_19_io_ge)) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_19_io_ge)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_19_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_19_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_19_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_19_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_20_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_20_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_20_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_20_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_20_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_20_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_20_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_20_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_20_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_20_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_20_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_20_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_21_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_21_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_21_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_21_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_21_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_21_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_21_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_21_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_21_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_21_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_21_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_21_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_22_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_22_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_22_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_22_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_22_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_22_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_22_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_22_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_22_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_22_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_22_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_22_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_23_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_23_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_23_io_le)) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_23_io_le)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_23_io_gt) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_23_io_gt) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_23_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_23_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_23_io_eq)) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_23_io_eq)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_23_io_ne) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_23_io_ne) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~mod_24_io_lt)) begin
          $fatal; // @[StrongEnum.scala 240:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~mod_24_io_lt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:240 assert(mod.io.lt === (x.asUInt() < y.asUInt()))\n"); // @[StrongEnum.scala 240:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_24_io_le) begin
          $fatal; // @[StrongEnum.scala 241:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_24_io_le) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:241 assert(mod.io.le === (x.asUInt() <= y.asUInt()))\n"); // @[StrongEnum.scala 241:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_24_io_gt)) begin
          $fatal; // @[StrongEnum.scala 242:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_24_io_gt)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:242 assert(mod.io.gt === (x.asUInt() > y.asUInt()))\n"); // @[StrongEnum.scala 242:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_24_io_ge) begin
          $fatal; // @[StrongEnum.scala 243:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_24_io_ge) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:243 assert(mod.io.ge === (x.asUInt() >= y.asUInt()))\n"); // @[StrongEnum.scala 243:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~mod_24_io_eq) begin
          $fatal; // @[StrongEnum.scala 244:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~mod_24_io_eq) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:244 assert(mod.io.eq === (x.asUInt() === y.asUInt()))\n"); // @[StrongEnum.scala 244:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(~mod_24_io_ne)) begin
          $fatal; // @[StrongEnum.scala 245:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(~mod_24_io_ne)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at StrongEnum.scala:245 assert(mod.io.ne === (x.asUInt() =/= y.asUInt()))\n"); // @[StrongEnum.scala 245:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5) begin
          $finish; // @[StrongEnum.scala 247:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
