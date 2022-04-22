// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMatchedRotateLeftAndRight__Syms.h"


VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_init_sub__TOP__0(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("MatchedRotateLeftAndRight ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"shiftAmount1", false,-1, 12,0);
    tracep->declBus(c+2,"shiftAmount2", false,-1, 12,0);
    tracep->declBus(c+3,"out1", false,-1, 12,0);
    tracep->declBus(c+4,"out2", false,-1, 12,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_init_top(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_init_top\n"); );
    // Body
    VMatchedRotateLeftAndRight___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMatchedRotateLeftAndRight___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMatchedRotateLeftAndRight___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_register(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMatchedRotateLeftAndRight___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMatchedRotateLeftAndRight___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMatchedRotateLeftAndRight___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_full_sub_0(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_full_top_0\n"); );
    // Init
    VMatchedRotateLeftAndRight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatchedRotateLeftAndRight___024root*>(voidSelf);
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMatchedRotateLeftAndRight___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_full_sub_0(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+1,(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1),13);
    tracep->fullSData(oldp+2,(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2),13);
    tracep->fullSData(oldp+3,(((0x1000U & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                ? ((0x1ffeU & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60) 
                                               << 1U)) 
                                   | (1U & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60) 
                                            >> 0xcU)))
                                : (IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60))),13);
    tracep->fullSData(oldp+4,(((0x1000U & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                ? ((0x1000U & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60) 
                                               << 0xcU)) 
                                   | (0xfffU & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60) 
                                                >> 1U)))
                                : (IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60))),13);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
