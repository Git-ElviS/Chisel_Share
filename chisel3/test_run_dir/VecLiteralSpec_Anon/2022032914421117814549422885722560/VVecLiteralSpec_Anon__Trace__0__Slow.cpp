// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVecLiteralSpec_Anon__Syms.h"


VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_init_sub__TOP__0(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("VecLiteralSpec_Anon ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+6,"m_clock", false,-1);
    tracep->declBit(c+8,"m_reset", false,-1);
    tracep->declBus(c+1,"m_in_1", false,-1, 7,0);
    tracep->declBus(c+1,"m_in_2", false,-1, 7,0);
    tracep->declBus(c+2,"m_out_1", false,-1, 7,0);
    tracep->declBus(c+3,"m_out_2", false,-1, 7,0);
    tracep->declBus(c+4,"counter", false,-1, 2,0);
    tracep->declBit(c+5,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->declBus(c+1,"in_1", false,-1, 7,0);
    tracep->declBus(c+1,"in_2", false,-1, 7,0);
    tracep->declBus(c+2,"out_1", false,-1, 7,0);
    tracep->declBus(c+3,"out_2", false,-1, 7,0);
    tracep->declBus(c+2,"y_1", false,-1, 7,0);
    tracep->declBus(c+3,"y_2", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_init_top(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_init_top\n"); );
    // Body
    VVecLiteralSpec_Anon___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VVecLiteralSpec_Anon___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VVecLiteralSpec_Anon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_register(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VVecLiteralSpec_Anon___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VVecLiteralSpec_Anon___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VVecLiteralSpec_Anon___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_full_sub_0(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_full_top_0\n"); );
    // Init
    VVecLiteralSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVecLiteralSpec_Anon___024root*>(voidSelf);
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VVecLiteralSpec_Anon___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root__trace_full_sub_0(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(((2U > (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))
                                ? 0xffU : 0U)),8);
    tracep->fullCData(oldp+2,(vlSelf->VecLiteralSpec_Anon__DOT__m__DOT__y_1),8);
    tracep->fullCData(oldp+3,(vlSelf->VecLiteralSpec_Anon__DOT__m__DOT__y_2),8);
    tracep->fullCData(oldp+4,(vlSelf->VecLiteralSpec_Anon__DOT__counter),3);
    tracep->fullBit(oldp+5,((7U == (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))));
    tracep->fullBit(oldp+6,(vlSelf->clock));
    tracep->fullBit(oldp+7,(vlSelf->reset));
    tracep->fullBit(oldp+8,(((2U > (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))
                              ? (IData)(vlSelf->reset)
                              : ((2U == (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))
                                  ? (IData)(vlSelf->reset)
                                  : ((3U == (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter)) 
                                     | (IData)(vlSelf->reset))))));
}
