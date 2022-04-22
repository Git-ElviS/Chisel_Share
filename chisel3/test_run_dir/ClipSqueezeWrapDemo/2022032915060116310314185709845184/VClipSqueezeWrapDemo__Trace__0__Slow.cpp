// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClipSqueezeWrapDemo__Syms.h"


VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_init_sub__TOP__0(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("ClipSqueezeWrapDemo ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"counter", false,-1, 6,0);
    tracep->declBus(c+2,"clipped", false,-1, 5,0);
    tracep->declBus(c+3,"squeezed", false,-1, 5,0);
    tracep->declBus(c+4,"wrapped", false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_init_top(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_init_top\n"); );
    // Body
    VClipSqueezeWrapDemo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VClipSqueezeWrapDemo___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VClipSqueezeWrapDemo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_register(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VClipSqueezeWrapDemo___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VClipSqueezeWrapDemo___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VClipSqueezeWrapDemo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_full_sub_0(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_full_top_0\n"); );
    // Init
    VClipSqueezeWrapDemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClipSqueezeWrapDemo___024root*>(voidSelf);
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VClipSqueezeWrapDemo___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_full_sub_0(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->ClipSqueezeWrapDemo__DOT__counter),7);
    tracep->fullCData(oldp+2,((VL_LTS_III(7, 0x11U, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                ? 0x11U : (VL_GTS_III(7, 0x7cU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                            ? 0x3cU
                                            : (0x3fU 
                                               & (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))))),6);
    tracep->fullCData(oldp+3,((0x3fU & (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))),6);
    tracep->fullCData(oldp+4,((0x3fU & (VL_LTS_III(7, 0x11U, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                         ? (VL_EXTENDS_II(8,7, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)) 
                                            - (IData)(0x16U))
                                         : (VL_GTS_III(7, 0x7cU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                             ? ((IData)(0x16U) 
                                                + VL_EXTENDS_II(8,7, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))
                                             : ((0x80U 
                                                 & ((IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))))),6);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
