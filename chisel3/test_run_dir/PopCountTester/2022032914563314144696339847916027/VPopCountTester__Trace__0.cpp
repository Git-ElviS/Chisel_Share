// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPopCountTester__Syms.h"


void VPopCountTester___024root__trace_chg_sub_0(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep);

void VPopCountTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_chg_top_0\n"); );
    // Init
    VPopCountTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPopCountTester___024root*>(voidSelf);
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPopCountTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VPopCountTester___024root__trace_chg_sub_0(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->PopCountTester__DOT__x),3);
        tracep->chgBit(oldp+1,(vlSelf->PopCountTester__DOT__REG));
        tracep->chgCData(oldp+2,((3U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                        + ((1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlSelf->PopCountTester__DOT__x) 
                                               >> 2U)))))),2);
        tracep->chgCData(oldp+3,((0xfU & ((7U & ((1U 
                                                  & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                                     >> 1U)))) 
                                          + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                                   >> 2U))))),4);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VPopCountTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_cleanup\n"); );
    // Init
    VPopCountTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPopCountTester___024root*>(voidSelf);
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
