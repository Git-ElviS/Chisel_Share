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
        tracep->chgIData(oldp+0,(((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                   ? 0U : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x38827aa5U
                                            : ((1U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0U
                                                : 0xb42500e1U)))),32);
        tracep->chgBit(oldp+1,(((((0x24200001U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x28807201U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0U
                                                      : 0x24200001U)))) 
                                  | (0U == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                              ? 1U : 
                                             ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                               ? 0U
                                               : 1U))))) 
                                 | (0x280072a1U == 
                                    ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                      ? 0U : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                               ? 0x280072a1U
                                               : ((1U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0U
                                                   : 0x202100e1U))))) 
                                | (0U == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0U
                                                     : 1U)))))));
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
