// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoderTester__Syms.h"


VL_ATTR_COLD void VDecoderTester___024root__trace_init_sub__TOP__0(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("DecoderTester ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"dut_io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"dut_io_matched", false,-1);
    tracep->declBus(c+3,"cnt", false,-1, 1,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"io_matched", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VDecoderTester___024root__trace_init_top(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_init_top\n"); );
    // Body
    VDecoderTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDecoderTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDecoderTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDecoderTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDecoderTester___024root__trace_register(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VDecoderTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VDecoderTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VDecoderTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDecoderTester___024root__trace_full_sub_0(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDecoderTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_full_top_0\n"); );
    // Init
    VDecoderTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecoderTester___024root*>(voidSelf);
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDecoderTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VDecoderTester___024root__trace_full_sub_0(VDecoderTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->DecoderTester__DOT___GEN_5),32);
    tracep->fullBit(oldp+2,(((((0x7e3cafd7U == (0x7e3cafd7U 
                                                & vlSelf->DecoderTester__DOT___GEN_5)) 
                               | (1U == (1U & vlSelf->DecoderTester__DOT___GEN_5))) 
                              | (0U == (1U & vlSelf->DecoderTester__DOT___GEN_5))) 
                             | (1U == (1U & vlSelf->DecoderTester__DOT___GEN_5)))));
    tracep->fullCData(oldp+3,(vlSelf->DecoderTester__DOT__cnt),2);
    tracep->fullBit(oldp+4,((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))));
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
