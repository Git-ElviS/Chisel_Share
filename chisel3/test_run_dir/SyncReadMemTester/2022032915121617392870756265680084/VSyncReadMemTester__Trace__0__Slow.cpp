// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncReadMemTester__Syms.h"


VL_ATTR_COLD void VSyncReadMemTester___024root__trace_init_sub__TOP__0(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->pushNamePrefix("SyncReadMemTester ");
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBit(c+3,"mem_rdata_en", false,-1);
    tracep->declBit(c+4,"mem_rdata_addr", false,-1);
    tracep->declBus(c+5,"mem_rdata_data", false,-1, 1,0);
    tracep->declBus(c+13,"mem_MPORT_data", false,-1, 1,0);
    tracep->declBit(c+6,"mem_MPORT_addr", false,-1);
    tracep->declBit(c+14,"mem_MPORT_mask", false,-1);
    tracep->declBit(c+7,"mem_MPORT_en", false,-1);
    tracep->declBus(c+15,"mem_MPORT_1_data", false,-1, 1,0);
    tracep->declBit(c+6,"mem_MPORT_1_addr", false,-1);
    tracep->declBit(c+14,"mem_MPORT_1_mask", false,-1);
    tracep->declBit(c+8,"mem_MPORT_1_en", false,-1);
    tracep->declBit(c+3,"mem_rdata_en_pipe_0", false,-1);
    tracep->declBit(c+4,"mem_rdata_addr_pipe_0", false,-1);
    tracep->declBus(c+9,"cnt", false,-1, 2,0);
    tracep->declBit(c+10,"cnt_wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_init_top(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root__trace_init_top\n"); );
    // Body
    VSyncReadMemTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSyncReadMemTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSyncReadMemTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_register(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSyncReadMemTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSyncReadMemTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSyncReadMemTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_full_sub_0(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root__trace_full_top_0\n"); );
    // Init
    VSyncReadMemTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemTester___024root*>(voidSelf);
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSyncReadMemTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_full_sub_0(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->SyncReadMemTester__DOT__mem[0]),2);
    tracep->fullCData(oldp+2,(vlSelf->SyncReadMemTester__DOT__mem[1]),2);
    tracep->fullBit(oldp+3,(vlSelf->SyncReadMemTester__DOT__mem_rdata_en_pipe_0));
    tracep->fullBit(oldp+4,(vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0));
    tracep->fullCData(oldp+5,(vlSelf->SyncReadMemTester__DOT__mem
                              [vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0]),2);
    tracep->fullBit(oldp+6,((1U & (IData)(vlSelf->SyncReadMemTester__DOT__cnt))));
    tracep->fullBit(oldp+7,((0U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))));
    tracep->fullBit(oldp+8,(((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
                             & (1U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt)))));
    tracep->fullCData(oldp+9,(vlSelf->SyncReadMemTester__DOT__cnt),3);
    tracep->fullBit(oldp+10,((4U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))));
    tracep->fullBit(oldp+11,(vlSelf->clock));
    tracep->fullBit(oldp+12,(vlSelf->reset));
    tracep->fullCData(oldp+13,(3U),2);
    tracep->fullBit(oldp+14,(1U));
    tracep->fullCData(oldp+15,(2U),2);
}
