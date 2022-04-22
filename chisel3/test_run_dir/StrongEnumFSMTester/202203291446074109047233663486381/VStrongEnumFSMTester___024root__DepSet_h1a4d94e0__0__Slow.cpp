// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStrongEnumFSMTester.h for the primary calling header

#include "verilated.h"

#include "VStrongEnumFSMTester___024root.h"

VL_ATTR_COLD void VStrongEnumFSMTester___024root___settle__TOP__0(VStrongEnumFSMTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->StrongEnumFSMTester__DOT__wrap = (9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value));
    vlSelf->StrongEnumFSMTester__DOT___value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->StrongEnumFSMTester__DOT__value)));
    vlSelf->StrongEnumFSMTester__DOT__dut_io_in = (
                                                   (9U 
                                                    != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                   & ((8U 
                                                       == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                         | ((6U 
                                                             != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                            & ((5U 
                                                                == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                               | ((4U 
                                                                   == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                                  | ((3U 
                                                                      == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                                     | ((2U 
                                                                         != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                                        & (1U 
                                                                           == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))))))))));
    vlSelf->StrongEnumFSMTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlSelf->StrongEnumFSMTester__DOT__dut_io_in)
            ? (IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state)
            : 0U);
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root___eval_initial(VStrongEnumFSMTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root___eval_settle(VStrongEnumFSMTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root___eval_settle\n"); );
    // Body
    VStrongEnumFSMTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root___final(VStrongEnumFSMTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root___final\n"); );
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root___ctor_var_reset(VStrongEnumFSMTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->StrongEnumFSMTester__DOT__dut_io_in = VL_RAND_RESET_I(1);
    vlSelf->StrongEnumFSMTester__DOT__value = VL_RAND_RESET_I(4);
    vlSelf->StrongEnumFSMTester__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->StrongEnumFSMTester__DOT___value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->StrongEnumFSMTester__DOT__dut__DOT___GEN_2 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
