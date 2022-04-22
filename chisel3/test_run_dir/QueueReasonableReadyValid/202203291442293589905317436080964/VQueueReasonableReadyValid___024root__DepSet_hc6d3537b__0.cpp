// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueReasonableReadyValid.h for the primary calling header

#include "verilated.h"

#include "VQueueReasonableReadyValid__Syms.h"
#include "VQueueReasonableReadyValid___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> VQueueReasonableReadyValid__ConstPool__TABLE_hbab7df67_0;
extern const VlUnpacked<CData/*0:0*/, 32> VQueueReasonableReadyValid__ConstPool__TABLE_he56353c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> VQueueReasonableReadyValid__ConstPool__TABLE_h2b6925bc_0;
extern const VlUnpacked<CData/*0:0*/, 32> VQueueReasonableReadyValid__ConstPool__TABLE_h6883b3c4_0;

VL_INLINE_OPT void VQueueReasonableReadyValid___024root___sequent__TOP__0(VQueueReasonableReadyValid___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                     | (2U == ((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                                 & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                                 ? 2U
                                                 : 0U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value))))))))))) {
            VL_WRITEF("[%0t] %%Error: QueueReasonableReadyValid.v:428: Assertion failed in %NQueueReasonableReadyValid\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueReasonableReadyValid/202203291442293589905317436080964/QueueReasonableReadyValid.v", 428, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                     | (2U == ((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                                 & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                                 ? 2U
                                                 : 0U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:55 assert(q.io.enq.ready || q.io.count === queueDepth.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty)) 
                                     | (0U == ((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                                 & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                                 ? 2U
                                                 : 0U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value))))))))))) {
            VL_WRITEF("[%0t] %%Error: QueueReasonableReadyValid.v:451: Assertion failed in %NQueueReasonableReadyValid\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueReasonableReadyValid/202203291442293589905317436080964/QueueReasonableReadyValid.v", 451, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty)) 
                                     | (0U == ((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                                 & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                                 ? 2U
                                                 : 0U) 
                                               | (1U 
                                                  & ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:59 assert(q.io.deq.valid || q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueReasonableReadyValid/202203291442293589905317436080964/QueueReasonableReadyValid.v", 474, "");
        }
    }
    __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0;
    __Vdly__QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlSelf->reset) {
        vlSelf->QueueReasonableReadyValid__DOT__value_1 = 0U;
    } else if ((1U & (((IData)(vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                       >> 5U) & (~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty))))) {
        vlSelf->QueueReasonableReadyValid__DOT__value_1 
            = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__wrap_1)
                ? 0U : (IData)(vlSelf->QueueReasonableReadyValid__DOT___value_T_3));
    }
    __Vtableidx1 = (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value) 
                     << 4U) | ((8U & (((IData)(vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                                       >> 2U) & ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty)) 
                                                 << 3U))) 
                               | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                   << 2U) | ((((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                               & (0x14U 
                                                  > (IData)(vlSelf->QueueReasonableReadyValid__DOT__value))) 
                                              << 1U) 
                                             | (IData)(vlSelf->reset)))));
    if ((1U & VQueueReasonableReadyValid__ConstPool__TABLE_hbab7df67_0
         [__Vtableidx1])) {
        vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value 
            = VQueueReasonableReadyValid__ConstPool__TABLE_he56353c7_0
            [__Vtableidx1];
    }
    if ((2U & VQueueReasonableReadyValid__ConstPool__TABLE_hbab7df67_0
         [__Vtableidx1])) {
        vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value 
            = VQueueReasonableReadyValid__ConstPool__TABLE_h2b6925bc_0
            [__Vtableidx1];
    }
    if ((4U & VQueueReasonableReadyValid__ConstPool__TABLE_hbab7df67_0
         [__Vtableidx1])) {
        vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full 
            = VQueueReasonableReadyValid__ConstPool__TABLE_h6883b3c4_0
            [__Vtableidx1];
    }
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueueReasonableReadyValid__DOT__wrap_1 
        = (0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1));
    vlSelf->QueueReasonableReadyValid__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1)));
    vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value));
    if (vlSelf->reset) {
        vlSelf->QueueReasonableReadyValid__DOT__value = 0U;
    } else if (vlSelf->QueueReasonableReadyValid__DOT___T_10) {
        vlSelf->QueueReasonableReadyValid__DOT__value 
            = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__wrap)
                ? 0U : (IData)(vlSelf->QueueReasonableReadyValid__DOT___value_T_1));
    }
    vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty 
        = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full)));
    vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full 
        = ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full));
    vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->QueueReasonableReadyValid__DOT__wrap = 
        (0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value));
    vlSelf->QueueReasonableReadyValid__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueReasonableReadyValid__DOT__value)));
    vlSelf->QueueReasonableReadyValid__DOT___T_10 = 
        ((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full)) 
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
}
