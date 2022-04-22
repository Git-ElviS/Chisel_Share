// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStrongEnumFSMTester.h for the primary calling header

#include "verilated.h"

#include "VStrongEnumFSMTester__Syms.h"
#include "VStrongEnumFSMTester___024root.h"

extern const VlUnpacked<CData/*0:0*/, 64> VStrongEnumFSMTester__ConstPool__TABLE_hd2d802f3_0;
extern const VlUnpacked<CData/*1:0*/, 64> VStrongEnumFSMTester__ConstPool__TABLE_h06ba3c5b_0;

VL_INLINE_OPT void VStrongEnumFSMTester___024root___sequent__TOP__0(VStrongEnumFSMTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((2U == (IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state)) 
                            != ((9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                | ((8U != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                   & ((7U != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                      & ((6U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                         | (5U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)))))))))) {
            VL_WRITEF("[%0t] %%Error: StrongEnumFSMTester.v:130: Assertion failed in %NStrongEnumFSMTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/StrongEnumFSMTester/202203291446074109047233663486381/StrongEnumFSMTester.v", 130, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((2U == (IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state)) 
                            != ((9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                | ((8U != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                   & ((7U != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                      & ((6U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                         | (5U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at StrongEnum.scala:300 assert(dut.io.out === expected(cycle))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state) 
                            != ((9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                 ? 2U : ((8U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                          ? 1U : ((7U 
                                                   == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                   ? 0U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                        ? 1U
                                                        : 0U)))))))))))) {
            VL_WRITEF("[%0t] %%Error: StrongEnumFSMTester.v:153: Assertion failed in %NStrongEnumFSMTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/StrongEnumFSMTester/202203291446074109047233663486381/StrongEnumFSMTester.v", 153, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state) 
                            != ((9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                 ? 2U : ((8U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                          ? 1U : ((7U 
                                                   == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                   ? 0U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))
                                                        ? 1U
                                                        : 0U)))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at StrongEnum.scala:301 assert(dut.io.state === expected_state(cycle))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/StrongEnumFSMTester/202203291446074109047233663486381/StrongEnumFSMTester.v", 176, "");
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT___GEN_2) 
                     << 4U) | (((IData)(vlSelf->StrongEnumFSMTester__DOT__dut_io_in) 
                                << 3U) | (((IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state) 
                                           << 1U) | (IData)(vlSelf->reset))));
    if (VStrongEnumFSMTester__ConstPool__TABLE_hd2d802f3_0
        [__Vtableidx1]) {
        vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state 
            = VStrongEnumFSMTester__ConstPool__TABLE_h06ba3c5b_0
            [__Vtableidx1];
    }
    vlSelf->StrongEnumFSMTester__DOT__value = ((IData)(vlSelf->reset)
                                                ? 0U
                                                : ((IData)(vlSelf->StrongEnumFSMTester__DOT__wrap)
                                                    ? 0U
                                                    : (IData)(vlSelf->StrongEnumFSMTester__DOT___value_T_1)));
    vlSelf->StrongEnumFSMTester__DOT__wrap = (9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value));
    vlSelf->StrongEnumFSMTester__DOT___value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->StrongEnumFSMTester__DOT__value)));
    vlSelf->StrongEnumFSMTester__DOT__dut_io_in = (
                                                   (9U 
                                                    != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                   & ((8U 
                                                       == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                         | ((6U 
                                                             != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                            & ((5U 
                                                                == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                               | ((4U 
                                                                   == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                                  | ((3U 
                                                                      == (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                                     | ((2U 
                                                                         != (IData)(vlSelf->StrongEnumFSMTester__DOT__value)) 
                                                                        & (1U 
                                                                           == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))))))))));
    vlSelf->StrongEnumFSMTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlSelf->StrongEnumFSMTester__DOT__dut_io_in)
            ? (IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state)
            : 0U);
}
