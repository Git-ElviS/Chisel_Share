// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAnalogIntegrationTester__Syms.h"


void VAnalogIntegrationTester___024root__trace_chg_sub_0(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep);

void VAnalogIntegrationTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_chg_top_0\n"); );
    // Init
    VAnalogIntegrationTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnalogIntegrationTester___024root*>(voidSelf);
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAnalogIntegrationTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VAnalogIntegrationTester___024root__trace_chg_sub_0(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
        tracep->chgIData(oldp+1,(((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                         ? 2U : 0U) 
                                       & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                           ? 0xffffffffU
                                           : 0U)) & 
                                      ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                        ? 0xffffffffU
                                        : 0U)) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                    & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                        ? 0xffffffffU
                                        : 0U)) | ((
                                                   (((1U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 3U
                                                      : 0U) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                        ? 0xffffffffU
                                                        : 0U)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                       ? 0xffffffffU
                                                       : 0U)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                  | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                           ? 4U : 0U) 
                                         & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                             ? 0xffffffffU
                                             : 0U)) 
                                        & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                            ? 0xffffffffU
                                            : 0U)) 
                                       & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                           ? 0xffffffffU
                                           : 0U)) | 
                                      (((((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                           ? 5U : 0U) 
                                         & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                             ? 0xffffffffU
                                             : 0U)) 
                                        & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                            ? 0xffffffffU
                                            : 0U)) 
                                       & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                           ? 0xffffffffU
                                           : 0U))) 
                                     & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                          ? 0xffffffffU
                                          : 0U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))))),32);
        tracep->chgBit(oldp+2,((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
        tracep->chgBit(oldp+3,((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
        tracep->chgBit(oldp+4,((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
        tracep->chgCData(oldp+5,(vlSelf->AnalogIntegrationTester__DOT__cycle),2);
        tracep->chgIData(oldp+6,(((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                            ? 4U : 
                                           ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                             ? 3U : 2U)))),32);
    }
    tracep->chgBit(oldp+7,(vlSelf->clock));
    tracep->chgBit(oldp+8,(vlSelf->reset));
}

void VAnalogIntegrationTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_cleanup\n"); );
    // Init
    VAnalogIntegrationTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnalogIntegrationTester___024root*>(voidSelf);
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
