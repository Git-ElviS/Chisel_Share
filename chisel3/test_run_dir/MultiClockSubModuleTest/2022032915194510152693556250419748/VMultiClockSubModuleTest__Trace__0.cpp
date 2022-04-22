// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiClockSubModuleTest__Syms.h"


void VMultiClockSubModuleTest___024root__trace_chg_sub_0(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep);

void VMultiClockSubModuleTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_chg_top_0\n"); );
    // Init
    VMultiClockSubModuleTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockSubModuleTest___024root*>(voidSelf);
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMultiClockSubModuleTest___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMultiClockSubModuleTest___024root__trace_chg_sub_0(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((3U > (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle))));
        tracep->chgCData(oldp+1,(vlSelf->MultiClockSubModuleTest__DOT__cycle),4);
        tracep->chgBit(oldp+2,((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle))));
    }
    tracep->chgBit(oldp+3,(vlSelf->clock));
    tracep->chgBit(oldp+4,(vlSelf->reset));
    tracep->chgBit(oldp+5,(vlSelf->MultiClockSubModuleTest__DOT__cDiv));
    tracep->chgCData(oldp+6,(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle),4);
    tracep->chgBit(oldp+7,((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle))));
}

void VMultiClockSubModuleTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_cleanup\n"); );
    // Init
    VMultiClockSubModuleTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockSubModuleTest___024root*>(voidSelf);
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
