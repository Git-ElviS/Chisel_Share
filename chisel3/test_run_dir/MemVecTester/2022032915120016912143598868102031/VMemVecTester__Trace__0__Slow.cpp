// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMemVecTester__Syms.h"


VL_ATTR_COLD void VMemVecTester___024root__trace_init_sub__TOP__0(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("MemVecTester ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"mem_0", true,(i+0), 7,0);
    }
    tracep->declBit(c+3,"mem_0_MPORT_1_en", false,-1);
    tracep->declBit(c+7,"mem_0_MPORT_1_addr", false,-1);
    tracep->declBus(c+4,"mem_0_MPORT_1_data", false,-1, 7,0);
    tracep->declBus(c+8,"mem_0_MPORT_data", false,-1, 7,0);
    tracep->declBit(c+7,"mem_0_MPORT_addr", false,-1);
    tracep->declBit(c+9,"mem_0_MPORT_mask", false,-1);
    tracep->declBit(c+9,"mem_0_MPORT_en", false,-1);
    tracep->declBit(c+3,"cnt", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VMemVecTester___024root__trace_init_top(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_init_top\n"); );
    // Body
    VMemVecTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMemVecTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMemVecTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMemVecTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMemVecTester___024root__trace_register(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMemVecTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMemVecTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMemVecTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMemVecTester___024root__trace_full_sub_0(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMemVecTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_full_top_0\n"); );
    // Init
    VMemVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemVecTester___024root*>(voidSelf);
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMemVecTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMemVecTester___024root__trace_full_sub_0(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->MemVecTester__DOT__mem_0[0]),8);
    tracep->fullCData(oldp+2,(vlSelf->MemVecTester__DOT__mem_0[1]),8);
    tracep->fullBit(oldp+3,(vlSelf->MemVecTester__DOT__cnt));
    tracep->fullCData(oldp+4,(vlSelf->MemVecTester__DOT__mem_0
                              [0U]),8);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
    tracep->fullBit(oldp+7,(0U));
    tracep->fullCData(oldp+8,(1U),8);
    tracep->fullBit(oldp+9,(1U));
}
