// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueuePipeTester.h for the primary calling header

#include "verilated.h"

#include "VQueuePipeTester__Syms.h"
#include "VQueuePipeTester___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> VQueuePipeTester__ConstPool__TABLE_hbab7df67_0;
extern const VlUnpacked<CData/*0:0*/, 32> VQueuePipeTester__ConstPool__TABLE_he56353c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> VQueuePipeTester__ConstPool__TABLE_h2b6925bc_0;
extern const VlUnpacked<CData/*0:0*/, 32> VQueuePipeTester__ConstPool__TABLE_h6883b3c4_0;

VL_INLINE_OPT void VQueuePipeTester___024root___sequent__TOP__0(VQueuePipeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((IData)(vlSelf->QueuePipeTester__DOT__q_io_enq_ready) 
                                     | ((2U == ((((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full) 
                                                  & (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__ptr_match))
                                                  ? 2U
                                                  : 0U) 
                                                | (1U 
                                                   & ((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__enq_ptr_value) 
                                                      - (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__deq_ptr_value))))) 
                                        & (~ ((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                              >> 8U))))))))) {
            VL_WRITEF("[%0t] %%Error: QueuePipeTester.v:428: Assertion failed in %NQueuePipeTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueuePipeTester/202203291448058210598067227600984/QueuePipeTester.v", 428, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((IData)(vlSelf->QueuePipeTester__DOT__q_io_enq_ready) 
                                     | ((2U == ((((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full) 
                                                  & (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__ptr_match))
                                                  ? 2U
                                                  : 0U) 
                                                | (1U 
                                                   & ((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__enq_ptr_value) 
                                                      - (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__deq_ptr_value))))) 
                                        & (~ ((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                              >> 8U))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:139 assert(q.io.enq.ready || (q.io.count === queueDepth.U && !q.io.deq.ready))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueuePipeTester__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueuePipeTester/202203291448058210598067227600984/QueuePipeTester.v", 452, "");
        }
    }
    __Vdly__QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    __Vdly__QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlSelf->reset) {
        vlSelf->QueuePipeTester__DOT__value_1 = 0U;
    } else if ((1U & (((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                       >> 8U) & (~ (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__empty))))) {
        vlSelf->QueuePipeTester__DOT__value_1 = ((IData)(vlSelf->QueuePipeTester__DOT__wrap_1)
                                                  ? 0U
                                                  : (IData)(vlSelf->QueuePipeTester__DOT___value_T_3));
    }
    __Vtableidx1 = (((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__deq_ptr_value) 
                     << 4U) | ((8U & (((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                       >> 5U) & ((~ (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__empty)) 
                                                 << 3U))) 
                               | (((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__enq_ptr_value) 
                                   << 2U) | ((((IData)(vlSelf->QueuePipeTester__DOT__q_io_enq_ready) 
                                               & (0x14U 
                                                  > (IData)(vlSelf->QueuePipeTester__DOT__value))) 
                                              << 1U) 
                                             | (IData)(vlSelf->reset)))));
    if ((1U & VQueuePipeTester__ConstPool__TABLE_hbab7df67_0
         [__Vtableidx1])) {
        vlSelf->QueuePipeTester__DOT__q__DOT__enq_ptr_value 
            = VQueuePipeTester__ConstPool__TABLE_he56353c7_0
            [__Vtableidx1];
    }
    if ((2U & VQueuePipeTester__ConstPool__TABLE_hbab7df67_0
         [__Vtableidx1])) {
        vlSelf->QueuePipeTester__DOT__q__DOT__deq_ptr_value 
            = VQueuePipeTester__ConstPool__TABLE_h2b6925bc_0
            [__Vtableidx1];
    }
    if ((4U & VQueuePipeTester__ConstPool__TABLE_hbab7df67_0
         [__Vtableidx1])) {
        vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full 
            = VQueuePipeTester__ConstPool__TABLE_h6883b3c4_0
            [__Vtableidx1];
    }
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueuePipeTester__DOT__wrap_1 = (0x14U == (IData)(vlSelf->QueuePipeTester__DOT__value_1));
    vlSelf->QueuePipeTester__DOT___value_T_3 = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->QueuePipeTester__DOT__value_1)));
    vlSelf->QueuePipeTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__deq_ptr_value));
    if (vlSelf->reset) {
        vlSelf->QueuePipeTester__DOT__value = 0U;
    } else if (vlSelf->QueuePipeTester__DOT___T_7) {
        vlSelf->QueuePipeTester__DOT__value = ((IData)(vlSelf->QueuePipeTester__DOT__wrap)
                                                ? 0U
                                                : (IData)(vlSelf->QueuePipeTester__DOT___value_T_1));
    }
    vlSelf->QueuePipeTester__DOT__q__DOT__empty = ((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__ptr_match) 
                                                   & (~ (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full)));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->QueuePipeTester__DOT__wrap = (0x14U == (IData)(vlSelf->QueuePipeTester__DOT__value));
    vlSelf->QueuePipeTester__DOT___value_T_1 = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->QueuePipeTester__DOT__value)));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->QueuePipeTester__DOT__q_io_enq_ready = 
        (1U & (((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                >> 8U) | (~ ((IData)(vlSelf->QueuePipeTester__DOT__q__DOT__ptr_match) 
                             & (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full)))));
    vlSelf->QueuePipeTester__DOT___T_7 = ((IData)(vlSelf->QueuePipeTester__DOT__q_io_enq_ready) 
                                          & (0x14U 
                                             > (IData)(vlSelf->QueuePipeTester__DOT__value)));
}
