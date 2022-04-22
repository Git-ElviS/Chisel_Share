// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTblTester__Syms.h"


VL_ATTR_COLD void VTblTester___024root__trace_init_sub__TOP__0(VTblTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"clock", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->pushNamePrefix("TblTester ");
    tracep->declBit(c+12,"clock", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->declBit(c+12,"dut_clock", false,-1);
    tracep->declBus(c+1,"dut_io_wi", false,-1, 1,0);
    tracep->declBus(c+2,"dut_io_ri", false,-1, 1,0);
    tracep->declBus(c+3,"dut_io_d", false,-1, 1,0);
    tracep->declBus(c+4,"dut_io_o", false,-1, 1,0);
    tracep->declBus(c+5,"cnt", false,-1, 2,0);
    tracep->declBit(c+6,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+12,"clock", false,-1);
    tracep->declBus(c+1,"io_wi", false,-1, 1,0);
    tracep->declBus(c+2,"io_ri", false,-1, 1,0);
    tracep->declBus(c+3,"io_d", false,-1, 1,0);
    tracep->declBus(c+4,"io_o", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,"m", true,(i+0), 1,0);
    }
    tracep->declBit(c+14,"m_io_o_MPORT_en", false,-1);
    tracep->declBus(c+2,"m_io_o_MPORT_addr", false,-1, 1,0);
    tracep->declBus(c+11,"m_io_o_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+3,"m_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+1,"m_MPORT_addr", false,-1, 1,0);
    tracep->declBit(c+14,"m_MPORT_mask", false,-1);
    tracep->declBit(c+14,"m_MPORT_en", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTblTester___024root__trace_init_top(VTblTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_init_top\n"); );
    // Body
    VTblTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTblTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTblTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTblTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTblTester___024root__trace_register(VTblTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTblTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTblTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTblTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTblTester___024root__trace_full_sub_0(VTblTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTblTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_full_top_0\n"); );
    // Init
    VTblTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTblTester___024root*>(voidSelf);
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTblTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTblTester___024root__trace_full_sub_0(VTblTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->TblTester__DOT__dut_io_wi),2);
    tracep->fullCData(oldp+2,(vlSelf->TblTester__DOT__dut_io_ri),2);
    tracep->fullCData(oldp+3,(vlSelf->TblTester__DOT__dut_io_d),2);
    tracep->fullCData(oldp+4,((((IData)(vlSelf->TblTester__DOT__dut_io_ri) 
                                == (IData)(vlSelf->TblTester__DOT__dut_io_wi))
                                ? (IData)(vlSelf->TblTester__DOT__dut_io_d)
                                : vlSelf->TblTester__DOT__dut__DOT__m
                               [vlSelf->TblTester__DOT__dut_io_ri])),2);
    tracep->fullCData(oldp+5,(vlSelf->TblTester__DOT__cnt),3);
    tracep->fullBit(oldp+6,((7U == (IData)(vlSelf->TblTester__DOT__cnt))));
    tracep->fullCData(oldp+7,(vlSelf->TblTester__DOT__dut__DOT__m[0]),2);
    tracep->fullCData(oldp+8,(vlSelf->TblTester__DOT__dut__DOT__m[1]),2);
    tracep->fullCData(oldp+9,(vlSelf->TblTester__DOT__dut__DOT__m[2]),2);
    tracep->fullCData(oldp+10,(vlSelf->TblTester__DOT__dut__DOT__m[3]),2);
    tracep->fullCData(oldp+11,(vlSelf->TblTester__DOT__dut__DOT__m
                               [vlSelf->TblTester__DOT__dut_io_ri]),2);
    tracep->fullBit(oldp+12,(vlSelf->clock));
    tracep->fullBit(oldp+13,(vlSelf->reset));
    tracep->fullBit(oldp+14,(1U));
}
