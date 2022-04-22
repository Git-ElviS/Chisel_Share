// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCastFromLitTester__Syms.h"


VL_ATTR_COLD void VCastFromLitTester___024root__trace_init_sub__TOP__0(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastFromLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastFromLitTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("CastFromLitTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"mod_io_out", false,-1, 6,0);
    tracep->declBit(c+4,"mod_io_valid", false,-1);
    tracep->declBus(c+5,"mod_1_io_out", false,-1, 6,0);
    tracep->declBit(c+4,"mod_1_io_valid", false,-1);
    tracep->declBus(c+6,"mod_2_io_out", false,-1, 6,0);
    tracep->declBit(c+4,"mod_2_io_valid", false,-1);
    tracep->declBus(c+7,"mod_3_io_out", false,-1, 6,0);
    tracep->declBit(c+4,"mod_3_io_valid", false,-1);
    tracep->declBus(c+8,"mod_4_io_out", false,-1, 6,0);
    tracep->declBit(c+4,"mod_4_io_valid", false,-1);
    tracep->pushNamePrefix("mod ");
    tracep->declBus(c+3,"io_out", false,-1, 6,0);
    tracep->declBit(c+4,"io_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_1 ");
    tracep->declBus(c+5,"io_out", false,-1, 6,0);
    tracep->declBit(c+4,"io_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_2 ");
    tracep->declBus(c+6,"io_out", false,-1, 6,0);
    tracep->declBit(c+4,"io_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_3 ");
    tracep->declBus(c+7,"io_out", false,-1, 6,0);
    tracep->declBit(c+4,"io_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_4 ");
    tracep->declBus(c+8,"io_out", false,-1, 6,0);
    tracep->declBit(c+4,"io_valid", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCastFromLitTester___024root__trace_init_top(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastFromLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastFromLitTester___024root__trace_init_top\n"); );
    // Body
    VCastFromLitTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCastFromLitTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VCastFromLitTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VCastFromLitTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCastFromLitTester___024root__trace_register(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastFromLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastFromLitTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCastFromLitTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCastFromLitTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCastFromLitTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCastFromLitTester___024root__trace_full_sub_0(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCastFromLitTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastFromLitTester___024root__trace_full_top_0\n"); );
    // Init
    VCastFromLitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCastFromLitTester___024root*>(voidSelf);
    VCastFromLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCastFromLitTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VCastFromLitTester___024root__trace_full_sub_0(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCastFromLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCastFromLitTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(0U),7);
    tracep->fullBit(oldp+4,(1U));
    tracep->fullCData(oldp+5,(1U),7);
    tracep->fullCData(oldp+6,(2U),7);
    tracep->fullCData(oldp+7,(0x64U),7);
    tracep->fullCData(oldp+8,(0x65U),7);
}
