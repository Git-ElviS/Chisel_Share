// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGUpdateSeedTest.h for the primary calling header

#include "verilated.h"

#include "VPRNGUpdateSeedTest__Syms.h"
#include "VPRNGUpdateSeedTest___024root.h"

VL_INLINE_OPT void VPRNGUpdateSeedTest___024root___sequent__TOP__0(VPRNGUpdateSeedTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_1;
    // Body
    __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_1 
        = vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15) 
                                    << 0xfU) | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0)))))))))))))))))))) {
            VL_WRITEF("[%0t] %%Error: PRNGUpdateSeedTest.v:323: Assertion failed in %NPRNGUpdateSeedTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PRNGUpdateSeedTest/20220329151809665834759619671636/PRNGUpdateSeedTest.v", 323, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15) 
                                    << 0xfU) | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0)))))))))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Output didn't match!\n    at PRNGSpec.scala:56 assert(a.io.out.asUInt === expected.U, \"Output didn't match!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PRNGUpdateSeedTest/20220329151809665834759619671636/PRNGUpdateSeedTest.v", 347, "");
        }
    }
    __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & ((2U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         | (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((2U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                     | (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & ((2U != (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)) 
                                         & (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1)));
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1 
        = __Vdly__PRNGUpdateSeedTest__DOT__a__DOT__state_1;
    vlSelf->PRNGUpdateSeedTest__DOT__count = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : (IData)(vlSelf->PRNGUpdateSeedTest__DOT___wrap_value_T_1));
    vlSelf->PRNGUpdateSeedTest__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)));
}
