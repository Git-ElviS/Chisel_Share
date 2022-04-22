// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGStepTest.h for the primary calling header

#include "verilated.h"

#include "VPRNGStepTest__Syms.h"
#include "VPRNGStepTest___024root.h"

VL_INLINE_OPT void VPRNGStepTest___024root___sequent__TOP__0(VPRNGStepTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_0;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_1;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_1;
    CData/*0:0*/ __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_2;
    // Body
    __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_2 
        = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2;
    __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_1 
        = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1;
    __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11 
        = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11;
    __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_0 
        = vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0;
    __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_1 
        = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->PRNGStepTest__DOT__count2)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                              << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                            != (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                 << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0)))))))))))))))))))) {
            VL_WRITEF("[%0t] %%Error: PRNGStepTest.v:855: Assertion failed in %NPRNGStepTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PRNGStepTest/202203291517502286531556083698522/PRNGStepTest.v", 855, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->PRNGStepTest__DOT__count2)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                              << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                            != (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                 << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0)))))))))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 1-step and 2-step PRNGs did not agree! (0b%b != 0b%b)\n    at PRNGSpec.scala:32 assert(a === b, \"1-step and 2-step PRNGs did not agree! (0b%%b != 0b%%b)\", a, b)\n",
                       16,(((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                            << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))),
                       16,(((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                            << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0)))))))))))))))));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U == (IData)(vlSelf->PRNGStepTest__DOT__count4)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                              << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                            != (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                 << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0)))))))))))))))))))) {
            VL_WRITEF("[%0t] %%Error: PRNGStepTest.v:879: Assertion failed in %NPRNGStepTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PRNGStepTest/202203291517502286531556083698522/PRNGStepTest.v", 879, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U == (IData)(vlSelf->PRNGStepTest__DOT__count4)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                              << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0)))))))))))))))) 
                            != (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                 << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0)))))))))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 1-step and 4-step PRNGs did not agree!\n    at PRNGSpec.scala:36 assert(a === c, \"1-step and 4-step PRNGs did not agree!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelf->PRNGStepTest__DOT__done_value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PRNGStepTest/202203291517502286531556083698522/PRNGStepTest.v", 903, "");
        }
    }
    if (vlSelf->reset) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_2 = 0U;
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_1 = 0U;
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11 = 0U;
    } else if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_2 
            = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14;
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_1 
            = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13;
        __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11 
            = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7;
    }
    __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15));
    if (vlSelf->reset) {
        __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_1 = 0U;
        vlSelf->PRNGStepTest__DOT__done_value = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12 = 0U;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7 = 0U;
    } else {
        if (vlSelf->PRNGStepTest__DOT__count2) {
            __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_1 
                = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15;
        }
        vlSelf->PRNGStepTest__DOT__done_value = vlSelf->PRNGStepTest__DOT___done_wrap_value_T_1;
        if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8;
        }
        if (vlSelf->PRNGStepTest__DOT__count2) {
            vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14 
                = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12;
        }
        if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10;
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9;
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3;
        }
    }
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15 = 0U;
    } else if (vlSelf->PRNGStepTest__DOT__count2) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13;
    }
    vlSelf->PRNGStepTest__DOT___done_wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->PRNGStepTest__DOT__done_value)));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8 = 0U;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3 = 0U;
    } else {
        if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4;
        }
        if (vlSelf->PRNGStepTest__DOT__count2) {
            vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12 
                = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10;
        }
        if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6;
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5;
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15;
        }
    }
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4 = 0U;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5 = 0U;
        vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15 = 0U;
    } else {
        if (vlSelf->PRNGStepTest__DOT__count2) {
            vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13 
                = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11;
        }
        if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0;
        }
        if (vlSelf->PRNGStepTest__DOT__count2) {
            vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10 
                = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8;
        }
        if ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))) {
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2;
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1;
            vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15 
                = vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11;
        }
    }
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11 = 0U;
    } else if (vlSelf->PRNGStepTest__DOT__count2) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9;
    }
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2 
        = __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_2;
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1 
        = __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_1;
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11 
        = __Vdly__PRNGStepTest__DOT__c_prng__DOT__state_11;
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT___GEN_0));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8 = 0U;
        vlSelf->PRNGStepTest__DOT__count4 = 0U;
    } else {
        if (vlSelf->PRNGStepTest__DOT__count2) {
            vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8 
                = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6;
        }
        vlSelf->PRNGStepTest__DOT__count4 = vlSelf->PRNGStepTest__DOT___count4_wrap_value_T_1;
    }
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9 = 0U;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6 = 0U;
    } else if (vlSelf->PRNGStepTest__DOT__count2) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4;
    }
    vlSelf->PRNGStepTest__DOT___count4_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->PRNGStepTest__DOT__count4)));
    vlSelf->PRNGStepTest__DOT__c_prng__DOT___GEN_0 
        = ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))
            ? (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12)
            : (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7 = 0U;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4 = 0U;
    } else if (vlSelf->PRNGStepTest__DOT__count2) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2;
    }
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5 = 0U;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2 = 0U;
    } else if (vlSelf->PRNGStepTest__DOT__count2) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3;
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0;
    }
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8));
    if (vlSelf->reset) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3 = 0U;
    } else if (vlSelf->PRNGStepTest__DOT__count2) {
        vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3 
            = vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1;
    }
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1 
        = __Vdly__PRNGStepTest__DOT__b_prng__DOT__state_1;
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT___GEN_0));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7));
    vlSelf->PRNGStepTest__DOT__count2 = ((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->PRNGStepTest__DOT___count2_wrap_value_T_1));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6));
    vlSelf->PRNGStepTest__DOT___count2_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->PRNGStepTest__DOT__count2)));
    vlSelf->PRNGStepTest__DOT__b_prng__DOT___GEN_0 
        = ((IData)(vlSelf->PRNGStepTest__DOT__count2)
            ? (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14)
            : (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0));
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0 
        = __Vdly__PRNGStepTest__DOT__a_prng__DOT__state_0;
}
