// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBasicRotate.h for the primary calling header

#include "verilated.h"

#include "VBasicRotate__Syms.h"
#include "VBasicRotate___024root.h"

VL_INLINE_OPT void VBasicRotate___024root___sequent__TOP__0(VBasicRotate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ BasicRotate__DOT___rotL_T_11;
    CData/*2:0*/ BasicRotate__DOT___rotR_T_10;
    CData/*0:0*/ __Vdly__BasicRotate__DOT__shiftAmount_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Shift amount: %2# rotateLeft:%b rotateRight:%b\n",
                       4,vlSelf->BasicRotate__DOT__shiftAmount,
                       3,((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                           ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                     << 2U)) | (3U 
                                                & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                   >> 1U)))
                           : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)),
                       3,((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                           ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                   >> 2U)))
                           : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->BasicRotate__DOT___T_5) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                >> 1U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)))))) {
            VL_WRITEF("[%0t] %%Error: BasicRotate.v:167: Assertion failed in %NBasicRotate\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 167, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->BasicRotate__DOT___T_5) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                >> 1U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UIntOps.scala:127 assert(rotL === \"b001\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->BasicRotate__DOT___T_5) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                >> 2U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)))))) {
            VL_WRITEF("[%0t] %%Error: BasicRotate.v:189: Assertion failed in %NBasicRotate\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 189, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->BasicRotate__DOT___T_5) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                >> 2U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UIntOps.scala:128 assert(rotR === \"b001\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                           & (1U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                >> 1U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)))))) {
            VL_WRITEF("[%0t] %%Error: BasicRotate.v:211: Assertion failed in %NBasicRotate\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 211, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                           & (1U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                >> 1U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UIntOps.scala:131 assert(rotL === \"b010\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                           & (1U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                >> 2U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)))))) {
            VL_WRITEF("[%0t] %%Error: BasicRotate.v:233: Assertion failed in %NBasicRotate\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 233, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                           & (1U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                >> 2U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UIntOps.scala:132 assert(rotR === \"b100\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                            & (1U != (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                           & (2U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                >> 1U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)))))) {
            VL_WRITEF("[%0t] %%Error: BasicRotate.v:255: Assertion failed in %NBasicRotate\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 255, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                            & (1U != (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                           & (2U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                                >> 1U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UIntOps.scala:135 assert(rotL === \"b100\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                            & (1U != (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                           & (2U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                >> 2U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)))))) {
            VL_WRITEF("[%0t] %%Error: BasicRotate.v:277: Assertion failed in %NBasicRotate\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 277, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->BasicRotate__DOT___T_5)) 
                            & (1U != (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                           & (2U == (3U & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != ((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                    ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                                >> 2U)))
                                    : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UIntOps.scala:136 assert(rotR === \"b010\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelf->BasicRotate__DOT__ctr)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BasicRotate/202203291513218404242109149860991/BasicRotate.v", 299, "");
        }
    }
    __Vdly__BasicRotate__DOT__shiftAmount_prng__DOT__state_0 
        = vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0;
    __Vdly__BasicRotate__DOT__shiftAmount_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3) 
                                     ^ (IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2)));
    vlSelf->BasicRotate__DOT__ctr = ((IData)(vlSelf->reset)
                                      ? 0U : (IData)(vlSelf->BasicRotate__DOT___ctr_T_1));
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2));
    vlSelf->BasicRotate__DOT___ctr_T_1 = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->BasicRotate__DOT__ctr)));
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1));
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0));
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0 
        = __Vdly__BasicRotate__DOT__shiftAmount_prng__DOT__state_0;
    vlSelf->BasicRotate__DOT__shiftAmount = (((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3) 
                                              << 3U) 
                                             | (((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0))));
    vlSelf->BasicRotate__DOT___T_5 = ((0U == (3U & 
                                              VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U)))) 
                                      | (3U == (3U 
                                                & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U)))));
    if ((2U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))) {
        BasicRotate__DOT___rotL_T_11 = ((((1U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                           ? 0U : 1U) 
                                         << 2U) | (3U 
                                                   & (((1U 
                                                        & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                                        ? 2U
                                                        : 1U) 
                                                      >> 1U)));
        BasicRotate__DOT___rotR_T_10 = ((((1U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                           ? 0U : 1U) 
                                         << 1U) | (1U 
                                                   & (((1U 
                                                        & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                                        ? 4U
                                                        : 1U) 
                                                      >> 2U)));
    } else if ((1U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))) {
        BasicRotate__DOT___rotL_T_11 = 2U;
        BasicRotate__DOT___rotR_T_10 = 4U;
    } else {
        BasicRotate__DOT___rotL_T_11 = 1U;
        BasicRotate__DOT___rotR_T_10 = 1U;
    }
    if ((4U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))) {
        vlSelf->BasicRotate__DOT___rotL_T_15 = ((6U 
                                                 & ((IData)(BasicRotate__DOT___rotL_T_11) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(BasicRotate__DOT___rotL_T_11) 
                                                      >> 2U)));
        vlSelf->BasicRotate__DOT___rotR_T_14 = ((4U 
                                                 & ((IData)(BasicRotate__DOT___rotR_T_10) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(BasicRotate__DOT___rotR_T_10) 
                                                      >> 1U)));
    } else {
        vlSelf->BasicRotate__DOT___rotL_T_15 = BasicRotate__DOT___rotL_T_11;
        vlSelf->BasicRotate__DOT___rotR_T_14 = BasicRotate__DOT___rotR_T_10;
    }
}
