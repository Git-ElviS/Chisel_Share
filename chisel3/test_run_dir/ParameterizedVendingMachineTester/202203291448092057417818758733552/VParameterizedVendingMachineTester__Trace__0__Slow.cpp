// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_init_sub__TOP__0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->pushNamePrefix("ParameterizedVendingMachineTester ");
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->declBit(c+7,"dut_clock", false,-1);
    tracep->declBit(c+8,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_inputs_0", false,-1);
    tracep->declBit(c+2,"dut_io_dispense", false,-1);
    tracep->declBus(c+3,"idx", false,-1, 6,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->declBit(c+1,"io_inputs_0", false,-1);
    tracep->declBit(c+2,"io_dispense", false,-1);
    tracep->declBus(c+5,"value", false,-1, 2,0);
    tracep->declBit(c+2,"doDispense", false,-1);
    tracep->declBus(c+6,"incValue", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_init_top(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_init_top\n"); );
    // Body
    VParameterizedVendingMachineTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedVendingMachineTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedVendingMachineTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_register(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VParameterizedVendingMachineTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VParameterizedVendingMachineTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VParameterizedVendingMachineTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_full_top_0\n"); );
    // Init
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VParameterizedVendingMachineTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(((0x63U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x62U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                | ((0x61U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x60U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      | ((0x5fU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         | ((0x5eU 
                                             != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x5dU 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               | ((0x5cU 
                                                   != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x5bU 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     | ((0x5aU 
                                                         != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x59U 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x58U 
                                                               != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x57U 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 | ((0x56U 
                                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    | ((0x55U 
                                                                        != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x54U 
                                                                           == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          | ((0x53U 
                                                                              != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x52U 
                                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x51U 
                                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x50U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x4fU 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_81))))))))))))))))))))))));
    tracep->fullBit(oldp+2,((6U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
    tracep->fullCData(oldp+3,(vlSelf->ParameterizedVendingMachineTester__DOT__idx),7);
    tracep->fullBit(oldp+4,((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))));
    tracep->fullCData(oldp+5,(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
    tracep->fullCData(oldp+6,((((0x63U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x62U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x61U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x60U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         | ((0x5fU 
                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            | ((0x5eU 
                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x5dU 
                                                   == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  | ((0x5cU 
                                                      != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x5bU 
                                                         == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        | ((0x5aU 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x59U 
                                                               != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x58U 
                                                                  != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x57U 
                                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    | ((0x56U 
                                                                        == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       | ((0x55U 
                                                                           != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x54U 
                                                                              == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             | ((0x53U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x52U 
                                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x51U 
                                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x50U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x4fU 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_81))))))))))))))))))))))
                                ? 1U : 0U)),3);
    tracep->fullBit(oldp+7,(vlSelf->clock));
    tracep->fullBit(oldp+8,(vlSelf->reset));
}
