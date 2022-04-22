// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiExtModuleTester__Syms.h"


VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_init_sub__TOP__0(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("MultiExtModuleTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"blackBoxInvPos_in", false,-1);
    tracep->declBit(c+4,"blackBoxInvPos_out", false,-1);
    tracep->declBit(c+5,"blackBoxInvNeg_in", false,-1);
    tracep->declBit(c+6,"blackBoxInvNeg_out", false,-1);
    tracep->declBit(c+3,"blackBoxPassPos_in", false,-1);
    tracep->declBit(c+3,"blackBoxPassPos_out", false,-1);
    tracep->declBit(c+5,"blackBoxPassNeg_in", false,-1);
    tracep->declBit(c+5,"blackBoxPassNeg_out", false,-1);
    tracep->pushNamePrefix("blackBoxInvNeg ");
    tracep->declBus(c+5,"in", false,-1, 0,0);
    tracep->declBus(c+6,"out", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxInvPos ");
    tracep->declBus(c+3,"in", false,-1, 0,0);
    tracep->declBus(c+4,"out", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxPassNeg ");
    tracep->declBus(c+5,"in", false,-1, 0,0);
    tracep->declBus(c+5,"out", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxPassPos ");
    tracep->declBus(c+3,"in", false,-1, 0,0);
    tracep->declBus(c+3,"out", false,-1, 0,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_init_top(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester___024root__trace_init_top\n"); );
    // Body
    VMultiExtModuleTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMultiExtModuleTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMultiExtModuleTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_register(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMultiExtModuleTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMultiExtModuleTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMultiExtModuleTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_full_sub_0(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester___024root__trace_full_top_0\n"); );
    // Init
    VMultiExtModuleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiExtModuleTester___024root*>(voidSelf);
    VMultiExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMultiExtModuleTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_full_sub_0(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiExtModuleTester___024root__trace_full_sub_0\n"); );
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
