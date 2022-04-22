// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWhenCondTester__Syms.h"


VL_ATTR_COLD void VWhenCondTester___024root__trace_init_sub__TOP__0(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"clock", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->pushNamePrefix("WhenCondTester ");
    tracep->declBit(c+12,"clock", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->declBus(c+1,"cycle", false,-1, 3,0);
    tracep->declBit(c+2,"wrap_wrap", false,-1);
    tracep->declBit(c+3,"pred_0", false,-1);
    tracep->declBit(c+4,"pred_1", false,-1);
    tracep->declBit(c+5,"pred_2", false,-1);
    tracep->declBit(c+6,"pred_3", false,-1);
    tracep->declBit(c+7,"w2", false,-1);
    tracep->declBit(c+8,"w3", false,-1);
    tracep->declBit(c+9,"w4", false,-1);
    tracep->declBit(c+10,"w5", false,-1);
    tracep->declBit(c+11,"w6", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VWhenCondTester___024root__trace_init_top(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_init_top\n"); );
    // Body
    VWhenCondTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VWhenCondTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWhenCondTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWhenCondTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VWhenCondTester___024root__trace_register(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VWhenCondTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VWhenCondTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VWhenCondTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VWhenCondTester___024root__trace_full_sub_0(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWhenCondTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_full_top_0\n"); );
    // Init
    VWhenCondTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWhenCondTester___024root*>(voidSelf);
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VWhenCondTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VWhenCondTester___024root__trace_full_sub_0(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->WhenCondTester__DOT__cycle),4);
    tracep->fullBit(oldp+2,((0xfU == (IData)(vlSelf->WhenCondTester__DOT__cycle))));
    tracep->fullBit(oldp+3,((1U & (IData)(vlSelf->WhenCondTester__DOT__cycle))));
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->WhenCondTester__DOT__cycle) 
                                   >> 1U))));
    tracep->fullBit(oldp+5,((1U & ((IData)(vlSelf->WhenCondTester__DOT__cycle) 
                                   >> 2U))));
    tracep->fullBit(oldp+6,((1U & ((IData)(vlSelf->WhenCondTester__DOT__cycle) 
                                   >> 3U))));
    tracep->fullBit(oldp+7,((IData)((3U == (3U & (IData)(vlSelf->WhenCondTester__DOT__cycle))))));
    tracep->fullBit(oldp+8,((IData)((5U == (7U & (IData)(vlSelf->WhenCondTester__DOT__cycle))))));
    tracep->fullBit(oldp+9,((IData)((9U == (IData)(vlSelf->WhenCondTester__DOT__cycle)))));
    tracep->fullBit(oldp+10,((IData)((1U == (IData)(vlSelf->WhenCondTester__DOT__cycle)))));
    tracep->fullBit(oldp+11,((1U & (~ (IData)(vlSelf->WhenCondTester__DOT__cycle)))));
    tracep->fullBit(oldp+12,(vlSelf->clock));
    tracep->fullBit(oldp+13,(vlSelf->reset));
}
