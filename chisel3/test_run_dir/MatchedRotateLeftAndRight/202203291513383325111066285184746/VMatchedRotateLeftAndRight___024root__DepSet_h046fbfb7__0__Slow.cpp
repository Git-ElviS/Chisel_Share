// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMatchedRotateLeftAndRight.h for the primary calling header

#include "verilated.h"

#include "VMatchedRotateLeftAndRight___024root.h"

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root___settle__TOP__0(VMatchedRotateLeftAndRight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root___settle__TOP__0\n"); );
    // Init
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_20;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_24;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_28;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_32;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_36;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_40;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_44;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_48;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_52;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_56;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_20;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_24;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_28;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_32;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_36;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_40;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_44;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_48;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_52;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_56;
    // Body
    vlSelf->MatchedRotateLeftAndRight__DOT___shiftAmount1_T_1 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1)));
    vlSelf->MatchedRotateLeftAndRight__DOT___shiftAmount2_T_1 
        = (0x1fffU & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2) 
                      - (IData)(1U)));
    MatchedRotateLeftAndRight__DOT___out1_T_20 = ((2U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                      ? 0x239U
                                                      : 0x51cU) 
                                                    << 2U) 
                                                   | (3U 
                                                      & (((1U 
                                                           & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                           ? 0x1a39U
                                                           : 0x1d1cU) 
                                                         >> 0xbU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                    ? 0x1a39U
                                                    : 0x1d1cU));
    MatchedRotateLeftAndRight__DOT___out2_T_20 = ((2U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                      ? 2U
                                                      : 0U) 
                                                    << 0xbU) 
                                                   | (0x7ffU 
                                                      & (((1U 
                                                           & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                           ? 0xe8eU
                                                           : 0x1d1cU) 
                                                         >> 2U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                    ? 0xe8eU
                                                    : 0x1d1cU));
    MatchedRotateLeftAndRight__DOT___out1_T_24 = ((4U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1ff0U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_20) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_20) 
                                                         >> 9U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_20));
    MatchedRotateLeftAndRight__DOT___out2_T_24 = ((4U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1e00U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_20) 
                                                       << 9U)) 
                                                   | (0x1ffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_20) 
                                                         >> 4U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_20));
    MatchedRotateLeftAndRight__DOT___out1_T_28 = ((8U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1f00U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_24) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_24) 
                                                         >> 5U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_24));
    MatchedRotateLeftAndRight__DOT___out2_T_28 = ((8U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1fe0U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_24) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_24) 
                                                         >> 8U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_24));
    MatchedRotateLeftAndRight__DOT___out1_T_32 = ((0x10U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1ff8U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_28) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_28) 
                                                         >> 0xaU)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_28));
    MatchedRotateLeftAndRight__DOT___out2_T_32 = ((0x10U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1c00U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_28) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_28) 
                                                         >> 3U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_28));
    MatchedRotateLeftAndRight__DOT___out1_T_36 = ((0x20U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1fc0U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_32) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_32) 
                                                         >> 7U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_32));
    MatchedRotateLeftAndRight__DOT___out2_T_36 = ((0x20U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1f80U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_32) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_32) 
                                                         >> 6U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_32));
    MatchedRotateLeftAndRight__DOT___out1_T_40 = ((0x40U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1000U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_36) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_36) 
                                                         >> 1U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_36));
    MatchedRotateLeftAndRight__DOT___out2_T_40 = ((0x40U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1ffeU 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_36) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_36) 
                                                         >> 0xcU)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_36));
    MatchedRotateLeftAndRight__DOT___out1_T_44 = ((0x80U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1800U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_40) 
                                                       << 0xbU)) 
                                                   | (0x7ffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_40) 
                                                         >> 2U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_40));
    MatchedRotateLeftAndRight__DOT___out2_T_44 = ((0x80U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1ffcU 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_40) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_40) 
                                                         >> 0xbU)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_40));
    MatchedRotateLeftAndRight__DOT___out1_T_48 = ((0x100U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1e00U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_44) 
                                                       << 9U)) 
                                                   | (0x1ffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_44) 
                                                         >> 4U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_44));
    MatchedRotateLeftAndRight__DOT___out2_T_48 = ((0x100U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1ff0U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_44) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_44) 
                                                         >> 9U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_44));
    MatchedRotateLeftAndRight__DOT___out1_T_52 = ((0x200U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1fe0U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_48) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_48) 
                                                         >> 8U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_48));
    MatchedRotateLeftAndRight__DOT___out2_T_52 = ((0x200U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1f00U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_48) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_48) 
                                                         >> 5U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_48));
    MatchedRotateLeftAndRight__DOT___out1_T_56 = ((0x400U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                                   ? 
                                                  ((0x1c00U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_52) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_52) 
                                                         >> 3U)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_52));
    MatchedRotateLeftAndRight__DOT___out2_T_56 = ((0x400U 
                                                   & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                                   ? 
                                                  ((0x1ff8U 
                                                    & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_52) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_52) 
                                                         >> 0xaU)))
                                                   : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_52));
    vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60 
        = ((0x800U & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
            ? ((0x1f80U & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_56) 
                           << 7U)) | (0x7fU & ((IData)(MatchedRotateLeftAndRight__DOT___out1_T_56) 
                                               >> 6U)))
            : (IData)(MatchedRotateLeftAndRight__DOT___out1_T_56));
    vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60 
        = ((0x800U & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
            ? ((0x1fc0U & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_56) 
                           << 6U)) | (0x3fU & ((IData)(MatchedRotateLeftAndRight__DOT___out2_T_56) 
                                               >> 7U)))
            : (IData)(MatchedRotateLeftAndRight__DOT___out2_T_56));
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root___eval_initial(VMatchedRotateLeftAndRight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root___eval_settle(VMatchedRotateLeftAndRight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root___eval_settle\n"); );
    // Body
    VMatchedRotateLeftAndRight___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root___final(VMatchedRotateLeftAndRight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root___final\n"); );
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root___ctor_var_reset(VMatchedRotateLeftAndRight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1 = VL_RAND_RESET_I(13);
    vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2 = VL_RAND_RESET_I(13);
    vlSelf->MatchedRotateLeftAndRight__DOT___shiftAmount1_T_1 = VL_RAND_RESET_I(13);
    vlSelf->MatchedRotateLeftAndRight__DOT___shiftAmount2_T_1 = VL_RAND_RESET_I(13);
    vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60 = VL_RAND_RESET_I(13);
    vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60 = VL_RAND_RESET_I(13);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
