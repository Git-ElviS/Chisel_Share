// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTblTester.h for the primary calling header

#include "verilated.h"

#include "VTblTester___024root.h"

VL_ATTR_COLD void VTblTester___024root___settle__TOP__0(VTblTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->TblTester__DOT___wrap_value_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->TblTester__DOT__cnt)));
    vlSelf->TblTester__DOT___GEN_6 = ((4U != (IData)(vlSelf->TblTester__DOT__cnt)) 
                                      & ((3U != (IData)(vlSelf->TblTester__DOT__cnt)) 
                                         & ((2U != (IData)(vlSelf->TblTester__DOT__cnt)) 
                                            & (1U == (IData)(vlSelf->TblTester__DOT__cnt)))));
    vlSelf->TblTester__DOT___GEN_14 = ((4U != (7U & 
                                               ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                - (IData)(1U)))) 
                                       & ((3U != (7U 
                                                  & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                     - (IData)(1U)))) 
                                          & ((2U != 
                                              (7U & 
                                               ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                - (IData)(1U)))) 
                                             & (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                    - (IData)(1U)))))));
    vlSelf->TblTester__DOT___GEN_24 = ((6U != (IData)(vlSelf->TblTester__DOT__cnt)) 
                                       & ((5U != (IData)(vlSelf->TblTester__DOT__cnt)) 
                                          & ((4U != (IData)(vlSelf->TblTester__DOT__cnt)) 
                                             & (3U 
                                                == (IData)(vlSelf->TblTester__DOT__cnt)))));
    vlSelf->TblTester__DOT__dut_io_wi = ((7U == (IData)(vlSelf->TblTester__DOT__cnt)) 
                                         | ((6U == (IData)(vlSelf->TblTester__DOT__cnt)) 
                                            | ((5U 
                                                == (IData)(vlSelf->TblTester__DOT__cnt)) 
                                               | (IData)(vlSelf->TblTester__DOT___GEN_6))));
    vlSelf->TblTester__DOT__dut_io_ri = ((7U == (7U 
                                                 & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                    - (IData)(1U)))) 
                                         | ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->TblTester__DOT__cnt) 
                                               - (IData)(1U)))) 
                                            | ((5U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->TblTester__DOT__cnt) 
                                                    - (IData)(1U)))) 
                                               | (IData)(vlSelf->TblTester__DOT___GEN_14))));
    vlSelf->TblTester__DOT__dut_io_d = ((7U == (IData)(vlSelf->TblTester__DOT__cnt)) 
                                        | (IData)(vlSelf->TblTester__DOT___GEN_24));
}

VL_ATTR_COLD void VTblTester___024root___eval_initial(VTblTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTblTester___024root___eval_settle(VTblTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root___eval_settle\n"); );
    // Body
    VTblTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTblTester___024root___final(VTblTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root___final\n"); );
}

VL_ATTR_COLD void VTblTester___024root___ctor_var_reset(VTblTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->TblTester__DOT__dut_io_wi = VL_RAND_RESET_I(1);
    vlSelf->TblTester__DOT__dut_io_ri = VL_RAND_RESET_I(1);
    vlSelf->TblTester__DOT__dut_io_d = VL_RAND_RESET_I(1);
    vlSelf->TblTester__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->TblTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TblTester__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->TblTester__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->TblTester__DOT___GEN_24 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->TblTester__DOT__dut__DOT__m[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
