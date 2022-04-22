// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComplexAssignTester__Syms.h"


VL_ATTR_COLD void VComplexAssignTester___024root__trace_init_sub__TOP__0(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->pushNamePrefix("ComplexAssignTester ");
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->declBit(c+1,"dut_io_e", false,-1);
    tracep->declBus(c+9,"dut_io_in_re", false,-1, 31,0);
    tracep->declBus(c+10,"dut_io_in_im", false,-1, 31,0);
    tracep->declBus(c+2,"dut_io_out_re", false,-1, 31,0);
    tracep->declBus(c+3,"dut_io_out_im", false,-1, 31,0);
    tracep->declBit(c+4,"cnt", false,-1);
    tracep->declBit(c+5,"re_correct", false,-1);
    tracep->declBit(c+6,"im_correct", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"io_e", false,-1);
    tracep->declBus(c+9,"io_in_re", false,-1, 31,0);
    tracep->declBus(c+10,"io_in_im", false,-1, 31,0);
    tracep->declBus(c+2,"io_out_re", false,-1, 31,0);
    tracep->declBus(c+3,"io_out_im", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VComplexAssignTester___024root__trace_init_top(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_init_top\n"); );
    // Body
    VComplexAssignTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VComplexAssignTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VComplexAssignTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VComplexAssignTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VComplexAssignTester___024root__trace_register(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VComplexAssignTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VComplexAssignTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VComplexAssignTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VComplexAssignTester___024root__trace_full_sub_0(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VComplexAssignTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_full_top_0\n"); );
    // Init
    VComplexAssignTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexAssignTester___024root*>(voidSelf);
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VComplexAssignTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VComplexAssignTester___024root__trace_full_sub_0(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->ComplexAssignTester__DOT__cnt)))));
    tracep->fullIData(oldp+2,(((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                ? 0U : 0x2345cdf4U)),32);
    tracep->fullIData(oldp+3,(((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                ? 0U : 0x21404e73U)),32);
    tracep->fullBit(oldp+4,(vlSelf->ComplexAssignTester__DOT__cnt));
    tracep->fullBit(oldp+5,((((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                               ? 0U : 0x2345cdf4U) 
                             == ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                  ? 0U : 0x2345cdf4U))));
    tracep->fullBit(oldp+6,((((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                               ? 0U : 0x21404e73U) 
                             == ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                  ? 0U : 0x21404e73U))));
    tracep->fullBit(oldp+7,(vlSelf->clock));
    tracep->fullBit(oldp+8,(vlSelf->reset));
    tracep->fullIData(oldp+9,(0x2345cdf4U),32);
    tracep->fullIData(oldp+10,(0x21404e73U),32);
}
