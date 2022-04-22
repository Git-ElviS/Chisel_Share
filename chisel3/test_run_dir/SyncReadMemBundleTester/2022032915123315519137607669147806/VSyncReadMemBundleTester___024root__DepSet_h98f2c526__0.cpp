// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemBundleTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemBundleTester__Syms.h"
#include "VSyncReadMemBundleTester___024root.h"

VL_INLINE_OPT void VSyncReadMemBundleTester___024root___sequent__TOP__0(VSyncReadMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__SyncReadMemBundleTester__DOT__mem_foo__v0;
    CData/*0:0*/ __Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v0;
    CData/*0:0*/ __Vdlyvdim0__SyncReadMemBundleTester__DOT__mem_foo__v1;
    CData/*0:0*/ __Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v1;
    // Body
    __Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v0 = 0U;
    __Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
                            & (1U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                           & (2U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != vlSelf->SyncReadMemBundleTester__DOT__mem_foo
                            [vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0])))) {
            VL_WRITEF("[%0t] %%Error: SyncReadMemBundleTester.v:73: Assertion failed in %NSyncReadMemBundleTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemBundleTester/2022032915123315519137607669147806/SyncReadMemBundleTester.v", 73, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
                            & (1U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                           & (2U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != vlSelf->SyncReadMemBundleTester__DOT__mem_foo
                            [vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:118 is(2.U) { assert(rdata.foo === 3.U) }\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
                             & (1U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                            & (2U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                           & (3U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != vlSelf->SyncReadMemBundleTester__DOT__mem_foo
                            [vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0])))) {
            VL_WRITEF("[%0t] %%Error: SyncReadMemBundleTester.v:95: Assertion failed in %NSyncReadMemBundleTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemBundleTester/2022032915123315519137607669147806/SyncReadMemBundleTester.v", 95, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
                             & (1U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                            & (2U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                           & (3U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != vlSelf->SyncReadMemBundleTester__DOT__mem_foo
                            [vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:119 is(3.U) { assert(rdata.foo === 2.U) }\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
                             & (1U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                            & (2U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                           & (3U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                          & (4U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemBundleTester/2022032915123315519137607669147806/SyncReadMemBundleTester.v", 117, "");
        }
    }
    if ((0U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) {
        __Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v0 = 1U;
        __Vdlyvdim0__SyncReadMemBundleTester__DOT__mem_foo__v0 
            = (1U & (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt));
    }
    if (((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)) 
         & (1U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)))) {
        __Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v1 = 1U;
        __Vdlyvdim0__SyncReadMemBundleTester__DOT__mem_foo__v1 
            = (1U & (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt));
    }
    if (__Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v0) {
        vlSelf->SyncReadMemBundleTester__DOT__mem_foo[__Vdlyvdim0__SyncReadMemBundleTester__DOT__mem_foo__v0] = 3U;
    }
    if (__Vdlyvset__SyncReadMemBundleTester__DOT__mem_foo__v1) {
        vlSelf->SyncReadMemBundleTester__DOT__mem_foo[__Vdlyvdim0__SyncReadMemBundleTester__DOT__mem_foo__v1] = 2U;
    }
    if ((0U != (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt))) {
        vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_en_pipe_0 = 1U;
        vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0 
            = (1U & ((IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt) 
                     - (IData)(1U)));
    } else {
        vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_en_pipe_0 = 0U;
    }
    vlSelf->SyncReadMemBundleTester__DOT__cnt = ((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt_wrap_wrap)
                                                   ? 0U
                                                   : (IData)(vlSelf->SyncReadMemBundleTester__DOT___cnt_wrap_value_T_1)));
    vlSelf->SyncReadMemBundleTester__DOT__cnt_wrap_wrap 
        = (4U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt));
    vlSelf->SyncReadMemBundleTester__DOT___cnt_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)));
}
