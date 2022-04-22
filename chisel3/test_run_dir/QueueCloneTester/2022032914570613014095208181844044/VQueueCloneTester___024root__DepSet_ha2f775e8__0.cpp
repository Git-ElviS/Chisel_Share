// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueCloneTester.h for the primary calling header

#include "verilated.h"

#include "VQueueCloneTester__Syms.h"
#include "VQueueCloneTester___024root.h"

VL_INLINE_OPT void VQueueCloneTester___024root___sequent__TOP__0(VQueueCloneTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0;
    CData/*0:0*/ __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value;
    CData/*0:0*/ __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0;
    CData/*0:0*/ __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value;
    CData/*0:0*/ __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value;
    // Body
    __Vdlyvset__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlSelf->QueueCloneTester__DOT__accept) 
                           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x63U != vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram
                            [vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value])))) {
            VL_WRITEF("[%0t] %%Error: QueueCloneTester.v:224: Assertion failed in %NQueueCloneTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueCloneTester/2022032914570613014095208181844044/QueueCloneTester.v", 224, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlSelf->QueueCloneTester__DOT__accept) 
                           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x63U != vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram
                            [vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at CloneModuleSpec.scala:55 assert(dut.io.deq.bits === x.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->QueueCloneTester__DOT__accept) 
                          & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueCloneTester/2022032914570613014095208181844044/QueueCloneTester.v", 246, "");
        }
    }
    __Vdlyvset__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0 = 0U;
    __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value 
        = vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value;
    __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value 
        = vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value;
    __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value 
        = vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value;
    __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value 
        = vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value;
    if (vlSelf->reset) {
        vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full = 0U;
        vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_enq) 
             != (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_deq))) {
            vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full 
                = vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_enq;
        }
        if (((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_enq) 
             != (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_deq))) {
            vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full 
                = vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full)) 
         & (IData)(vlSelf->QueueCloneTester__DOT__start))) {
        __Vdlyvset__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0 
            = vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value;
    }
    if ((1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full)) 
               & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty))))) {
        __Vdlyvval__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0 
            = vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ram
            [vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value];
        __Vdlyvset__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0 = 1U;
        __Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0 
            = vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value;
    }
    if (vlSelf->reset) {
        __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value = 0U;
        __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value = 0U;
        __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value = 0U;
        __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_deq) {
            __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value)));
        }
        if (vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_enq) {
            __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value)));
        }
        if (vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_deq) {
            __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value)));
        }
        if (vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_enq) {
            __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value 
                = (1U & ((IData)(1U) + (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value)));
        }
    }
    vlSelf->QueueCloneTester__DOT__accept = (1U & (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty))));
    if (__Vdlyvset__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0) {
        vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ram[__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__q1__DOT__ram__v0] = 0x63U;
    }
    if (__Vdlyvset__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0) {
        vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram[__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0] 
            = __Vdlyvval__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram__v0;
    }
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value 
        = __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value;
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value 
        = __Vdly__QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value;
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value 
        = __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value;
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value 
        = __Vdly__QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value;
    vlSelf->QueueCloneTester__DOT__start = ((IData)(vlSelf->reset) 
                                            | (IData)(vlSelf->QueueCloneTester__DOT___start_T));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full)));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match) 
           & (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full)));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match) 
           & (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_deq 
        = ((IData)(vlSelf->QueueCloneTester__DOT__accept) 
           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty)));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_deq 
        = (1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full)) 
                 & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty))));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_enq 
        = (1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full)) 
                 & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty))));
    vlSelf->QueueCloneTester__DOT___start_T = ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full)) 
                                               & (IData)(vlSelf->QueueCloneTester__DOT__start));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full)) 
           & (IData)(vlSelf->QueueCloneTester__DOT__start));
}
