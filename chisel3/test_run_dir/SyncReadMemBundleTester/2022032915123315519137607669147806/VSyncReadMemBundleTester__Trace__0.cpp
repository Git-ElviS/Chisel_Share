// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncReadMemBundleTester__Syms.h"


void VSyncReadMemBundleTester___024root__trace_chg_sub_0(VSyncReadMemBundleTester___024root* vlSelf, VerilatedVcd* tracep);

void VSyncReadMemBundleTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root__trace_chg_top_0\n"); );
    // Init
    VSyncReadMemBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemBundleTester___024root*>(voidSelf);
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSyncReadMemBundleTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSyncReadMemBundleTester___024root__trace_chg_sub_0(VSyncReadMemBundleTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->SyncReadMemBundleTester__DOT__mem_foo[0]),2);
        tracep->chgCData(oldp+1,(vlSelf->SyncReadMemBundleTester__DOT__mem_foo[1]),2);
        tracep->chgBit(oldp+2,(vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_en_pipe_0));
        tracep->chgBit(oldp+3,(vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0));
        tracep->chgCData(oldp+4,(vlSelf->SyncReadMemBundleTester__DOT__mem_foo
                                 [vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0]),2);
        tracep->chgBit(oldp+5,((1U & (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))));
        tracep->chgBit(oldp+6,((0U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))));
        tracep->chgBit(oldp+7,(((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
                                & (1U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)))));
        tracep->chgCData(oldp+8,(vlSelf->SyncReadMemBundleTester__DOT__cnt),3);
        tracep->chgBit(oldp+9,((4U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))));
    }
    tracep->chgBit(oldp+10,(vlSelf->clock));
    tracep->chgBit(oldp+11,(vlSelf->reset));
}

void VSyncReadMemBundleTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root__trace_cleanup\n"); );
    // Init
    VSyncReadMemBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemBundleTester___024root*>(voidSelf);
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
