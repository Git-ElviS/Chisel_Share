// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


void VParameterizedVendingMachineTester___024root__trace_chg_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

void VParameterizedVendingMachineTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_chg_top_0\n"); );
    // Init
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VParameterizedVendingMachineTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VParameterizedVendingMachineTester___024root__trace_chg_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(((0x63U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
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
                                                                                & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_81))))))))))))))))))))))));
        tracep->chgBit(oldp+1,((6U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
        tracep->chgCData(oldp+2,(vlSelf->ParameterizedVendingMachineTester__DOT__idx),7);
        tracep->chgBit(oldp+3,((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))));
        tracep->chgCData(oldp+4,(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
        tracep->chgCData(oldp+5,((((0x63U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x62U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      | ((0x61U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x60U 
                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
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
    }
    tracep->chgBit(oldp+6,(vlSelf->clock));
    tracep->chgBit(oldp+7,(vlSelf->reset));
}

void VParameterizedVendingMachineTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_cleanup\n"); );
    // Init
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
