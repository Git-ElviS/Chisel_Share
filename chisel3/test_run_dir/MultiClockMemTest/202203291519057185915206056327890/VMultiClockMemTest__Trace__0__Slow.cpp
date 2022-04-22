// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiClockMemTest__Syms.h"


VL_ATTR_COLD void VMultiClockMemTest___024root__trace_init_sub__TOP__0(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,"clock", false,-1);
    tracep->declBit(c+16,"reset", false,-1);
    tracep->pushNamePrefix("MultiClockMemTest ");
    tracep->declBit(c+15,"clock", false,-1);
    tracep->declBit(c+16,"reset", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+19,"mem_rdata_en", false,-1);
    tracep->declBus(c+9,"mem_rdata_addr", false,-1, 2,0);
    tracep->declBus(c+17,"mem_rdata_data", false,-1, 31,0);
    tracep->declBus(c+20,"mem_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+10,"mem_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+19,"mem_MPORT_mask", false,-1);
    tracep->declBit(c+11,"mem_MPORT_en", false,-1);
    tracep->declBus(c+21,"mem_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+10,"mem_MPORT_1_addr", false,-1, 2,0);
    tracep->declBit(c+19,"mem_MPORT_1_mask", false,-1);
    tracep->declBit(c+12,"mem_MPORT_1_en", false,-1);
    tracep->declBit(c+18,"mem_clock", false,-1);
    tracep->declBit(c+18,"cDiv", false,-1);
    tracep->declBus(c+13,"cycle", false,-1, 4,0);
    tracep->declBit(c+14,"wrap_wrap", false,-1);
    tracep->declBus(c+10,"waddr", false,-1, 2,0);
    tracep->declBus(c+9,"raddr", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VMultiClockMemTest___024root__trace_init_top(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_init_top\n"); );
    // Body
    VMultiClockMemTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMultiClockMemTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMultiClockMemTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMultiClockMemTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMultiClockMemTest___024root__trace_register(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMultiClockMemTest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMultiClockMemTest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMultiClockMemTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMultiClockMemTest___024root__trace_full_sub_0(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiClockMemTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_full_top_0\n"); );
    // Init
    VMultiClockMemTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockMemTest___024root*>(voidSelf);
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMultiClockMemTest___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMultiClockMemTest___024root__trace_full_sub_0(VMultiClockMemTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->MultiClockMemTest__DOT__mem[0]),32);
    tracep->fullIData(oldp+2,(vlSelf->MultiClockMemTest__DOT__mem[1]),32);
    tracep->fullIData(oldp+3,(vlSelf->MultiClockMemTest__DOT__mem[2]),32);
    tracep->fullIData(oldp+4,(vlSelf->MultiClockMemTest__DOT__mem[3]),32);
    tracep->fullIData(oldp+5,(vlSelf->MultiClockMemTest__DOT__mem[4]),32);
    tracep->fullIData(oldp+6,(vlSelf->MultiClockMemTest__DOT__mem[5]),32);
    tracep->fullIData(oldp+7,(vlSelf->MultiClockMemTest__DOT__mem[6]),32);
    tracep->fullIData(oldp+8,(vlSelf->MultiClockMemTest__DOT__mem[7]),32);
    tracep->fullCData(oldp+9,((7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                     - (IData)(1U)))),3);
    tracep->fullCData(oldp+10,(vlSelf->MultiClockMemTest__DOT__waddr),3);
    tracep->fullBit(oldp+11,((8U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))));
    tracep->fullBit(oldp+12,(((8U <= (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                              & (0x10U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle)))));
    tracep->fullCData(oldp+13,(vlSelf->MultiClockMemTest__DOT__cycle),5);
    tracep->fullBit(oldp+14,((0x13U == (IData)(vlSelf->MultiClockMemTest__DOT__cycle))));
    tracep->fullBit(oldp+15,(vlSelf->clock));
    tracep->fullBit(oldp+16,(vlSelf->reset));
    tracep->fullIData(oldp+17,(vlSelf->MultiClockMemTest__DOT__mem
                               [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                       - (IData)(1U)))]),32);
    tracep->fullBit(oldp+18,(vlSelf->MultiClockMemTest__DOT__cDiv));
    tracep->fullBit(oldp+19,(1U));
    tracep->fullIData(oldp+20,(0x7bU),32);
    tracep->fullIData(oldp+21,(0x1c8U),32);
}
