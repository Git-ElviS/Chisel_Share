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
        tracep->chgCData(oldp+0,(vlSelf->TblTester__DOT__dut_io_wi),3);
        tracep->chgCData(oldp+1,(vlSelf->TblTester__DOT__dut_io_ri),3);
        tracep->chgCData(oldp+2,(vlSelf->TblTester__DOT__dut_io_d),3);
        tracep->chgCData(oldp+3,((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                                   == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                                   ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                                   : vlSelf->TblTester__DOT__dut__DOT__m
                                  [vlSelf->TblTester__DOT__dut_io_ri])),3);
        tracep->chgCData(oldp+4,(vlSelf->TblTester__DOT__cnt),3);
        tracep->chgBit(oldp+5,((7U == (IData)(vlSelf->TblTester__DOT__cnt))));
        tracep->chgCData(oldp+6,(vlSelf->TblTester__DOT__dut__DOT__m[0]),3);
        tracep->chgCData(oldp+7,(vlSelf->TblTester__DOT__dut__DOT__m[1]),3);
        tracep->chgCData(oldp+8,(vlSelf->TblTester__DOT__dut__DOT__m[2]),3);
        tracep->chgCData(oldp+9,(vlSelf->TblTester__DOT__dut__DOT__m[3]),3);
        tracep->chgCData(oldp+10,(vlSelf->TblTester__DOT__dut__DOT__m[4]),3);
        tracep->chgCData(oldp+11,(vlSelf->TblTester__DOT__dut__DOT__m[5]),3);
        tracep->chgCData(oldp+12,(vlSelf->TblTester__DOT__dut__DOT__m[6]),3);
        tracep->chgCData(oldp+13,(vlSelf->TblTester__DOT__dut__DOT__m[7]),3);
        tracep->chgCData(oldp+14,(vlSelf->TblTester__DOT__dut__DOT__m
                                  [vlSelf->TblTester__DOT__dut_io_ri]),3);
    }
    tracep->chgBit(oldp+15,(vlSelf->clock));
    tracep->chgBit(oldp+16,(vlSelf->reset));
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
