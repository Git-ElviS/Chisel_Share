// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxTesterSuggestName__Syms.h"


VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_init_sub__TOP__0(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxTesterSuggestName__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("BlackBoxTesterSuggestName ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"blackBoxPos_in", false,-1);
    tracep->declBit(c+4,"blackBoxPos_out", false,-1);
    tracep->declBit(c+5,"blackBoxNeg_in", false,-1);
    tracep->declBit(c+6,"blackBoxNeg_out", false,-1);
    tracep->pushNamePrefix("blackBoxNeg ");
    tracep->declBus(c+5,"in", false,-1, 0,0);
    tracep->declBus(c+6,"out", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxPos ");
    tracep->declBus(c+3,"in", false,-1, 0,0);
    tracep->declBus(c+4,"out", false,-1, 0,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_init_top(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxTesterSuggestName__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName___024root__trace_init_top\n"); );
    // Body
    VBlackBoxTesterSuggestName___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxTesterSuggestName___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxTesterSuggestName___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_register(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxTesterSuggestName__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBlackBoxTesterSuggestName___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBlackBoxTesterSuggestName___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBlackBoxTesterSuggestName___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_full_sub_0(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName___024root__trace_full_top_0\n"); );
    // Init
    VBlackBoxTesterSuggestName___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxTesterSuggestName___024root*>(voidSelf);
    VBlackBoxTesterSuggestName__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBlackBoxTesterSuggestName___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_full_sub_0(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxTesterSuggestName__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxTesterSuggestName___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(1U));
    tracep->fullBit(oldp+4,(0U));
    tracep->fullBit(oldp+5,(0U));
    tracep->fullBit(oldp+6,(1U));
}
