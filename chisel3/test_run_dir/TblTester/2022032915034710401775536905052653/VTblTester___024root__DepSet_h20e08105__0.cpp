// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTblTester.h for the primary calling header

#include "verilated.h"

#include "VTblTester__Syms.h"
#include "VTblTester___024root.h"

VL_INLINE_OPT void VTblTester___024root___sequent__TOP__0(VTblTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0;
    CData/*3:0*/ __Vdlyvval__TblTester__DOT__dut__DOT__m__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((0U < (IData)(vlSelf->TblTester__DOT__cnt)) 
                           & (((7U == (7U & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                             - (IData)(1U))))
                                ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_16)) 
                              == ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                   ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_8)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                              == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                              ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                              : vlSelf->TblTester__DOT__dut__DOT__m
                             [vlSelf->TblTester__DOT__dut_io_ri]) 
                            != ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                 ? 1U : (IData)(vlSelf->TblTester__DOT___GEN_24)))))) {
            VL_WRITEF("[%0t] %%Error: TblTester.v:148: Assertion failed in %NTblTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/TblTester/2022032915034710401775536905052653/TblTester.v", 148, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((0U < (IData)(vlSelf->TblTester__DOT__cnt)) 
                           & (((7U == (7U & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                             - (IData)(1U))))
                                ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_16)) 
                              == ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                   ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_8)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                              == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                              ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                              : vlSelf->TblTester__DOT__dut__DOT__m
                             [vlSelf->TblTester__DOT__dut_io_ri]) 
                            != ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                 ? 1U : (IData)(vlSelf->TblTester__DOT___GEN_24)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((0U < (IData)(vlSelf->TblTester__DOT__cnt)) 
                           & (((7U == (7U & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                             - (IData)(1U))))
                                ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_16)) 
                              != ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                   ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_8)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                              == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                              ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                              : vlSelf->TblTester__DOT__dut__DOT__m
                             [vlSelf->TblTester__DOT__dut_io_ri]) 
                            != ((7U == (7U & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                              - (IData)(1U))))
                                 ? 1U : ((6U == (7U 
                                                 & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                    - (IData)(1U))))
                                          ? 4U : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 2U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 0xcU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                          - (IData)(1U))))
                                                      ? 6U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                           - (IData)(1U))))
                                                       ? 0xdU
                                                       : 4U))))))))))) {
            VL_WRITEF("[%0t] %%Error: TblTester.v:170: Assertion failed in %NTblTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/TblTester/2022032915034710401775536905052653/TblTester.v", 170, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((0U < (IData)(vlSelf->TblTester__DOT__cnt)) 
                           & (((7U == (7U & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                             - (IData)(1U))))
                                ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_16)) 
                              != ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                   ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_8)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                              == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                              ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                              : vlSelf->TblTester__DOT__dut__DOT__m
                             [vlSelf->TblTester__DOT__dut_io_ri]) 
                            != ((7U == (7U & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                              - (IData)(1U))))
                                 ? 1U : ((6U == (7U 
                                                 & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                    - (IData)(1U))))
                                          ? 4U : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 2U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 0xcU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                          - (IData)(1U))))
                                                      ? 6U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                           - (IData)(1U))))
                                                       ? 0xdU
                                                       : 4U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((7U == (IData)(vlSelf->TblTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/TblTester/2022032915034710401775536905052653/TblTester.v", 192, "");
        }
    }
    __Vdlyvval__TblTester__DOT__dut__DOT__m__v0 = vlSelf->TblTester__DOT__dut_io_d;
    __Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0 = vlSelf->TblTester__DOT__dut_io_wi;
    vlSelf->TblTester__DOT__dut__DOT__m[__Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0] 
        = __Vdlyvval__TblTester__DOT__dut__DOT__m__v0;
    vlSelf->TblTester__DOT__cnt = ((IData)(vlSelf->reset)
                                    ? 0U : (IData)(vlSelf->TblTester__DOT___wrap_value_T_1));
    vlSelf->TblTester__DOT___wrap_value_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->TblTester__DOT__cnt)));
    vlSelf->TblTester__DOT___GEN_8 = ((6U == (IData)(vlSelf->TblTester__DOT__cnt))
                                       ? 8U : ((5U 
                                                == (IData)(vlSelf->TblTester__DOT__cnt))
                                                ? 0xdU
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->TblTester__DOT__cnt))
                                                    ? 9U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->TblTester__DOT__cnt))
                                                     ? 9U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->TblTester__DOT__cnt))
                                                      ? 7U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->TblTester__DOT__cnt))
                                                       ? 0xdU
                                                       : 7U))))));
    vlSelf->TblTester__DOT___GEN_16 = ((6U == (7U & 
                                               ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                - (IData)(1U))))
                                        ? 8U : ((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                     - (IData)(1U))))
                                                 ? 0xdU
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                      - (IData)(1U))))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                       - (IData)(1U))))
                                                   ? 9U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                        - (IData)(1U))))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                         - (IData)(1U))))
                                                     ? 0xdU
                                                     : 7U))))));
    vlSelf->TblTester__DOT___GEN_24 = ((6U == (IData)(vlSelf->TblTester__DOT__cnt))
                                        ? 4U : ((5U 
                                                 == (IData)(vlSelf->TblTester__DOT__cnt))
                                                 ? 5U
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->TblTester__DOT__cnt))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TblTester__DOT__cnt))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->TblTester__DOT__cnt))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->TblTester__DOT__cnt))
                                                     ? 0xdU
                                                     : 4U))))));
    vlSelf->TblTester__DOT__dut_io_wi = ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                          ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_8));
    vlSelf->TblTester__DOT__dut_io_ri = ((7U == (7U 
                                                 & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                    - (IData)(1U))))
                                          ? 5U : (IData)(vlSelf->TblTester__DOT___GEN_16));
    vlSelf->TblTester__DOT__dut_io_d = ((7U == (IData)(vlSelf->TblTester__DOT__cnt))
                                         ? 1U : (IData)(vlSelf->TblTester__DOT___GEN_24));
}
