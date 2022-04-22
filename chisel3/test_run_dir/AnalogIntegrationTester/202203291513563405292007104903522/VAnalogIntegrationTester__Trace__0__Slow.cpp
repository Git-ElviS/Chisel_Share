// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAnalogIntegrationTester__Syms.h"


VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_init_sub__TOP__0(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->pushNamePrefix("AnalogIntegrationTester ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBit(c+1,"dut_io_ports_0_in_valid", false,-1);
    tracep->declBus(c+10,"dut_io_ports_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"dut_io_ports_0_out", false,-1, 31,0);
    tracep->declBit(c+3,"dut_io_ports_1_in_valid", false,-1);
    tracep->declBus(c+10,"dut_io_ports_1_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"dut_io_ports_1_out", false,-1, 31,0);
    tracep->declBit(c+4,"dut_io_ports_2_in_valid", false,-1);
    tracep->declBus(c+10,"dut_io_ports_2_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"dut_io_ports_2_out", false,-1, 31,0);
    tracep->declBit(c+5,"dut_io_ports_3_in_valid", false,-1);
    tracep->declBus(c+10,"dut_io_ports_3_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"dut_io_ports_3_out", false,-1, 31,0);
    tracep->declBus(c+6,"cycle", false,-1, 1,0);
    tracep->declBit(c+5,"wrap_wrap", false,-1);
    tracep->declBus(c+7,"expectedValue", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"io_ports_0_in_valid", false,-1);
    tracep->declBus(c+10,"io_ports_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"io_ports_0_out", false,-1, 31,0);
    tracep->declBit(c+3,"io_ports_1_in_valid", false,-1);
    tracep->declBus(c+10,"io_ports_1_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"io_ports_1_out", false,-1, 31,0);
    tracep->declBit(c+4,"io_ports_2_in_valid", false,-1);
    tracep->declBus(c+10,"io_ports_2_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"io_ports_2_out", false,-1, 31,0);
    tracep->declBit(c+5,"io_ports_3_in_valid", false,-1);
    tracep->declBus(c+10,"io_ports_3_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"io_ports_3_out", false,-1, 31,0);
    tracep->declBit(c+1,"mods_0_io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"mods_0_io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+3,"mods_1_io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"mods_1_io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+4,"mods_2_io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"mods_2_io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+5,"mods_2_io_port_1_in_valid", false,-1);
    tracep->declBus(c+2,"mods_2_io_port_1_out", false,-1, 31,0);
    tracep->pushNamePrefix("mods_0 ");
    tracep->declBus(c+2,"io_bus", false,-1, 31,0);
    tracep->declBit(c+1,"io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+1,"bbs_0_io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"bbs_0_io_port_0_out", false,-1, 31,0);
    tracep->pushNamePrefix("bbs_0 ");
    tracep->declBus(c+2,"io_bus", false,-1, 31,0);
    tracep->declBit(c+1,"io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+1,"impl_port_0_in_valid", false,-1);
    tracep->declBus(c+10,"impl_port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"impl_port_0_out", false,-1, 31,0);
    tracep->pushNamePrefix("impl ");
    tracep->declBus(c+11,"index", false,-1, 31,0);
    tracep->declBus(c+2,"bus", false,-1, 31,0);
    tracep->declBit(c+1,"port_0_in_valid", false,-1);
    tracep->declBus(c+10,"port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"port_0_out", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mods_1 ");
    tracep->declBus(c+2,"io_bus", false,-1, 31,0);
    tracep->declBit(c+3,"io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+3,"impl_port_0_in_valid", false,-1);
    tracep->declBus(c+10,"impl_port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"impl_port_0_out", false,-1, 31,0);
    tracep->pushNamePrefix("impl ");
    tracep->declBus(c+12,"index", false,-1, 31,0);
    tracep->declBus(c+2,"bus", false,-1, 31,0);
    tracep->declBit(c+3,"port_0_in_valid", false,-1);
    tracep->declBus(c+10,"port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"port_0_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mods_2 ");
    tracep->declBus(c+2,"io_bus", false,-1, 31,0);
    tracep->declBit(c+4,"io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+5,"io_port_1_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_1_out", false,-1, 31,0);
    tracep->declBit(c+4,"bbs_0_io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"bbs_0_io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+5,"bbs_1_io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"bbs_1_io_port_0_out", false,-1, 31,0);
    tracep->pushNamePrefix("bbs_0 ");
    tracep->declBus(c+2,"io_bus", false,-1, 31,0);
    tracep->declBit(c+4,"io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+4,"impl_port_0_in_valid", false,-1);
    tracep->declBus(c+10,"impl_port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"impl_port_0_out", false,-1, 31,0);
    tracep->pushNamePrefix("impl ");
    tracep->declBus(c+13,"index", false,-1, 31,0);
    tracep->declBus(c+2,"bus", false,-1, 31,0);
    tracep->declBit(c+4,"port_0_in_valid", false,-1);
    tracep->declBus(c+10,"port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"port_0_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bbs_1 ");
    tracep->declBus(c+2,"io_bus", false,-1, 31,0);
    tracep->declBit(c+5,"io_port_0_in_valid", false,-1);
    tracep->declBus(c+2,"io_port_0_out", false,-1, 31,0);
    tracep->declBit(c+5,"impl_port_0_in_valid", false,-1);
    tracep->declBus(c+10,"impl_port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"impl_port_0_out", false,-1, 31,0);
    tracep->pushNamePrefix("impl ");
    tracep->declBus(c+14,"index", false,-1, 31,0);
    tracep->declBus(c+2,"bus", false,-1, 31,0);
    tracep->declBit(c+5,"port_0_in_valid", false,-1);
    tracep->declBus(c+10,"port_0_in_bits", false,-1, 31,0);
    tracep->declBus(c+2,"port_0_out", false,-1, 31,0);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_init_top(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_init_top\n"); );
    // Body
    VAnalogIntegrationTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAnalogIntegrationTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAnalogIntegrationTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_register(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAnalogIntegrationTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAnalogIntegrationTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAnalogIntegrationTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_full_sub_0(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_full_top_0\n"); );
    // Init
    VAnalogIntegrationTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnalogIntegrationTester___024root*>(voidSelf);
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAnalogIntegrationTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root__trace_full_sub_0(VAnalogIntegrationTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
    tracep->fullIData(oldp+2,(((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 2U : 0U) & 
                                    ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((0U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((0U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 3U : 0U) & 
                                     ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)) & ((1U 
                                                  == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                   & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U))) | ((
                                                   (((((2U 
                                                        == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                        ? 4U
                                                        : 0U) 
                                                      & ((2U 
                                                          == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                          ? 0xffffffffU
                                                          : 0U)) 
                                                     & ((2U 
                                                         == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                         ? 0xffffffffU
                                                         : 0U)) 
                                                    & ((2U 
                                                        == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                        ? 0xffffffffU
                                                        : 0U)) 
                                                   | (((((3U 
                                                          == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                          ? 5U
                                                          : 0U) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                            ? 0xffffffffU
                                                            : 0U)) 
                                                       & ((3U 
                                                           == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                           ? 0xffffffffU
                                                           : 0U)) 
                                                      & ((3U 
                                                          == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                                  & (((2U 
                                                       == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                       ? 0xffffffffU
                                                       : 0U) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                         ? 0xffffffffU
                                                         : 0U))))),32);
    tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
    tracep->fullBit(oldp+4,((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
    tracep->fullBit(oldp+5,((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))));
    tracep->fullCData(oldp+6,(vlSelf->AnalogIntegrationTester__DOT__cycle),2);
    tracep->fullIData(oldp+7,(((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                         ? 4U : ((1U 
                                                  == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                  ? 3U
                                                  : 2U)))),32);
    tracep->fullBit(oldp+8,(vlSelf->clock));
    tracep->fullBit(oldp+9,(vlSelf->reset));
    tracep->fullIData(oldp+10,(2U),32);
    tracep->fullIData(oldp+11,(0U),32);
    tracep->fullIData(oldp+12,(1U),32);
    tracep->fullIData(oldp+13,(2U),32);
    tracep->fullIData(oldp+14,(3U),32);
}
