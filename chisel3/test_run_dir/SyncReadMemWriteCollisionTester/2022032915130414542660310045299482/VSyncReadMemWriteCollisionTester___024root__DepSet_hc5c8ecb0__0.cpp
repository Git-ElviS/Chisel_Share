// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemWriteCollisionTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemWriteCollisionTester__Syms.h"
#include "VSyncReadMemWriteCollisionTester___024root.h"

VL_INLINE_OPT void VSyncReadMemWriteCollisionTester___024root___sequent__TOP__0(VSyncReadMemWriteCollisionTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__SyncReadMemWriteCollisionTester__DOT__m0__v0;
    CData/*1:0*/ __Vdlyvval__SyncReadMemWriteCollisionTester__DOT__m0__v0;
    CData/*0:0*/ __Vdlyvdim0__SyncReadMemWriteCollisionTester__DOT__m1__v0;
    CData/*1:0*/ __Vdlyvval__SyncReadMemWriteCollisionTester__DOT__m1__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != vlSelf->SyncReadMemWriteCollisionTester__DOT__m0
                            [vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0])))) {
            VL_WRITEF("[%0t] %%Error: SyncReadMemWriteCollisionTester.v:80: Assertion failed in %NSyncReadMemWriteCollisionTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemWriteCollisionTester/2022032915130414542660310045299482/SyncReadMemWriteCollisionTester.v", 80, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != vlSelf->SyncReadMemWriteCollisionTester__DOT__m0
                            [vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:51 assert(rd0 === 2.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0))))) {
            VL_WRITEF("[%0t] %%Error: SyncReadMemWriteCollisionTester.v:102: Assertion failed in %NSyncReadMemWriteCollisionTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemWriteCollisionTester/2022032915130414542660310045299482/SyncReadMemWriteCollisionTester.v", 102, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:52 assert(rd1 === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemWriteCollisionTester/2022032915130414542660310045299482/SyncReadMemWriteCollisionTester.v", 124, "");
        }
    }
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_en_pipe_0 = 1U;
    __Vdlyvval__SyncReadMemWriteCollisionTester__DOT__m1__v0 
        = (3U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    __Vdlyvdim0__SyncReadMemWriteCollisionTester__DOT__m1__v0 
        = (1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    __Vdlyvval__SyncReadMemWriteCollisionTester__DOT__m0__v0 
        = (3U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    __Vdlyvdim0__SyncReadMemWriteCollisionTester__DOT__m0__v0 
        = (1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m0[__Vdlyvdim0__SyncReadMemWriteCollisionTester__DOT__m0__v0] 
        = __Vdlyvval__SyncReadMemWriteCollisionTester__DOT__m0__v0;
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0 
        = (1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0 
        = vlSelf->SyncReadMemWriteCollisionTester__DOT__m1
        [(1U & (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt))];
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m1[__Vdlyvdim0__SyncReadMemWriteCollisionTester__DOT__m1__v0] 
        = __Vdlyvval__SyncReadMemWriteCollisionTester__DOT__m1__v0;
    vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt_wrap_wrap)
                                           ? 0U : (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT___cnt_wrap_value_T_1)));
    vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt_wrap_wrap 
        = (4U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    vlSelf->SyncReadMemWriteCollisionTester__DOT___cnt_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)));
}
