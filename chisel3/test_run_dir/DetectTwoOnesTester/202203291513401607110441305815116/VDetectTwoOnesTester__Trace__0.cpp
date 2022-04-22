// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDetectTwoOnesTester__Syms.h"


void VDetectTwoOnesTester___024root__trace_chg_sub_0(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep);

void VDetectTwoOnesTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_chg_top_0\n"); );
    // Init
    VDetectTwoOnesTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDetectTwoOnesTester___024root*>(voidSelf);
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDetectTwoOnesTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VDetectTwoOnesTester___024root__trace_chg_sub_0(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->DetectTwoOnesTester__DOT__dut_io_in));
        tracep->chgBit(oldp+1,((2U == (IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state))));
        tracep->chgCData(oldp+2,(vlSelf->DetectTwoOnesTester__DOT__cycle),4);
        tracep->chgBit(oldp+3,((0xaU == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle))));
        tracep->chgCData(oldp+4,(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state),2);
    }
    tracep->chgBit(oldp+5,(vlSelf->clock));
    tracep->chgBit(oldp+6,(vlSelf->reset));
}

void VDetectTwoOnesTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_cleanup\n"); );
    // Init
    VDetectTwoOnesTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDetectTwoOnesTester___024root*>(voidSelf);
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
