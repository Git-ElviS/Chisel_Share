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
                                   ? 0x13fbac71U : 
                                  ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                    ? 0x746ce244U : 
                                   ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                     ? 0x936d7f69U : 0x65539db4U)))),32);
        tracep->chgBit(oldp+1,(((((0x40520190U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x520050U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x40400240U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0x400348U
                                                      : 0x40520190U)))) 
                                  | (0x91044a69U == 
                                     ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                       ? 0x11820871U
                                       : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                           ? 0x34044244U
                                           : ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                               ? 0x91044a69U
                                               : 0x250208b4U))))) 
                                 | (0x3064c200U == 
                                    ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                      ? 0x10638c20U
                                      : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                          ? 0x3064c200U
                                          : ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                              ? 0x10655e20U
                                              : 0x20439ca0U))))) 
                                | (0x1271ac70U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1271ac70U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x1464a240U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0x12652e68U
                                                      : 0x4518cb0U)))))));
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
