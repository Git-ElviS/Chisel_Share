// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUIntOpsTester__Syms.h"


VL_ATTR_COLD void VUIntOpsTester___024root__trace_init_sub__TOP__0(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntOpsTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("UIntOpsTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"dut_io_a", false,-1, 31,0);
    tracep->declBus(c+4,"dut_io_b", false,-1, 31,0);
    tracep->declBus(c+5,"dut_io_addout", false,-1, 31,0);
    tracep->declBus(c+6,"dut_io_subout", false,-1, 31,0);
    tracep->declQuad(c+7,"dut_io_addampout", false,-1, 32,0);
    tracep->declQuad(c+9,"dut_io_subampout", false,-1, 32,0);
    tracep->declBus(c+11,"dut_io_timesout", false,-1, 31,0);
    tracep->declBus(c+12,"dut_io_divout", false,-1, 31,0);
    tracep->declBus(c+13,"dut_io_modout", false,-1, 31,0);
    tracep->declBus(c+14,"dut_io_lshiftout", false,-1, 31,0);
    tracep->declBus(c+15,"dut_io_rshiftout", false,-1, 31,0);
    tracep->declBus(c+16,"dut_io_lrotateout", false,-1, 31,0);
    tracep->declBus(c+17,"dut_io_rrotateout", false,-1, 31,0);
    tracep->declBit(c+18,"dut_io_lessout", false,-1);
    tracep->declBit(c+19,"dut_io_greatout", false,-1);
    tracep->declBit(c+18,"dut_io_eqout", false,-1);
    tracep->declBit(c+19,"dut_io_noteqout", false,-1);
    tracep->declBit(c+18,"dut_io_lesseqout", false,-1);
    tracep->declBit(c+19,"dut_io_greateqout", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+3,"io_a", false,-1, 31,0);
    tracep->declBus(c+4,"io_b", false,-1, 31,0);
    tracep->declBus(c+5,"io_addout", false,-1, 31,0);
    tracep->declBus(c+6,"io_subout", false,-1, 31,0);
    tracep->declQuad(c+7,"io_addampout", false,-1, 32,0);
    tracep->declQuad(c+9,"io_subampout", false,-1, 32,0);
    tracep->declBus(c+11,"io_timesout", false,-1, 31,0);
    tracep->declBus(c+12,"io_divout", false,-1, 31,0);
    tracep->declBus(c+13,"io_modout", false,-1, 31,0);
    tracep->declBus(c+14,"io_lshiftout", false,-1, 31,0);
    tracep->declBus(c+15,"io_rshiftout", false,-1, 31,0);
    tracep->declBus(c+16,"io_lrotateout", false,-1, 31,0);
    tracep->declBus(c+17,"io_rrotateout", false,-1, 31,0);
    tracep->declBit(c+18,"io_lessout", false,-1);
    tracep->declBit(c+19,"io_greatout", false,-1);
    tracep->declBit(c+18,"io_eqout", false,-1);
    tracep->declBit(c+19,"io_noteqout", false,-1);
    tracep->declBit(c+18,"io_lesseqout", false,-1);
    tracep->declBit(c+19,"io_greateqout", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VUIntOpsTester___024root__trace_init_top(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntOpsTester___024root__trace_init_top\n"); );
    // Body
    VUIntOpsTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VUIntOpsTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VUIntOpsTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VUIntOpsTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VUIntOpsTester___024root__trace_register(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntOpsTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VUIntOpsTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VUIntOpsTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VUIntOpsTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VUIntOpsTester___024root__trace_full_sub_0(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUIntOpsTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntOpsTester___024root__trace_full_top_0\n"); );
    // Init
    VUIntOpsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUIntOpsTester___024root*>(voidSelf);
    VUIntOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VUIntOpsTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VUIntOpsTester___024root__trace_full_sub_0(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntOpsTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullIData(oldp+3,(0x7bU),32);
    tracep->fullIData(oldp+4,(7U),32);
    tracep->fullIData(oldp+5,(0x82U),32);
    tracep->fullIData(oldp+6,(0x74U),32);
    tracep->fullQData(oldp+7,(0x82ULL),33);
    tracep->fullQData(oldp+9,(0x74ULL),33);
    tracep->fullIData(oldp+11,(0x35dU),32);
    tracep->fullIData(oldp+12,(0x11U),32);
    tracep->fullIData(oldp+13,(4U),32);
    tracep->fullIData(oldp+14,(0x3d80U),32);
    tracep->fullIData(oldp+15,(0U),32);
    tracep->fullIData(oldp+16,(0xf60U),32);
    tracep->fullIData(oldp+17,(0xd8000003U),32);
    tracep->fullBit(oldp+18,(0U));
    tracep->fullBit(oldp+19,(1U));
}
