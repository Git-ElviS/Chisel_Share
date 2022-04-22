// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueReasonableReadyValid.h for the primary calling header

#include "verilated.h"

#include "VQueueReasonableReadyValid___024root.h"

VL_INLINE_OPT void VQueueReasonableReadyValid___024root___sequent__TOP__0(VQueueReasonableReadyValid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueReasonableReadyValid/202203291441059016109001740658259/QueueReasonableReadyValid.v", 451, "");
        }
    }
    __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (vlSelf->reset) {
        vlSelf->QueueReasonableReadyValid__DOT__value = 0U;
    } else if (vlSelf->QueueReasonableReadyValid__DOT___T_10) {
        vlSelf->QueueReasonableReadyValid__DOT__value 
            = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__wrap)
                ? 0U : (IData)(vlSelf->QueueReasonableReadyValid__DOT___value_T_1));
    }
    __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlSelf->reset) {
        vlSelf->QueueReasonableReadyValid__DOT__value_1 = 0U;
    } else if ((((IData)(vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                 >> 9U) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full))) {
        vlSelf->QueueReasonableReadyValid__DOT__value_1 
            = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__wrap_1)
                ? 0U : (IData)(vlSelf->QueueReasonableReadyValid__DOT___value_T_3));
    }
    vlSelf->QueueReasonableReadyValid__DOT__wrap = 
        (0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value));
    vlSelf->QueueReasonableReadyValid__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueReasonableReadyValid__DOT__value)));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueueReasonableReadyValid__DOT__wrap_1 
        = (0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1));
    vlSelf->QueueReasonableReadyValid__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1)));
    if (vlSelf->reset) {
        vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__do_enq) 
                != (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__do_deq))) {
        vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full 
            = vlSelf->QueueReasonableReadyValid__DOT__q__DOT__do_enq;
    }
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->QueueReasonableReadyValid__DOT___T_10 = 
        ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full)) 
         & (0x14U > (IData)(vlSelf->QueueReasonableReadyValid__DOT__value)));
    vlSelf->QueueReasonableReadyValid__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->QueueReasonableReadyValid__DOT__value)));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->QueueReasonableReadyValid__DOT__q__DOT__do_deq 
        = (((IData)(vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
            >> 9U) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full));
}

void VQueueReasonableReadyValid___024root___eval(VQueueReasonableReadyValid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VQueueReasonableReadyValid___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VQueueReasonableReadyValid___024root___eval_debug_assertions(VQueueReasonableReadyValid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
