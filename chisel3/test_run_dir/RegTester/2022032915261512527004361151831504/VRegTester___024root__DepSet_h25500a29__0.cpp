// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegTester.h for the primary calling header

#include "verilated.h"

#include "VRegTester__Syms.h"
#include "VRegTester___024root.h"

extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2dabf20b_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2daf4192_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2d3e29ae_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2da5e020_0;
extern const VlUnpacked<CData/*2:0*/, 2> VRegTester__ConstPool__TABLE_h2daba96f_0;

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
                         & (7U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:185: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 185, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:207: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 207, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:229: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 229, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:251: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 251, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (7U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:273: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 273, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:295: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 295, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:317: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 317, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:339: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 339, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->RegTester__DOT__doneReg) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 361, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:372: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 372, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:394: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 394, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:416: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 416, "");
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
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:438: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 438, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:460: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 460, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:482: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 482, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:504: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 504, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:526: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915261512527004361151831504/RegTester.v", 526, "");
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
    vlSelf->RegTester__DOT__dut__DOT__vecReg_0 = VRegTester__ConstPool__TABLE_h2dabf20b_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_1 = VRegTester__ConstPool__TABLE_h2daf4192_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_2 = VRegTester__ConstPool__TABLE_h2d3e29ae_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_3 = VRegTester__ConstPool__TABLE_h2dabf20b_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_4 = VRegTester__ConstPool__TABLE_h2d3e29ae_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_5 = VRegTester__ConstPool__TABLE_h2da5e020_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_6 = VRegTester__ConstPool__TABLE_h2da5e020_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_7 = VRegTester__ConstPool__TABLE_h2daba96f_0
        [__Vtableidx1];
}
