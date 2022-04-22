// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneBitUnitRegVecTester__Syms.h"


void VOneBitUnitRegVecTester___024root__trace_chg_sub_0(VOneBitUnitRegVecTester___024root* vlSelf, VerilatedVcd* tracep);

void VOneBitUnitRegVecTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitUnitRegVecTester___024root__trace_chg_top_0\n"); );
    // Init
    VOneBitUnitRegVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOneBitUnitRegVecTester___024root*>(voidSelf);
    VOneBitUnitRegVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOneBitUnitRegVecTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VOneBitUnitRegVecTester___024root__trace_chg_sub_0(VOneBitUnitRegVecTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VOneBitUnitRegVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitUnitRegVecTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->clock));
    tracep->chgBit(oldp+1,(vlSelf->reset));
}

void VOneBitUnitRegVecTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitUnitRegVecTester___024root__trace_cleanup\n"); );
    // Init
    VOneBitUnitRegVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOneBitUnitRegVecTester___024root*>(voidSelf);
    VOneBitUnitRegVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
