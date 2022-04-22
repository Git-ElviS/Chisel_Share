// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWhenCondTester__Syms.h"


void VWhenCondTester___024root__trace_chg_sub_0(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep);

void VWhenCondTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_chg_top_0\n"); );
    // Init
    VWhenCondTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWhenCondTester___024root*>(voidSelf);
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VWhenCondTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VWhenCondTester___024root__trace_chg_sub_0(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->WhenCondTester__DOT__cycle),4);
        tracep->chgBit(oldp+1,((0xfU == (IData)(vlSelf->WhenCondTester__DOT__cycle))));
        tracep->chgBit(oldp+2,((1U & (IData)(vlSelf->WhenCondTester__DOT__cycle))));
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->WhenCondTester__DOT__cycle) 
                                      >> 1U))));
        tracep->chgBit(oldp+4,((1U & ((IData)(vlSelf->WhenCondTester__DOT__cycle) 
                                      >> 2U))));
        tracep->chgBit(oldp+5,((1U & ((IData)(vlSelf->WhenCondTester__DOT__cycle) 
                                      >> 3U))));
        tracep->chgBit(oldp+6,((IData)((3U == (3U & (IData)(vlSelf->WhenCondTester__DOT__cycle))))));
        tracep->chgBit(oldp+7,((IData)((5U == (7U & (IData)(vlSelf->WhenCondTester__DOT__cycle))))));
        tracep->chgBit(oldp+8,((IData)((9U == (IData)(vlSelf->WhenCondTester__DOT__cycle)))));
        tracep->chgBit(oldp+9,((IData)((1U == (IData)(vlSelf->WhenCondTester__DOT__cycle)))));
        tracep->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->WhenCondTester__DOT__cycle)))));
    }
    tracep->chgBit(oldp+11,(vlSelf->clock));
    tracep->chgBit(oldp+12,(vlSelf->reset));
}

void VWhenCondTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_cleanup\n"); );
    // Init
    VWhenCondTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWhenCondTester___024root*>(voidSelf);
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
