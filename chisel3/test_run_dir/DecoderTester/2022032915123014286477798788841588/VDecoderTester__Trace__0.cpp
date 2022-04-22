// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoderTester__Syms.h"


void VDecoderTester___024root__trace_chg_sub_0(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep);

void VDecoderTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_chg_top_0\n"); );
    // Init
    VDecoderTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecoderTester___024root*>(voidSelf);
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDecoderTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VDecoderTester___024root__trace_chg_sub_0(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->DecoderTester__DOT___GEN_5),32);
        tracep->chgBit(oldp+1,(((((0x26821840U == (0x378f5a55U 
                                                   & vlSelf->DecoderTester__DOT___GEN_5)) 
                                  | (0x68022400U == 
                                     (0x6c422d01U & vlSelf->DecoderTester__DOT___GEN_5))) 
                                 | (0x7914801U == (0xf99c9c9U 
                                                   & vlSelf->DecoderTester__DOT___GEN_5))) 
                                | (1U == (1U & vlSelf->DecoderTester__DOT___GEN_5)))));
        tracep->chgCData(oldp+2,(vlSelf->DecoderTester__DOT__cnt),2);
        tracep->chgBit(oldp+3,((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))));
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VDecoderTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_cleanup\n"); );
    // Init
    VDecoderTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecoderTester___024root*>(voidSelf);
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
