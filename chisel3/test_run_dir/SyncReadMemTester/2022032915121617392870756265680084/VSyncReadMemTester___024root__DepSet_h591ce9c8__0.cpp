// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemTester__Syms.h"
#include "VSyncReadMemTester___024root.h"

VL_INLINE_OPT void VSyncReadMemTester___024root___sequent__TOP__0(VSyncReadMemTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__SyncReadMemTester__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__SyncReadMemTester__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvdim0__SyncReadMemTester__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__SyncReadMemTester__DOT__mem__v1;
    // Body
    __Vdlyvset__SyncReadMemTester__DOT__mem__v0 = 0U;
    __Vdlyvset__SyncReadMemTester__DOT__mem__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
                            & (1U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                           & (2U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != vlSelf->SyncReadMemTester__DOT__mem
                            [vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0])))) {
            VL_WRITEF("[%0t] %%Error: SyncReadMemTester.v:73: Assertion failed in %NSyncReadMemTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemTester/2022032915121617392870756265680084/SyncReadMemTester.v", 73, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
                            & (1U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                           & (2U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != vlSelf->SyncReadMemTester__DOT__mem
                            [vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:30 is(2.U) { assert(rdata === 3.U) }\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
                             & (1U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                            & (2U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                           & (3U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != vlSelf->SyncReadMemTester__DOT__mem
                            [vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0])))) {
            VL_WRITEF("[%0t] %%Error: SyncReadMemTester.v:95: Assertion failed in %NSyncReadMemTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemTester/2022032915121617392870756265680084/SyncReadMemTester.v", 95, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
                             & (1U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                            & (2U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                           & (3U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != vlSelf->SyncReadMemTester__DOT__mem
                            [vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:31 is(3.U) { assert(rdata === 2.U) }\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
                             & (1U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                            & (2U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                           & (3U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                          & (4U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemTester/2022032915121617392870756265680084/SyncReadMemTester.v", 117, "");
        }
    }
    if ((0U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) {
        __Vdlyvset__SyncReadMemTester__DOT__mem__v0 = 1U;
        __Vdlyvdim0__SyncReadMemTester__DOT__mem__v0 
            = (1U & (IData)(vlSelf->SyncReadMemTester__DOT__cnt));
    }
    if (((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt)) 
         & (1U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt)))) {
        __Vdlyvset__SyncReadMemTester__DOT__mem__v1 = 1U;
        __Vdlyvdim0__SyncReadMemTester__DOT__mem__v1 
            = (1U & (IData)(vlSelf->SyncReadMemTester__DOT__cnt));
    }
    if (__Vdlyvset__SyncReadMemTester__DOT__mem__v0) {
        vlSelf->SyncReadMemTester__DOT__mem[__Vdlyvdim0__SyncReadMemTester__DOT__mem__v0] = 3U;
    }
    if (__Vdlyvset__SyncReadMemTester__DOT__mem__v1) {
        vlSelf->SyncReadMemTester__DOT__mem[__Vdlyvdim0__SyncReadMemTester__DOT__mem__v1] = 2U;
    }
    if ((0U != (IData)(vlSelf->SyncReadMemTester__DOT__cnt))) {
        vlSelf->SyncReadMemTester__DOT__mem_rdata_en_pipe_0 = 1U;
        vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0 
            = (1U & ((IData)(vlSelf->SyncReadMemTester__DOT__cnt) 
                     - (IData)(1U)));
    } else {
        vlSelf->SyncReadMemTester__DOT__mem_rdata_en_pipe_0 = 0U;
    }
    vlSelf->SyncReadMemTester__DOT__cnt = ((IData)(vlSelf->reset)
                                            ? 0U : 
                                           ((IData)(vlSelf->SyncReadMemTester__DOT__cnt_wrap_wrap)
                                             ? 0U : (IData)(vlSelf->SyncReadMemTester__DOT___cnt_wrap_value_T_1)));
    vlSelf->SyncReadMemTester__DOT__cnt_wrap_wrap = 
        (4U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt));
    vlSelf->SyncReadMemTester__DOT___cnt_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemTester__DOT__cnt)));
}
