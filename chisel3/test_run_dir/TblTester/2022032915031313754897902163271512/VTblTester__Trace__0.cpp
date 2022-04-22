// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTblTester__Syms.h"


void VTblTester___024root__trace_chg_sub_0(VTblTester___024root* vlSelf, VerilatedVcd* tracep);

void VTblTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_chg_top_0\n"); );
    // Init
    VTblTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTblTester___024root*>(voidSelf);
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTblTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VTblTester___024root__trace_chg_sub_0(VTblTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->TblTester__DOT__dut_io_wi));
        tracep->chgBit(oldp+1,(vlSelf->TblTester__DOT__dut_io_ri));
        tracep->chgBit(oldp+2,(vlSelf->TblTester__DOT__dut_io_d));
        tracep->chgBit(oldp+3,((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                                 == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                                 ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                                 : vlSelf->TblTester__DOT__dut__DOT__m
                                [vlSelf->TblTester__DOT__dut_io_ri])));
        tracep->chgCData(oldp+4,(vlSelf->TblTester__DOT__cnt),3);
        tracep->chgBit(oldp+5,((7U == (IData)(vlSelf->TblTester__DOT__cnt))));
        tracep->chgBit(oldp+6,(vlSelf->TblTester__DOT__dut__DOT__m[0]));
        tracep->chgBit(oldp+7,(vlSelf->TblTester__DOT__dut__DOT__m[1]));
        tracep->chgBit(oldp+8,(vlSelf->TblTester__DOT__dut__DOT__m
                               [vlSelf->TblTester__DOT__dut_io_ri]));
    }
    tracep->chgBit(oldp+9,(vlSelf->clock));
    tracep->chgBit(oldp+10,(vlSelf->reset));
}

void VTblTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_cleanup\n"); );
    // Init
    VTblTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTblTester___024root*>(voidSelf);
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
