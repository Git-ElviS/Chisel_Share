// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRMaxPeriod.h for the primary calling header

#include "verilated.h"

#include "VLFSRMaxPeriod___024root.h"

VL_ATTR_COLD void VLFSRMaxPeriod___024root___settle__TOP__0(VLFSRMaxPeriod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->LFSRMaxPeriod__DOT__wrap_wrap_wrap = (0x7ffeU 
                                                  == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value));
    vlSelf->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 
        = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value)));
    vlSelf->LFSRMaxPeriod__DOT__rv_lo = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6) 
                                          << 6U) | 
                                         (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4) 
                                            << 4U) 
                                           | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0)))))));
    vlSelf->LFSRMaxPeriod__DOT__rv = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_14) 
                                       << 0xeU) | (
                                                   ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                                      << 7U) 
                                                                     | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_lo)))))))));
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root___eval_initial(VLFSRMaxPeriod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root___eval_settle(VLFSRMaxPeriod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root___eval_settle\n"); );
    // Body
    VLFSRMaxPeriod___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root___final(VLFSRMaxPeriod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root___final\n"); );
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root___ctor_var_reset(VLFSRMaxPeriod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_lo = VL_RAND_RESET_I(7);
    vlSelf->LFSRMaxPeriod__DOT__rv = VL_RAND_RESET_I(15);
    vlSelf->LFSRMaxPeriod__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__seed = VL_RAND_RESET_I(15);
    vlSelf->LFSRMaxPeriod__DOT__wrap_value = VL_RAND_RESET_I(15);
    vlSelf->LFSRMaxPeriod__DOT__wrap_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 = VL_RAND_RESET_I(15);
    vlSelf->LFSRMaxPeriod__DOT__last = VL_RAND_RESET_I(15);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
