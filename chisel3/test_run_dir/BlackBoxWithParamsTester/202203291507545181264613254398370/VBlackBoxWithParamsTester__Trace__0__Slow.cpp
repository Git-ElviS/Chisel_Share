// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithParamsTester__Syms.h"


VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_init_sub__TOP__0(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("BlackBoxWithParamsTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+5,"blackBoxOne_out", false,-1);
    tracep->declBus(c+6,"blackBoxFour_out", false,-1, 2,0);
    tracep->declBus(c+7,"blackBoxStringParamOne_out", false,-1, 31,0);
    tracep->declBus(c+8,"blackBoxStringParamTwo_out", false,-1, 31,0);
    tracep->declQuad(c+9,"blackBoxRealParamOne_out", false,-1, 63,0);
    tracep->declQuad(c+11,"blackBoxRealParamNeg_out", false,-1, 63,0);
    tracep->declBit(c+13,"blackBoxTypeParamBit_out", false,-1);
    tracep->declBus(c+14,"blackBoxTypeParamWord_out", false,-1, 31,0);
    tracep->declBus(c+3,"cycles", false,-1, 1,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("blackBoxFour ");
    tracep->declBus(c+15,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"VALUE", false,-1, 31,0);
    tracep->declBus(c+6,"out", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxOne ");
    tracep->declBus(c+17,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"VALUE", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxRealParamNeg ");
    tracep->declDouble(c+18,"REAL", false,-1);
    tracep->declQuad(c+11,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxRealParamOne ");
    tracep->declDouble(c+20,"REAL", false,-1);
    tracep->declQuad(c+9,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxStringParamOne ");
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxStringParamTwo ");
    tracep->declBus(c+8,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxTypeParamBit ");
    tracep->declBit(c+13,"out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("blackBoxTypeParamWord ");
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_init_top(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root__trace_init_top\n"); );
    // Body
    VBlackBoxWithParamsTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxWithParamsTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxWithParamsTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_register(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBlackBoxWithParamsTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBlackBoxWithParamsTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBlackBoxWithParamsTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_full_sub_0(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root__trace_full_top_0\n"); );
    // Init
    VBlackBoxWithParamsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxWithParamsTester___024root*>(voidSelf);
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBlackBoxWithParamsTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_full_sub_0(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(vlSelf->BlackBoxWithParamsTester__DOT__cycles),2);
    tracep->fullBit(oldp+4,((3U == (IData)(vlSelf->BlackBoxWithParamsTester__DOT__cycles))));
    tracep->fullBit(oldp+5,(1U));
    tracep->fullCData(oldp+6,(4U),3);
    tracep->fullIData(oldp+7,(1U),32);
    tracep->fullIData(oldp+8,(2U),32);
    tracep->fullQData(oldp+9,(0x3ff0000000000000ULL),64);
    tracep->fullQData(oldp+11,(0xbff0000000000000ULL),64);
    tracep->fullBit(oldp+13,(1U));
    tracep->fullIData(oldp+14,(0xdeadbeefU),32);
    tracep->fullIData(oldp+15,(3U),32);
    tracep->fullIData(oldp+16,(4U),32);
    tracep->fullIData(oldp+17,(1U),32);
    tracep->fullDouble(oldp+18,(-1.0));
    tracep->fullDouble(oldp+20,(1.0));
}
