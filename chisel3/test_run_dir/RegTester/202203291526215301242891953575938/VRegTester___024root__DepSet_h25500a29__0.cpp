// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegTester.h for the primary calling header

#include "verilated.h"

#include "VRegTester__Syms.h"
#include "VRegTester___024root.h"

extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2d3e29ae_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2da5e020_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2d960e9d_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2daf4192_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2dabf20b_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2d9b9b8a_0;

VL_INLINE_OPT void VRegTester___024root___sequent__TOP__0(VRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__RegTester__DOT__doneReg;
    // Body
    __Vdly__RegTester__DOT__doneReg = vlSelf->RegTester__DOT__doneReg;
    if (vlSelf->reset) {
        __Vdly__RegTester__DOT__doneReg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->RegTester__DOT__doneReg)))) {
        __Vdly__RegTester__DOT__doneReg = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:159: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 159, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:181: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 181, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:203: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 203, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:225: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 225, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:247: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 247, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:269: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 269, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->RegTester__DOT__doneReg) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 291, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:302: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 302, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:324: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 324, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:346: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 346, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:368: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 368, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:390: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 390, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:412: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/202203291526215301242891953575938/RegTester.v", 412, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    vlSelf->RegTester__DOT__doneReg = __Vdly__RegTester__DOT__doneReg;
    __Vtableidx1 = vlSelf->reset;
    vlSelf->RegTester__DOT__dut__DOT__vecReg_0 = VRegTester__ConstPool__TABLE_h2d3e29ae_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_1 = VRegTester__ConstPool__TABLE_h2da5e020_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_2 = VRegTester__ConstPool__TABLE_h2d960e9d_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_5 = VRegTester__ConstPool__TABLE_h2daf4192_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_6 = VRegTester__ConstPool__TABLE_h2dabf20b_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_7 = VRegTester__ConstPool__TABLE_h2d9b9b8a_0
        [__Vtableidx1];
}
