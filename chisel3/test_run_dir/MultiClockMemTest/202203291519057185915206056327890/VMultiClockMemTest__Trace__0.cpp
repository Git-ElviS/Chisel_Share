// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiClockMemTest__Syms.h"


void VMultiClockMemTest___024root__trace_chg_sub_0(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep);

void VMultiClockMemTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_chg_top_0\n"); );
    // Init
    VMultiClockMemTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockMemTest___024root*>(voidSelf);
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMultiClockMemTest___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMultiClockMemTest___024root__trace_chg_sub_0(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->MultiClockMemTest__DOT__mem[0]),32);
        tracep->chgIData(oldp+1,(vlSelf->MultiClockMemTest__DOT__mem[1]),32);
        tracep->chgIData(oldp+2,(vlSelf->MultiClockMemTest__DOT__mem[2]),32);
        tracep->chgIData(oldp+3,(vlSelf->MultiClockMemTest__DOT__mem[3]),32);
        tracep->chgIData(oldp+4,(vlSelf->MultiClockMemTest__DOT__mem[4]),32);
        tracep->chgIData(oldp+5,(vlSelf->MultiClockMemTest__DOT__mem[5]),32);
        tracep->chgIData(oldp+6,(vlSelf->MultiClockMemTest__DOT__mem[6]),32);
        tracep->chgIData(oldp+7,(vlSelf->MultiClockMemTest__DOT__mem[7]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+8,((7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                        - (IData)(1U)))),3);
        tracep->chgCData(oldp+9,(vlSelf->MultiClockMemTest__DOT__waddr),3);
        tracep->chgBit(oldp+10,((8U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))));
        tracep->chgBit(oldp+11,(((8U <= (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                                 & (0x10U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle)))));
        tracep->chgCData(oldp+12,(vlSelf->MultiClockMemTest__DOT__cycle),5);
        tracep->chgBit(oldp+13,((0x13U == (IData)(vlSelf->MultiClockMemTest__DOT__cycle))));
    }
    tracep->chgBit(oldp+14,(vlSelf->clock));
    tracep->chgBit(oldp+15,(vlSelf->reset));
    tracep->chgIData(oldp+16,(vlSelf->MultiClockMemTest__DOT__mem
                              [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                      - (IData)(1U)))]),32);
    tracep->chgBit(oldp+17,(vlSelf->MultiClockMemTest__DOT__cDiv));
}

void VMultiClockMemTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_cleanup\n"); );
    // Init
    VMultiClockMemTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockMemTest___024root*>(voidSelf);
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
