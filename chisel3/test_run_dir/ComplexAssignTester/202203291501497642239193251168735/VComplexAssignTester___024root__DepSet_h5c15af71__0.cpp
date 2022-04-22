// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexAssignTester.h for the primary calling header

#include "verilated.h"

#include "VComplexAssignTester__Syms.h"
#include "VComplexAssignTester___024root.h"

VL_INLINE_OPT void VComplexAssignTester___024root___sequent__TOP__0(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                        ? 0x7d1e546U
                                        : 0U) == ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                                   ? 0x7d1e546U
                                                   : 0U)) 
                                     & (((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                          ? 0x22aff43bU
                                          : 0U) == 
                                        ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                          ? 0x22aff43bU
                                          : 0U)))))))) {
            VL_WRITEF("[%0t] %%Error: ComplexAssignTester.v:51: Assertion failed in %NComplexAssignTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ComplexAssignTester/202203291501497642239193251168735/ComplexAssignTester.v", 51, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                        ? 0x7d1e546U
                                        : 0U) == ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                                   ? 0x7d1e546U
                                                   : 0U)) 
                                     & (((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                          ? 0x22aff43bU
                                          : 0U) == 
                                        ((IData)(vlSelf->ComplexAssignTester__DOT__cnt)
                                          ? 0x22aff43bU
                                          : 0U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ComplexAssign.scala:37 assert(re_correct && im_correct)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ComplexAssignTester__DOT__cnt) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ComplexAssignTester/202203291501497642239193251168735/ComplexAssignTester.v", 73, "");
        }
    }
    vlSelf->ComplexAssignTester__DOT__cnt = ((~ (IData)(vlSelf->reset)) 
                                             & (IData)(vlSelf->ComplexAssignTester__DOT___wrap_value_T_1));
    vlSelf->ComplexAssignTester__DOT___wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->ComplexAssignTester__DOT__cnt)));
}
