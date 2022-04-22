// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClipSqueezeWrapDemo.h for the primary calling header

#include "verilated.h"

#include "VClipSqueezeWrapDemo___024root.h"

VL_INLINE_OPT void VClipSqueezeWrapDemo___024root___sequent__TOP__0(VClipSqueezeWrapDemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((VL_LTS_III(5, 0xaU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ClipSqueezeWrapDemo/2022032915061817711262749494105824/ClipSqueezeWrapDemo.v", 35, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x1cU == (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Target range is range\"[-2,5].1\"\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x1cU == (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"value     clip      squeeze      wrap\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"       %2#       %2#          %2#         %2#\n",
                       5,vlSelf->ClipSqueezeWrapDemo__DOT__counter,
                       4,(VL_LTS_III(5, 6U, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                           ? 6U : (VL_GTS_III(5, 0x1eU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                    ? 0xeU : (0xfU 
                                              & (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))),
                       4,(0xfU & (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)),
                       4,(0xfU & (VL_LTS_III(5, 6U, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                   ? (VL_EXTENDS_II(6,5, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)) 
                                      - (IData)(9U))
                                   : (VL_GTS_III(5, 0x1eU, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))
                                       ? ((IData)(9U) 
                                          + VL_EXTENDS_II(6,5, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))
                                       : ((0x20U & 
                                           ((IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter) 
                                            << 1U)) 
                                          | (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter))))));
        }
    }
    vlSelf->ClipSqueezeWrapDemo__DOT__counter = ((IData)(vlSelf->reset)
                                                  ? 0x1cU
                                                  : (IData)(vlSelf->ClipSqueezeWrapDemo__DOT___counter_T_1));
    vlSelf->ClipSqueezeWrapDemo__DOT___counter_T_1 
        = (0x1fU & ((IData)(1U) + (0x3fU & VL_EXTENDS_II(6,5, (IData)(vlSelf->ClipSqueezeWrapDemo__DOT__counter)))));
}

void VClipSqueezeWrapDemo___024root___eval(VClipSqueezeWrapDemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VClipSqueezeWrapDemo___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VClipSqueezeWrapDemo___024root___eval_debug_assertions(VClipSqueezeWrapDemo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClipSqueezeWrapDemo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
