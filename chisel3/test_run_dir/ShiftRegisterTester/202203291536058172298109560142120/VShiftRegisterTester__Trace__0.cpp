// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftRegisterTester__Syms.h"


void VShiftRegisterTester___024root__trace_chg_sub_0(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep);

void VShiftRegisterTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_chg_top_0\n"); );
    // Init
    VShiftRegisterTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftRegisterTester___024root*>(voidSelf);
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VShiftRegisterTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VShiftRegisterTester___024root__trace_chg_sub_0(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->ShiftRegisterTester__DOT__cnt),3);
        tracep->chgBit(oldp+1,((7U == (IData)(vlSelf->ShiftRegisterTester__DOT__cnt))));
        tracep->chgCData(oldp+2,(vlSelf->ShiftRegisterTester__DOT__shifter_0),2);
        tracep->chgCData(oldp+3,(vlSelf->ShiftRegisterTester__DOT__shifter_1),2);
        tracep->chgCData(oldp+4,(vlSelf->ShiftRegisterTester__DOT__shifter_2),2);
        tracep->chgCData(oldp+5,(vlSelf->ShiftRegisterTester__DOT__shifter_3),2);
        tracep->chgCData(oldp+6,((7U & ((IData)(vlSelf->ShiftRegisterTester__DOT__cnt) 
                                        - (IData)(4U)))),3);
    }
    tracep->chgBit(oldp+7,(vlSelf->clock));
    tracep->chgBit(oldp+8,(vlSelf->reset));
}

void VShiftRegisterTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_cleanup\n"); );
    // Init
    VShiftRegisterTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftRegisterTester___024root*>(voidSelf);
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
