// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleVendingMachineTester.h for the primary calling header

#include "verilated.h"

#include "VSimpleVendingMachineTester__Syms.h"
#include "VSimpleVendingMachineTester___024root.h"

VL_INLINE_OPT void VSimpleVendingMachineTester___024root___sequent__TOP__0(VSimpleVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state;
    // Body
    __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state 
        = vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel) 
                            & (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime))))) {
            VL_WRITEF("[%0t] %%Error: SimpleVendingMachineTester.v:45: Assertion failed in %NSimpleVendingMachineTester.dut\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SimpleVendingMachineTester/202203291518292663360538348430861/SimpleVendingMachineTester.v", 45, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel) 
                            & (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Only one of nickel or dime can be input at a time!\n    at SimpleVendingMachine.scala:19 assert(!(io.nickel && io.dime), \"Only one of nickel or dime can be input at a time!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SimpleVendingMachineTester/202203291518292663360538348430861/SimpleVendingMachineTester.v", 160, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SimpleVendingMachineTester/202203291518292663360538348430861/SimpleVendingMachineTester.v", 171, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((4U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state)) 
                            != ((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                & ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   & ((7U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      | ((6U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         & ((5U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                            & (4U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))))))) {
            VL_WRITEF("[%0t] %%Error: SimpleVendingMachineTester.v:182: Assertion failed in %NSimpleVendingMachineTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SimpleVendingMachineTester/202203291518292663360538348430861/SimpleVendingMachineTester.v", 182, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((4U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state)) 
                            != ((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                & ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   & ((7U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      | ((6U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         & ((5U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                            & (4U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SimpleVendingMachine.scala:84 assert(dut.io.dispense === expected(cycle))\n");
        }
    }
    if (vlSelf->reset) {
        __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state = 0U;
        vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state 
            = __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state;
        vlSelf->SimpleVendingMachineTester__DOT__cycle = 0U;
    } else {
        if ((0U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state))) {
            if (vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime) {
                __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state = 2U;
            } else if (vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel) {
                __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state = 1U;
            }
        } else {
            __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state 
                = ((1U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state))
                    ? ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime)
                        ? 3U : (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___GEN_2))
                    : ((2U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state))
                        ? (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___GEN_5)
                        : (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___GEN_9)));
        }
        vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state 
            = __Vdly__SimpleVendingMachineTester__DOT__dut__DOT__state;
        vlSelf->SimpleVendingMachineTester__DOT__cycle 
            = ((IData)(vlSelf->SimpleVendingMachineTester__DOT__wrap_wrap)
                ? 0U : (IData)(vlSelf->SimpleVendingMachineTester__DOT___wrap_value_T_1));
    }
    vlSelf->SimpleVendingMachineTester__DOT__wrap_wrap 
        = (9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle));
    vlSelf->SimpleVendingMachineTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)));
    vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime 
        = ((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
           | ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
              & ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                 & ((6U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                    | (5U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))));
    vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel 
        = ((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
           & ((8U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
              | ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                 & ((6U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                    & (5U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))));
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel)
            ? 2U : (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state));
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___GEN_5 
        = ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime)
            ? 4U : ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel)
                     ? 3U : (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state)));
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___GEN_9 
        = ((3U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state))
            ? ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_dime)
                ? 4U : ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut_io_nickel)
                         ? 4U : (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state)))
            : ((4U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state))
                ? 0U : (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__state)));
}
