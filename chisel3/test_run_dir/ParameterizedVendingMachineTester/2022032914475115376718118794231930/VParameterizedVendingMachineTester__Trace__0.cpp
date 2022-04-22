// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


void VParameterizedVendingMachineTester___024root__trace_chg_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

void VParameterizedVendingMachineTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_chg_top_0\n"); );
    // Init
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VParameterizedVendingMachineTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VParameterizedVendingMachineTester___024root__trace_chg_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))));
        tracep->chgBit(oldp+1,((1U & ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                      >> 1U))));
        tracep->chgBit(oldp+2,((4U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
        tracep->chgCData(oldp+3,(vlSelf->ParameterizedVendingMachineTester__DOT__idx),7);
        tracep->chgBit(oldp+4,((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))));
        tracep->chgCData(oldp+5,(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
        tracep->chgCData(oldp+6,(((2U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                   ? 2U : ((1U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                            ? 1U : 0U))),3);
    }
    tracep->chgBit(oldp+7,(vlSelf->clock));
    tracep->chgBit(oldp+8,(vlSelf->reset));
}

void VParameterizedVendingMachineTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_cleanup\n"); );
    // Init
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
