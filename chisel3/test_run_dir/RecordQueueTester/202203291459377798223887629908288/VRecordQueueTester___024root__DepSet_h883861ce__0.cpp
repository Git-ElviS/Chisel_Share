// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordQueueTester.h for the primary calling header

#include "verilated.h"

#include "VRecordQueueTester__Syms.h"
#include "VRecordQueueTester___024root.h"

VL_INLINE_OPT void VRecordQueueTester___024root___sequent__TOP__0(VRecordQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_foo__v0;
    CData/*0:0*/ __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0;
    CData/*1:0*/ __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_bar__v0;
    CData/*0:0*/ __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0;
    // Body
    __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0 = 0U;
    __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__empty)))) {
            VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:186: Assertion failed in %NRecordQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RecordQueueTester/202203291459377798223887629908288/RecordQueueTester.v", 186, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__empty)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:71 assert(queue.io.deq.valid === true.B)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x4d2U != vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo
                            [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value])))) {
            VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:208: Assertion failed in %NRecordQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RecordQueueTester/202203291459377798223887629908288/RecordQueueTester.v", 208, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x4d2U != vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo
                            [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:72 assert(queue.io.deq.bits(\"foo\").asUInt === 1234.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x162eU != vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar
                            [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value])))) {
            VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:231: Assertion failed in %NRecordQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RecordQueueTester/202203291459377798223887629908288/RecordQueueTester.v", 231, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x162eU != vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar
                            [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:73 assert(queue.io.deq.bits(\"bar\").asUInt === 5678.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RecordQueueTester/202203291459377798223887629908288/RecordQueueTester.v", 254, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq) 
                != (1U & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__empty))))) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full 
            = vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq;
    }
    if (((~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)) 
         & (0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)))) {
        __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0 = 1U;
        __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_bar__v0 
            = vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value;
        __Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0 = 1U;
        __Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_foo__v0 
            = vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value;
    }
    if (__Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_bar__v0) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_bar__v0] = 0x162eU;
    }
    if (__Vdlyvset__RecordQueueTester__DOT__queue__DOT__ram_foo__v0) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT__ram_foo__v0] = 0x4d2U;
    }
    if (vlSelf->reset) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value = 0U;
        vlSelf->RecordQueueTester__DOT__cycle = 0U;
        vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__empty)))) {
            vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value 
                = vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_3;
        }
        vlSelf->RecordQueueTester__DOT__cycle = vlSelf->RecordQueueTester__DOT___wrap_value_T_1;
        if (vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq) {
            vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value 
                = vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_1;
        }
    }
    vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value)));
    vlSelf->RecordQueueTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->RecordQueueTester__DOT__cycle)));
    vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match 
        = ((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value) 
           == (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value));
    vlSelf->RecordQueueTester__DOT__queue__DOT__empty 
        = ((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full)));
    vlSelf->RecordQueueTester__DOT__queue__DOT__full 
        = ((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full));
    vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq 
        = ((~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)) 
           & (0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)));
}
