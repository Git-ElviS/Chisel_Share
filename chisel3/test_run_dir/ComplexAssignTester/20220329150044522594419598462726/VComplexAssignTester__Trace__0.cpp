// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComplexAssignTester__Syms.h"


void VComplexAssignTester___024root__trace_chg_sub_0(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep);

void VComplexAssignTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_chg_top_0\n"); );
    // Init
    VComplexAssignTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexAssignTester___024root*>(voidSelf);
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VComplexAssignTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VComplexAssignTester___024root__trace_chg_sub_0(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->ComplexAssignTester__DOT__cnt));
        tracep->chgIData(oldp+1,(((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                   ? 0x349c943bU : 0U)),32);
        tracep->chgIData(oldp+2,(((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                   ? 0x2db37e07U : 0U)),32);
        tracep->chgBit(oldp+3,((((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                  ? 0x349c943bU : 0U) 
                                == ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                     ? 0x349c943bU : 0U))));
        tracep->chgBit(oldp+4,((((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                  ? 0x2db37e07U : 0U) 
                                == ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                     ? 0x2db37e07U : 0U))));
    }
    tracep->chgBit(oldp+5,(vlSelf->clock));
    tracep->chgBit(oldp+6,(vlSelf->reset));
}

void VComplexAssignTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_cleanup\n"); );
    // Init
    VComplexAssignTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexAssignTester___024root*>(voidSelf);
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
