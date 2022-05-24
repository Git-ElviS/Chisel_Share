// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnumOpsTester__Syms.h"


VL_ATTR_COLD void VEnumOpsTester___024root__trace_init_sub__TOP__0(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnumOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumOpsTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("EnumOpsTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"mod_io_x", false,-1, 6,0);
    tracep->declBus(c+3,"mod_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_io_lt", false,-1);
    tracep->declBit(c+5,"mod_io_le", false,-1);
    tracep->declBit(c+4,"mod_io_gt", false,-1);
    tracep->declBit(c+5,"mod_io_ge", false,-1);
    tracep->declBit(c+5,"mod_io_eq", false,-1);
    tracep->declBit(c+4,"mod_io_ne", false,-1);
    tracep->declBus(c+3,"mod_1_io_x", false,-1, 6,0);
    tracep->declBus(c+6,"mod_1_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_1_io_lt", false,-1);
    tracep->declBit(c+5,"mod_1_io_le", false,-1);
    tracep->declBit(c+4,"mod_1_io_gt", false,-1);
    tracep->declBit(c+4,"mod_1_io_ge", false,-1);
    tracep->declBit(c+4,"mod_1_io_eq", false,-1);
    tracep->declBit(c+5,"mod_1_io_ne", false,-1);
    tracep->declBus(c+3,"mod_2_io_x", false,-1, 6,0);
    tracep->declBus(c+7,"mod_2_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_2_io_lt", false,-1);
    tracep->declBit(c+5,"mod_2_io_le", false,-1);
    tracep->declBit(c+4,"mod_2_io_gt", false,-1);
    tracep->declBit(c+4,"mod_2_io_ge", false,-1);
    tracep->declBit(c+4,"mod_2_io_eq", false,-1);
    tracep->declBit(c+5,"mod_2_io_ne", false,-1);
    tracep->declBus(c+3,"mod_3_io_x", false,-1, 6,0);
    tracep->declBus(c+8,"mod_3_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_3_io_lt", false,-1);
    tracep->declBit(c+5,"mod_3_io_le", false,-1);
    tracep->declBit(c+4,"mod_3_io_gt", false,-1);
    tracep->declBit(c+4,"mod_3_io_ge", false,-1);
    tracep->declBit(c+4,"mod_3_io_eq", false,-1);
    tracep->declBit(c+5,"mod_3_io_ne", false,-1);
    tracep->declBus(c+3,"mod_4_io_x", false,-1, 6,0);
    tracep->declBus(c+9,"mod_4_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_4_io_lt", false,-1);
    tracep->declBit(c+5,"mod_4_io_le", false,-1);
    tracep->declBit(c+4,"mod_4_io_gt", false,-1);
    tracep->declBit(c+4,"mod_4_io_ge", false,-1);
    tracep->declBit(c+4,"mod_4_io_eq", false,-1);
    tracep->declBit(c+5,"mod_4_io_ne", false,-1);
    tracep->declBus(c+6,"mod_5_io_x", false,-1, 6,0);
    tracep->declBus(c+3,"mod_5_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_5_io_lt", false,-1);
    tracep->declBit(c+4,"mod_5_io_le", false,-1);
    tracep->declBit(c+5,"mod_5_io_gt", false,-1);
    tracep->declBit(c+5,"mod_5_io_ge", false,-1);
    tracep->declBit(c+4,"mod_5_io_eq", false,-1);
    tracep->declBit(c+5,"mod_5_io_ne", false,-1);
    tracep->declBus(c+6,"mod_6_io_x", false,-1, 6,0);
    tracep->declBus(c+6,"mod_6_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_6_io_lt", false,-1);
    tracep->declBit(c+5,"mod_6_io_le", false,-1);
    tracep->declBit(c+4,"mod_6_io_gt", false,-1);
    tracep->declBit(c+5,"mod_6_io_ge", false,-1);
    tracep->declBit(c+5,"mod_6_io_eq", false,-1);
    tracep->declBit(c+4,"mod_6_io_ne", false,-1);
    tracep->declBus(c+6,"mod_7_io_x", false,-1, 6,0);
    tracep->declBus(c+7,"mod_7_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_7_io_lt", false,-1);
    tracep->declBit(c+5,"mod_7_io_le", false,-1);
    tracep->declBit(c+4,"mod_7_io_gt", false,-1);
    tracep->declBit(c+4,"mod_7_io_ge", false,-1);
    tracep->declBit(c+4,"mod_7_io_eq", false,-1);
    tracep->declBit(c+5,"mod_7_io_ne", false,-1);
    tracep->declBus(c+6,"mod_8_io_x", false,-1, 6,0);
    tracep->declBus(c+8,"mod_8_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_8_io_lt", false,-1);
    tracep->declBit(c+5,"mod_8_io_le", false,-1);
    tracep->declBit(c+4,"mod_8_io_gt", false,-1);
    tracep->declBit(c+4,"mod_8_io_ge", false,-1);
    tracep->declBit(c+4,"mod_8_io_eq", false,-1);
    tracep->declBit(c+5,"mod_8_io_ne", false,-1);
    tracep->declBus(c+6,"mod_9_io_x", false,-1, 6,0);
    tracep->declBus(c+9,"mod_9_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_9_io_lt", false,-1);
    tracep->declBit(c+5,"mod_9_io_le", false,-1);
    tracep->declBit(c+4,"mod_9_io_gt", false,-1);
    tracep->declBit(c+4,"mod_9_io_ge", false,-1);
    tracep->declBit(c+4,"mod_9_io_eq", false,-1);
    tracep->declBit(c+5,"mod_9_io_ne", false,-1);
    tracep->declBus(c+7,"mod_10_io_x", false,-1, 6,0);
    tracep->declBus(c+3,"mod_10_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_10_io_lt", false,-1);
    tracep->declBit(c+4,"mod_10_io_le", false,-1);
    tracep->declBit(c+5,"mod_10_io_gt", false,-1);
    tracep->declBit(c+5,"mod_10_io_ge", false,-1);
    tracep->declBit(c+4,"mod_10_io_eq", false,-1);
    tracep->declBit(c+5,"mod_10_io_ne", false,-1);
    tracep->declBus(c+7,"mod_11_io_x", false,-1, 6,0);
    tracep->declBus(c+6,"mod_11_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_11_io_lt", false,-1);
    tracep->declBit(c+4,"mod_11_io_le", false,-1);
    tracep->declBit(c+5,"mod_11_io_gt", false,-1);
    tracep->declBit(c+5,"mod_11_io_ge", false,-1);
    tracep->declBit(c+4,"mod_11_io_eq", false,-1);
    tracep->declBit(c+5,"mod_11_io_ne", false,-1);
    tracep->declBus(c+7,"mod_12_io_x", false,-1, 6,0);
    tracep->declBus(c+7,"mod_12_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_12_io_lt", false,-1);
    tracep->declBit(c+5,"mod_12_io_le", false,-1);
    tracep->declBit(c+4,"mod_12_io_gt", false,-1);
    tracep->declBit(c+5,"mod_12_io_ge", false,-1);
    tracep->declBit(c+5,"mod_12_io_eq", false,-1);
    tracep->declBit(c+4,"mod_12_io_ne", false,-1);
    tracep->declBus(c+7,"mod_13_io_x", false,-1, 6,0);
    tracep->declBus(c+8,"mod_13_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_13_io_lt", false,-1);
    tracep->declBit(c+5,"mod_13_io_le", false,-1);
    tracep->declBit(c+4,"mod_13_io_gt", false,-1);
    tracep->declBit(c+4,"mod_13_io_ge", false,-1);
    tracep->declBit(c+4,"mod_13_io_eq", false,-1);
    tracep->declBit(c+5,"mod_13_io_ne", false,-1);
    tracep->declBus(c+7,"mod_14_io_x", false,-1, 6,0);
    tracep->declBus(c+9,"mod_14_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_14_io_lt", false,-1);
    tracep->declBit(c+5,"mod_14_io_le", false,-1);
    tracep->declBit(c+4,"mod_14_io_gt", false,-1);
    tracep->declBit(c+4,"mod_14_io_ge", false,-1);
    tracep->declBit(c+4,"mod_14_io_eq", false,-1);
    tracep->declBit(c+5,"mod_14_io_ne", false,-1);
    tracep->declBus(c+8,"mod_15_io_x", false,-1, 6,0);
    tracep->declBus(c+3,"mod_15_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_15_io_lt", false,-1);
    tracep->declBit(c+4,"mod_15_io_le", false,-1);
    tracep->declBit(c+5,"mod_15_io_gt", false,-1);
    tracep->declBit(c+5,"mod_15_io_ge", false,-1);
    tracep->declBit(c+4,"mod_15_io_eq", false,-1);
    tracep->declBit(c+5,"mod_15_io_ne", false,-1);
    tracep->declBus(c+8,"mod_16_io_x", false,-1, 6,0);
    tracep->declBus(c+6,"mod_16_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_16_io_lt", false,-1);
    tracep->declBit(c+4,"mod_16_io_le", false,-1);
    tracep->declBit(c+5,"mod_16_io_gt", false,-1);
    tracep->declBit(c+5,"mod_16_io_ge", false,-1);
    tracep->declBit(c+4,"mod_16_io_eq", false,-1);
    tracep->declBit(c+5,"mod_16_io_ne", false,-1);
    tracep->declBus(c+8,"mod_17_io_x", false,-1, 6,0);
    tracep->declBus(c+7,"mod_17_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_17_io_lt", false,-1);
    tracep->declBit(c+4,"mod_17_io_le", false,-1);
    tracep->declBit(c+5,"mod_17_io_gt", false,-1);
    tracep->declBit(c+5,"mod_17_io_ge", false,-1);
    tracep->declBit(c+4,"mod_17_io_eq", false,-1);
    tracep->declBit(c+5,"mod_17_io_ne", false,-1);
    tracep->declBus(c+8,"mod_18_io_x", false,-1, 6,0);
    tracep->declBus(c+8,"mod_18_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_18_io_lt", false,-1);
    tracep->declBit(c+5,"mod_18_io_le", false,-1);
    tracep->declBit(c+4,"mod_18_io_gt", false,-1);
    tracep->declBit(c+5,"mod_18_io_ge", false,-1);
    tracep->declBit(c+5,"mod_18_io_eq", false,-1);
    tracep->declBit(c+4,"mod_18_io_ne", false,-1);
    tracep->declBus(c+8,"mod_19_io_x", false,-1, 6,0);
    tracep->declBus(c+9,"mod_19_io_y", false,-1, 6,0);
    tracep->declBit(c+5,"mod_19_io_lt", false,-1);
    tracep->declBit(c+5,"mod_19_io_le", false,-1);
    tracep->declBit(c+4,"mod_19_io_gt", false,-1);
    tracep->declBit(c+4,"mod_19_io_ge", false,-1);
    tracep->declBit(c+4,"mod_19_io_eq", false,-1);
    tracep->declBit(c+5,"mod_19_io_ne", false,-1);
    tracep->declBus(c+9,"mod_20_io_x", false,-1, 6,0);
    tracep->declBus(c+3,"mod_20_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_20_io_lt", false,-1);
    tracep->declBit(c+4,"mod_20_io_le", false,-1);
    tracep->declBit(c+5,"mod_20_io_gt", false,-1);
    tracep->declBit(c+5,"mod_20_io_ge", false,-1);
    tracep->declBit(c+4,"mod_20_io_eq", false,-1);
    tracep->declBit(c+5,"mod_20_io_ne", false,-1);
    tracep->declBus(c+9,"mod_21_io_x", false,-1, 6,0);
    tracep->declBus(c+6,"mod_21_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_21_io_lt", false,-1);
    tracep->declBit(c+4,"mod_21_io_le", false,-1);
    tracep->declBit(c+5,"mod_21_io_gt", false,-1);
    tracep->declBit(c+5,"mod_21_io_ge", false,-1);
    tracep->declBit(c+4,"mod_21_io_eq", false,-1);
    tracep->declBit(c+5,"mod_21_io_ne", false,-1);
    tracep->declBus(c+9,"mod_22_io_x", false,-1, 6,0);
    tracep->declBus(c+7,"mod_22_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_22_io_lt", false,-1);
    tracep->declBit(c+4,"mod_22_io_le", false,-1);
    tracep->declBit(c+5,"mod_22_io_gt", false,-1);
    tracep->declBit(c+5,"mod_22_io_ge", false,-1);
    tracep->declBit(c+4,"mod_22_io_eq", false,-1);
    tracep->declBit(c+5,"mod_22_io_ne", false,-1);
    tracep->declBus(c+9,"mod_23_io_x", false,-1, 6,0);
    tracep->declBus(c+8,"mod_23_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_23_io_lt", false,-1);
    tracep->declBit(c+4,"mod_23_io_le", false,-1);
    tracep->declBit(c+5,"mod_23_io_gt", false,-1);
    tracep->declBit(c+5,"mod_23_io_ge", false,-1);
    tracep->declBit(c+4,"mod_23_io_eq", false,-1);
    tracep->declBit(c+5,"mod_23_io_ne", false,-1);
    tracep->declBus(c+9,"mod_24_io_x", false,-1, 6,0);
    tracep->declBus(c+9,"mod_24_io_y", false,-1, 6,0);
    tracep->declBit(c+4,"mod_24_io_lt", false,-1);
    tracep->declBit(c+5,"mod_24_io_le", false,-1);
    tracep->declBit(c+4,"mod_24_io_gt", false,-1);
    tracep->declBit(c+5,"mod_24_io_ge", false,-1);
    tracep->declBit(c+5,"mod_24_io_eq", false,-1);
    tracep->declBit(c+4,"mod_24_io_ne", false,-1);
    tracep->pushNamePrefix("mod ");
    tracep->declBus(c+3,"io_x", false,-1, 6,0);
    tracep->declBus(c+3,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+5,"io_eq", false,-1);
    tracep->declBit(c+4,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_1 ");
    tracep->declBus(c+3,"io_x", false,-1, 6,0);
    tracep->declBus(c+6,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_10 ");
    tracep->declBus(c+7,"io_x", false,-1, 6,0);
    tracep->declBus(c+3,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_11 ");
    tracep->declBus(c+7,"io_x", false,-1, 6,0);
    tracep->declBus(c+6,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_12 ");
    tracep->declBus(c+7,"io_x", false,-1, 6,0);
    tracep->declBus(c+7,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+5,"io_eq", false,-1);
    tracep->declBit(c+4,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_13 ");
    tracep->declBus(c+7,"io_x", false,-1, 6,0);
    tracep->declBus(c+8,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_14 ");
    tracep->declBus(c+7,"io_x", false,-1, 6,0);
    tracep->declBus(c+9,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_15 ");
    tracep->declBus(c+8,"io_x", false,-1, 6,0);
    tracep->declBus(c+3,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_16 ");
    tracep->declBus(c+8,"io_x", false,-1, 6,0);
    tracep->declBus(c+6,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_17 ");
    tracep->declBus(c+8,"io_x", false,-1, 6,0);
    tracep->declBus(c+7,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_18 ");
    tracep->declBus(c+8,"io_x", false,-1, 6,0);
    tracep->declBus(c+8,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+5,"io_eq", false,-1);
    tracep->declBit(c+4,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_19 ");
    tracep->declBus(c+8,"io_x", false,-1, 6,0);
    tracep->declBus(c+9,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_2 ");
    tracep->declBus(c+3,"io_x", false,-1, 6,0);
    tracep->declBus(c+7,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_20 ");
    tracep->declBus(c+9,"io_x", false,-1, 6,0);
    tracep->declBus(c+3,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_21 ");
    tracep->declBus(c+9,"io_x", false,-1, 6,0);
    tracep->declBus(c+6,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_22 ");
    tracep->declBus(c+9,"io_x", false,-1, 6,0);
    tracep->declBus(c+7,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_23 ");
    tracep->declBus(c+9,"io_x", false,-1, 6,0);
    tracep->declBus(c+8,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_24 ");
    tracep->declBus(c+9,"io_x", false,-1, 6,0);
    tracep->declBus(c+9,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+5,"io_eq", false,-1);
    tracep->declBit(c+4,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_3 ");
    tracep->declBus(c+3,"io_x", false,-1, 6,0);
    tracep->declBus(c+8,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_4 ");
    tracep->declBus(c+3,"io_x", false,-1, 6,0);
    tracep->declBus(c+9,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_5 ");
    tracep->declBus(c+6,"io_x", false,-1, 6,0);
    tracep->declBus(c+3,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+4,"io_le", false,-1);
    tracep->declBit(c+5,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_6 ");
    tracep->declBus(c+6,"io_x", false,-1, 6,0);
    tracep->declBus(c+6,"io_y", false,-1, 6,0);
    tracep->declBit(c+4,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+5,"io_ge", false,-1);
    tracep->declBit(c+5,"io_eq", false,-1);
    tracep->declBit(c+4,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_7 ");
    tracep->declBus(c+6,"io_x", false,-1, 6,0);
    tracep->declBus(c+7,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_8 ");
    tracep->declBus(c+6,"io_x", false,-1, 6,0);
    tracep->declBus(c+8,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mod_9 ");
    tracep->declBus(c+6,"io_x", false,-1, 6,0);
    tracep->declBus(c+9,"io_y", false,-1, 6,0);
    tracep->declBit(c+5,"io_lt", false,-1);
    tracep->declBit(c+5,"io_le", false,-1);
    tracep->declBit(c+4,"io_gt", false,-1);
    tracep->declBit(c+4,"io_ge", false,-1);
    tracep->declBit(c+4,"io_eq", false,-1);
    tracep->declBit(c+5,"io_ne", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VEnumOpsTester___024root__trace_init_top(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnumOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumOpsTester___024root__trace_init_top\n"); );
    // Body
    VEnumOpsTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VEnumOpsTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VEnumOpsTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VEnumOpsTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VEnumOpsTester___024root__trace_register(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnumOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumOpsTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VEnumOpsTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VEnumOpsTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VEnumOpsTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VEnumOpsTester___024root__trace_full_sub_0(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VEnumOpsTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumOpsTester___024root__trace_full_top_0\n"); );
    // Init
    VEnumOpsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnumOpsTester___024root*>(voidSelf);
    VEnumOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VEnumOpsTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VEnumOpsTester___024root__trace_full_sub_0(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnumOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnumOpsTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(0U),7);
    tracep->fullBit(oldp+4,(0U));
    tracep->fullBit(oldp+5,(1U));
    tracep->fullCData(oldp+6,(1U),7);
    tracep->fullCData(oldp+7,(2U),7);
    tracep->fullCData(oldp+8,(0x64U),7);
    tracep->fullCData(oldp+9,(0x65U),7);
}