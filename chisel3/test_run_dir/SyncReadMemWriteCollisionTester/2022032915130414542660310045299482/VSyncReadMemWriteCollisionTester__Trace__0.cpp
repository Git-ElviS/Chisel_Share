// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncReadMemWriteCollisionTester__Syms.h"


void VSyncReadMemWriteCollisionTester___024root__trace_chg_sub_0(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep);

void VSyncReadMemWriteCollisionTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_chg_top_0\n"); );
    // Init
    VSyncReadMemWriteCollisionTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemWriteCollisionTester___024root*>(voidSelf);
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSyncReadMemWriteCollisionTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSyncReadMemWriteCollisionTester___024root__trace_chg_sub_0(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0[0]),2);
        tracep->chgCData(oldp+1,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0[1]),2);
        tracep->chgBit(oldp+2,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_en_pipe_0));
        tracep->chgBit(oldp+3,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0));
        tracep->chgCData(oldp+4,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0
                                 [vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0]),2);
        tracep->chgCData(oldp+5,((3U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))),2);
        tracep->chgBit(oldp+6,((1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))));
        tracep->chgCData(oldp+7,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1[0]),2);
        tracep->chgCData(oldp+8,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1[1]),2);
        tracep->chgCData(oldp+9,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1
                                 [(1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))]),2);
        tracep->chgCData(oldp+10,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0),2);
        tracep->chgCData(oldp+11,(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt),3);
        tracep->chgBit(oldp+12,((4U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))));
    }
    tracep->chgBit(oldp+13,(vlSelf->clock));
    tracep->chgBit(oldp+14,(vlSelf->reset));
}

void VSyncReadMemWriteCollisionTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_cleanup\n"); );
    // Init
    VSyncReadMemWriteCollisionTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemWriteCollisionTester___024root*>(voidSelf);
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
