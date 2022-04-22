// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimpleVendingMachineTester__Syms.h"


void VSimpleVendingMachineTester___024root__trace_chg_sub_0(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

void VSimpleVendingMachineTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_chg_top_0\n"); );
    // Init
    VSimpleVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleVendingMachineTester___024root*>(voidSelf);
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimpleVendingMachineTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSimpleVendingMachineTester___024root__trace_chg_sub_0(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                & ((8U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   | ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      & ((6U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         & (5U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))));
        tracep->chgBit(oldp+1,(((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                | ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   & ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      & ((6U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         | (5U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))));
        tracep->chgBit(oldp+2,((4U <= (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value))));
        tracep->chgCData(oldp+3,(vlSelf->SimpleVendingMachineTester__DOT__cycle),4);
        tracep->chgBit(oldp+4,((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))));
        tracep->chgCData(oldp+5,(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value),3);
        tracep->chgCData(oldp+6,((((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   | ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      & ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         & ((6U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                            | (5U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))
                                   ? 2U : (((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                            & ((8U 
                                                == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                               | ((7U 
                                                   != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                                  & ((6U 
                                                      != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                                     & (5U 
                                                        != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))
                                            ? 1U : 0U))),3);
    }
    tracep->chgBit(oldp+7,(vlSelf->clock));
    tracep->chgBit(oldp+8,(vlSelf->reset));
}

void VSimpleVendingMachineTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_cleanup\n"); );
    // Init
    VSimpleVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleVendingMachineTester___024root*>(voidSelf);
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
