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
                                   ? 0x3d482a54U : 
                                  ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                    ? 0x80000000U : 
                                   ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                     ? 0x21cbbebaU : 0x17e37c59U)))),32);
        tracep->chgBit(oldp+1,(((((0x3230451U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x9080054U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x10b8412U
                                                     : 0x3230451U)))) 
                                  | (0x1cbb6b0U == 
                                     ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                       ? 0x11482254U
                                       : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                           ? 0U : (
                                                   (1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1cbb6b0U
                                                    : 0x11c33451U))))) 
                                 | (0U == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x8480850U
                                            : ((2U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xcb0c1aU
                                                    : 0x2c30c58U))))) 
                                | (0x1c482a04U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1c482a04U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0xc9be8aU
                                                      : 0x16e13c08U)))))));
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
