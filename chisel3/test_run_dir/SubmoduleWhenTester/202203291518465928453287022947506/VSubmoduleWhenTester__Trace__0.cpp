// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSubmoduleWhenTester__Syms.h"


void VSubmoduleWhenTester___024root__trace_chg_sub_0(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep);

void VSubmoduleWhenTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_chg_top_0\n"); );
    // Init
    VSubmoduleWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSubmoduleWhenTester___024root*>(voidSelf);
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSubmoduleWhenTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSubmoduleWhenTester___024root__trace_chg_sub_0(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                   ? 0xdeadbeefU : 0xbadcad0U)),32);
        tracep->chgCData(oldp+1,(vlSelf->SubmoduleWhenTester__DOT__cycle),2);
        tracep->chgBit(oldp+2,((2U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))));
    }
    tracep->chgBit(oldp+3,(vlSelf->clock));
    tracep->chgBit(oldp+4,(vlSelf->reset));
}

void VSubmoduleWhenTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_cleanup\n"); );
    // Init
    VSubmoduleWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSubmoduleWhenTester___024root*>(voidSelf);
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
