// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetAggregateTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetAggregateTester__Syms.h"
#include "VAsyncResetAggregateTester___024root.h"

VL_INLINE_OPT void VAsyncResetAggregateTester___024root___sequent__TOP__0(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:57: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 57, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:70 assert(reg(0).x === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:79: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 79, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:71 assert(reg(0).y === 6.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:101: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 101, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:72 assert(reg(1).x === 7.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:123: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 123, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:73 assert(reg(1).y === 8.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:145: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 145, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:76 assert(reg(0).x === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:167: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 167, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:77 assert(reg(0).y === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:189: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 189, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:78 assert(reg(1).x === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:211: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 211, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:79 assert(reg(1).y === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:233: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 233, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:81 assert(reg(0).x === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:255: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 255, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:82 assert(reg(0).y === 6.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:277: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 277, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:83 assert(reg(1).x === 7.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:299: Assertion failed in %NAsyncResetAggregateTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 299, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->AsyncResetAggregateTester__DOT___T_19)) 
                           & (7U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:84 assert(reg(1).y === 8.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 321, "");
        }
    }
    vlSelf->AsyncResetAggregateTester__DOT__cDiv_value 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1));
    vlSelf->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetAggregateTester__DOT__cDiv_value)));
    vlSelf->AsyncResetAggregateTester__DOT__slowClk 
        = (3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__cDiv_value));
}
