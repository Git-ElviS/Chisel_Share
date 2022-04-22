module CollideModule(
  input        clock,
  input        reset,
  input        a_0_b,
  input  [1:0] a_0_c__0_d,
  input  [2:0] a_0_c__0_e,
  input  [1:0] a_0_c__1_d,
  input  [2:0] a_0_c__1_e,
  input  [3:0] a_0_c_1_e,
  input        a_1_b,
  input  [1:0] a_1_c__0_d,
  input  [2:0] a_1_c__0_e,
  input  [1:0] a_1_c__1_d,
  input  [2:0] a_1_c__1_e,
  input  [3:0] a_1_c_1_e,
  output [4:0] a_0_c,
  output [4:0] a__0
);
  assign a_0_c = 5'h0;
  assign a__0 = 5'h0;
endmodule
