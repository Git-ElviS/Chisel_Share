// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBasicRotate__Syms.h"


VL_ATTR_COLD void VBasicRotate___024root__trace_init_sub__TOP__0(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clock", false,-1);
    tracep->declBit(c+10,"reset", false,-1);
    tracep->pushNamePrefix("BasicRotate ");
    tracep->declBit(c+9,"clock", false,-1);
    tracep->declBit(c+10,"reset", false,-1);
    tracep->declBit(c+9,"shiftAmount_prng_clock", false,-1);
    tracep->declBit(c+10,"shiftAmount_prng_reset", false,-1);
    tracep->declBit(c+1,"shiftAmount_prng_io_out_0", false,-1);
    tracep->declBit(c+2,"shiftAmount_prng_io_out_1", false,-1);
    tracep->declBit(c+3,"shiftAmount_prng_io_out_2", false,-1);
    tracep->declBit(c+4,"shiftAmount_prng_io_out_3", false,-1);
    tracep->declBus(c+5,"shiftAmount", false,-1, 3,0);
    tracep->declBus(c+6,"ctr", false,-1, 3,0);
    tracep->declBus(c+7,"rotL", false,-1, 2,0);
    tracep->declBus(c+8,"rotR", false,-1, 2,0);
    tracep->pushNamePrefix("shiftAmount_prng ");
    tracep->declBit(c+9,"clock", false,-1);
    tracep->declBit(c+10,"reset", false,-1);
    tracep->declBit(c+1,"io_out_0", false,-1);
    tracep->declBit(c+2,"io_out_1", false,-1);
    tracep->declBit(c+3,"io_out_2", false,-1);
    tracep->declBit(c+4,"io_out_3", false,-1);
    tracep->declBit(c+1,"state_0", false,-1);
    tracep->declBit(c+2,"state_1", false,-1);
    tracep->declBit(c+3,"state_2", false,-1);
    tracep->declBit(c+4,"state_3", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBasicRotate___024root__trace_init_top(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_init_top\n"); );
    // Body
    VBasicRotate___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBasicRotate___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBasicRotate___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBasicRotate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBasicRotate___024root__trace_register(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBasicRotate___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBasicRotate___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBasicRotate___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBasicRotate___024root__trace_full_sub_0(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBasicRotate___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_full_top_0\n"); );
    // Init
    VBasicRotate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicRotate___024root*>(voidSelf);
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBasicRotate___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBasicRotate___024root__trace_full_sub_0(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0));
    tracep->fullBit(oldp+2,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1));
    tracep->fullBit(oldp+3,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2));
    tracep->fullBit(oldp+4,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3));
    tracep->fullCData(oldp+5,(vlSelf->BasicRotate__DOT__shiftAmount),4);
    tracep->fullCData(oldp+6,(vlSelf->BasicRotate__DOT__ctr),4);
    tracep->fullCData(oldp+7,(((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                          << 2U)) | 
                                   (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                          >> 1U))) : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15))),3);
    tracep->fullCData(oldp+8,(((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                          >> 2U))) : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14))),3);
    tracep->fullBit(oldp+9,(vlSelf->clock));
    tracep->fullBit(oldp+10,(vlSelf->reset));
}
