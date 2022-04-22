// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegTester__Syms.h"


void VRegTester___024root__trace_chg_sub_0(VRegTester___024root* vlSelf, VerilatedVcd* tracep);

void VRegTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_chg_top_0\n"); );
    // Init
    VRegTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegTester___024root*>(voidSelf);
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRegTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VRegTester___024root__trace_chg_sub_0(VRegTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->RegTester__DOT__dut__DOT__vecReg_0),4);
        tracep->chgCData(oldp+1,(vlSelf->RegTester__DOT__dut__DOT__vecReg_1),4);
        tracep->chgCData(oldp+2,(vlSelf->RegTester__DOT__dut__DOT__vecReg_2),4);
        tracep->chgCData(oldp+3,(vlSelf->RegTester__DOT__dut__DOT__vecReg_3),4);
        tracep->chgCData(oldp+4,(vlSelf->RegTester__DOT__dut__DOT__vecReg_4),4);
        tracep->chgCData(oldp+5,(vlSelf->RegTester__DOT__dut__DOT__vecReg_5),4);
        tracep->chgCData(oldp+6,(vlSelf->RegTester__DOT__dut__DOT__vecReg_7),4);
        tracep->chgBit(oldp+7,(vlSelf->RegTester__DOT__doneReg));
    }
    tracep->chgBit(oldp+8,(vlSelf->clock));
    tracep->chgBit(oldp+9,(vlSelf->reset));
}

void VRegTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_cleanup\n"); );
    // Init
    VRegTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegTester___024root*>(voidSelf);
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
