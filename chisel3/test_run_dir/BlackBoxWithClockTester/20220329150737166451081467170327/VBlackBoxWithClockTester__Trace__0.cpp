// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithClockTester__Syms.h"


void VBlackBoxWithClockTester___024root__trace_chg_sub_0(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep);

void VBlackBoxWithClockTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_chg_top_0\n"); );
    // Init
    VBlackBoxWithClockTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxWithClockTester___024root*>(voidSelf);
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBlackBoxWithClockTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VBlackBoxWithClockTester___024root__trace_chg_sub_0(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles))));
        tracep->chgBit(oldp+1,(vlSelf->BlackBoxWithClockTester__DOT__blackBox__DOT__register));
        tracep->chgBit(oldp+2,(vlSelf->BlackBoxWithClockTester__DOT__model));
        tracep->chgCData(oldp+3,(vlSelf->BlackBoxWithClockTester__DOT__cycles),4);
        tracep->chgBit(oldp+4,((0xeU == (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles))));
    }
    tracep->chgBit(oldp+5,(vlSelf->clock));
    tracep->chgBit(oldp+6,(vlSelf->reset));
}

void VBlackBoxWithClockTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_cleanup\n"); );
    // Init
    VBlackBoxWithClockTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxWithClockTester___024root*>(voidSelf);
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
