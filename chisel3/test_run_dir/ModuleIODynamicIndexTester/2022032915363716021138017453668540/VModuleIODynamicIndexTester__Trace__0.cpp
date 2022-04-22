// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VModuleIODynamicIndexTester__Syms.h"


void VModuleIODynamicIndexTester___024root__trace_chg_sub_0(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep);

void VModuleIODynamicIndexTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_chg_top_0\n"); );
    // Init
    VModuleIODynamicIndexTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VModuleIODynamicIndexTester___024root*>(voidSelf);
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VModuleIODynamicIndexTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VModuleIODynamicIndexTester___024root__trace_chg_sub_0(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(((0U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                   ? 0x7bU : 0U)),32);
        tracep->chgIData(oldp+1,(((1U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                   ? 0x7bU : 0U)),32);
        tracep->chgIData(oldp+2,(((2U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                   ? 0x7bU : 0U)),32);
        tracep->chgIData(oldp+3,(((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                   ? 0x7bU : 0U)),32);
        tracep->chgIData(oldp+4,(((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                   ? ((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                       ? 0x7bU : 0U)
                                   : vlSelf->ModuleIODynamicIndexTester__DOT___GEN_12)),32);
        tracep->chgCData(oldp+5,(vlSelf->ModuleIODynamicIndexTester__DOT__cycle),2);
        tracep->chgBit(oldp+6,((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))));
    }
    tracep->chgBit(oldp+7,(vlSelf->clock));
    tracep->chgBit(oldp+8,(vlSelf->reset));
}

void VModuleIODynamicIndexTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_cleanup\n"); );
    // Init
    VModuleIODynamicIndexTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VModuleIODynamicIndexTester___024root*>(voidSelf);
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
