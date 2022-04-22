// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCastToUIntTester__Syms.h"


VL_ATTR_COLD void VCastToUIntTester___024root__trace_init_sub__TOP__0(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastToUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastToUIntTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("CastToUIntTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"mod_io_in", false,-1, 6,0);
    tracep->declBus(c+3,"mod_io_out", false,-1, 6,0);
    tracep->declBus(c+4,"mod_1_io_in", false,-1, 6,0);
    tracep->declBus(c+4,"mod_1_io_out", false,-1, 6,0);
    tracep->declBus(c+5,"mod_2_io_in", false,-1, 6,0);
    tracep->declBus(c+5,"mod_2_io_out", false,-1, 6,0);
    tracep->declBus(c+6,"mod_3_io_in", false,-1, 6,0);
    tracep->declBus(c+6,"mod_3_io_out", false,-1, 6,0);
    tracep->declBus(c+7,"mod_4_io_in", false,-1, 6,0);
    tracep->declBus(c+7,"mod_4_io_out", false,-1, 6,0);
    tracep->pushNamePrefix("mod ");
    tracep->declBus(c+3,"io_in", false,-1, 6,0);
    tracep->declBus(c+3,"io_out", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_1 ");
    tracep->declBus(c+4,"io_in", false,-1, 6,0);
    tracep->declBus(c+4,"io_out", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_2 ");
    tracep->declBus(c+5,"io_in", false,-1, 6,0);
    tracep->declBus(c+5,"io_out", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_3 ");
    tracep->declBus(c+6,"io_in", false,-1, 6,0);
    tracep->declBus(c+6,"io_out", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_4 ");
    tracep->declBus(c+7,"io_in", false,-1, 6,0);
    tracep->declBus(c+7,"io_out", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCastToUIntTester___024root__trace_init_top(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastToUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastToUIntTester___024root__trace_init_top\n"); );
    // Body
    VCastToUIntTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCastToUIntTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VCastToUIntTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VCastToUIntTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCastToUIntTester___024root__trace_register(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastToUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastToUIntTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCastToUIntTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCastToUIntTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCastToUIntTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCastToUIntTester___024root__trace_full_sub_0(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCastToUIntTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastToUIntTester___024root__trace_full_top_0\n"); );
    // Init
    VCastToUIntTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCastToUIntTester___024root*>(voidSelf);
    VCastToUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCastToUIntTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VCastToUIntTester___024root__trace_full_sub_0(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastToUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastToUIntTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(0U),7);
    tracep->fullCData(oldp+4,(1U),7);
    tracep->fullCData(oldp+5,(2U),7);
    tracep->fullCData(oldp+6,(0x64U),7);
    tracep->fullCData(oldp+7,(0x65U),7);
}
