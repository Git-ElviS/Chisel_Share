// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSubmoduleWhenTester.h for the primary calling header

#include "verilated.h"

#include "VSubmoduleWhenTester__Syms.h"
#include "VSubmoduleWhenTester___024root.h"

VL_INLINE_OPT void VSubmoduleWhenTester___024root___sequent__TOP__0(VSubmoduleWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 59, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdeadbeefU != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                             ? 0xdeadbeefU
                                             : 0xbadcad0U))))) {
            VL_WRITEF("[%0t] %%Error: SubmoduleWhenTester.v:70: Assertion failed in %NSubmoduleWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 70, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdeadbeefU != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                             ? 0xdeadbeefU
                                             : 0xbadcad0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xbadcad0U != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                            ? 0xdeadbeefU
                                            : 0xbadcad0U))))) {
            VL_WRITEF("[%0t] %%Error: SubmoduleWhenTester.v:92: Assertion failed in %NSubmoduleWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 92, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xbadcad0U != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                            ? 0xdeadbeefU
                                            : 0xbadcad0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdeadbeefU != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                             ? 0xdeadbeefU
                                             : 0xbadcad0U))))) {
            VL_WRITEF("[%0t] %%Error: SubmoduleWhenTester.v:114: Assertion failed in %NSubmoduleWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 114, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdeadbeefU != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                             ? 0xdeadbeefU
                                             : 0xbadcad0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xbadcad0U != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                            ? 0xdeadbeefU
                                            : 0xbadcad0U))))) {
            VL_WRITEF("[%0t] %%Error: SubmoduleWhenTester.v:136: Assertion failed in %NSubmoduleWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 136, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xbadcad0U != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                            ? 0xdeadbeefU
                                            : 0xbadcad0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdeadbeefU != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                             ? 0xdeadbeefU
                                             : 0xbadcad0U))))) {
            VL_WRITEF("[%0t] %%Error: SubmoduleWhenTester.v:158: Assertion failed in %NSubmoduleWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 158, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdeadbeefU != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                             ? 0xdeadbeefU
                                             : 0xbadcad0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:86 assert(child.io.out === \"hdeadbeef\".U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xbadcad0U != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                            ? 0xdeadbeefU
                                            : 0xbadcad0U))))) {
            VL_WRITEF("[%0t] %%Error: SubmoduleWhenTester.v:180: Assertion failed in %NSubmoduleWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SubmoduleWhenTester/202203291518465928453287022947506/SubmoduleWhenTester.v", 180, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xbadcad0U != ((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                            ? 0xdeadbeefU
                                            : 0xbadcad0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:89 assert(child.io.out === \"h0badcad0\".U)\n");
        }
    }
    vlSelf->SubmoduleWhenTester__DOT__cycle = ((IData)(vlSelf->reset)
                                                ? 0U
                                                : ((IData)(vlSelf->SubmoduleWhenTester__DOT__wrap_wrap)
                                                    ? 0U
                                                    : (IData)(vlSelf->SubmoduleWhenTester__DOT___wrap_value_T_1)));
    vlSelf->SubmoduleWhenTester__DOT__wrap_wrap = (2U 
                                                   == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle));
    vlSelf->SubmoduleWhenTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)));
}
