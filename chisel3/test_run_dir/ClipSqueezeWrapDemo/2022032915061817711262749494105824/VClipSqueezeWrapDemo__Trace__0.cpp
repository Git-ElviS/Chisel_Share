// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClipSqueezeWrapDemo__Syms.h"


void VClipSqueezeWrapDemo___024root__trace_chg_sub_0(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep);

void VClipSqueezeWrapDemo___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_chg_top_0\n"); );
    // Init
    VClipSqueezeWrapDemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClipSqueezeWrapDemo___024root*>(voidSelf);
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VClipSqueezeWrapDemo___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VClipSqueezeWrapDemo___024root__trace_chg_sub_0(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->ClipSqueezeWrapDemo__DOT__counter),5);
        tracep->chgCData(oldp+1,((VL_LTS_III(5, 6U, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                   ? 6U : (VL_GTS_III(5, 0x1eU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                            ? 0xeU : 
                                           (0xfU & (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))))),4);
        tracep->chgCData(oldp+2,((0xfU & (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))),4);
        tracep->chgCData(oldp+3,((0xfU & (VL_LTS_III(5, 6U, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                           ? (VL_EXTENDS_II(6,5, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)) 
                                              - (IData)(9U))
                                           : (VL_GTS_III(5, 0x1eU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                               ? ((IData)(9U) 
                                                  + 
                                                  VL_EXTENDS_II(6,5, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))
                                               : ((0x20U 
                                                   & ((IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))))),4);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VClipSqueezeWrapDemo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root__trace_cleanup\n"); );
    // Init
    VClipSqueezeWrapDemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClipSqueezeWrapDemo___024root*>(voidSelf);
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
