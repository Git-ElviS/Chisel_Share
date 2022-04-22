// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncReadMemWriteCollisionTester__Syms.h"


VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_init_sub__TOP__0(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+14,"clock", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    tracep->pushNamePrefix("SyncReadMemWriteCollisionTester ");
    tracep->declBit(c+14,"clock", false,-1);
    tracep->declBit(c+15,"reset", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"m0", true,(i+0), 1,0);
    }
    tracep->declBit(c+3,"m0_rd0_en", false,-1);
    tracep->declBit(c+4,"m0_rd0_addr", false,-1);
    tracep->declBus(c+5,"m0_rd0_data", false,-1, 1,0);
    tracep->declBus(c+6,"m0_MPORT_data", false,-1, 1,0);
    tracep->declBit(c+7,"m0_MPORT_addr", false,-1);
    tracep->declBit(c+16,"m0_MPORT_mask", false,-1);
    tracep->declBit(c+16,"m0_MPORT_en", false,-1);
    tracep->declBit(c+3,"m0_rd0_en_pipe_0", false,-1);
    tracep->declBit(c+4,"m0_rd0_addr_pipe_0", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+8+i*1,"m1", true,(i+0), 1,0);
    }
    tracep->declBit(c+16,"m1_rd1_en", false,-1);
    tracep->declBit(c+7,"m1_rd1_addr", false,-1);
    tracep->declBus(c+10,"m1_rd1_data", false,-1, 1,0);
    tracep->declBus(c+6,"m1_MPORT_1_data", false,-1, 1,0);
    tracep->declBit(c+7,"m1_MPORT_1_addr", false,-1);
    tracep->declBit(c+16,"m1_MPORT_1_mask", false,-1);
    tracep->declBit(c+16,"m1_MPORT_1_en", false,-1);
    tracep->declBus(c+11,"m1_rd1_data_pipe_0", false,-1, 1,0);
    tracep->declBus(c+12,"cnt", false,-1, 2,0);
    tracep->declBit(c+13,"cnt_wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_init_top(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_init_top\n"); );
    // Body
    VSyncReadMemWriteCollisionTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSyncReadMemWriteCollisionTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSyncReadMemWriteCollisionTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_register(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSyncReadMemWriteCollisionTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSyncReadMemWriteCollisionTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSyncReadMemWriteCollisionTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_full_sub_0(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_full_top_0\n"); );
    // Init
    VSyncReadMemWriteCollisionTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemWriteCollisionTester___024root*>(voidSelf);
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSyncReadMemWriteCollisionTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_full_sub_0(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0[0]),2);
    tracep->fullCData(oldp+2,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0[1]),2);
    tracep->fullBit(oldp+3,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_en_pipe_0));
    tracep->fullBit(oldp+4,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0));
    tracep->fullCData(oldp+5,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m0
                              [vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0]),2);
    tracep->fullCData(oldp+6,((3U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))),2);
    tracep->fullBit(oldp+7,((1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))));
    tracep->fullCData(oldp+8,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1[0]),2);
    tracep->fullCData(oldp+9,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1[1]),2);
    tracep->fullCData(oldp+10,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1
                               [(1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))]),2);
    tracep->fullCData(oldp+11,(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0),2);
    tracep->fullCData(oldp+12,(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt),3);
    tracep->fullBit(oldp+13,((4U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))));
    tracep->fullBit(oldp+14,(vlSelf->clock));
    tracep->fullBit(oldp+15,(vlSelf->reset));
    tracep->fullBit(oldp+16,(1U));
}
