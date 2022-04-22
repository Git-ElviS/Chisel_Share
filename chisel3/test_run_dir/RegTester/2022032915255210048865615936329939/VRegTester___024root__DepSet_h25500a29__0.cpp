// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegTester.h for the primary calling header

#include "verilated.h"

#include "VRegTester__Syms.h"
#include "VRegTester___024root.h"

extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2df4d1a2_0;
extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2cd1fcaa_0;
extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2d3f995d_0;
extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2dace977_0;
extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2ddbe927_0;
extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2df0290b_0;
extern const VlUnpacked<CData/*3:0*/, 2> VRegTester__ConstPool__TABLE_h2dec1828_0;

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
            VL_WRITEF("[%0t] %%Error: RegTester.v:172: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 172, "");
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
                         & (9U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:194: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 194, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (9U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:216: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 216, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xfU != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:238: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 238, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xfU != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:260: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 260, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:282: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 282, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdU != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:304: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 304, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xdU != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->RegTester__DOT__doneReg) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 326, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_0))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:337: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 337, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:359: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 359, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:381: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 381, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:403: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 403, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:425: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 425, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:447: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 447, "");
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
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_7))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:469: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255210048865615936329939/RegTester.v", 469, "");
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
    vlSelf->RegTester__DOT__dut__DOT__vecReg_0 = VRegTester__ConstPool__TABLE_h2df4d1a2_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_1 = VRegTester__ConstPool__TABLE_h2cd1fcaa_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_2 = VRegTester__ConstPool__TABLE_h2d3f995d_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_3 = VRegTester__ConstPool__TABLE_h2dace977_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_4 = VRegTester__ConstPool__TABLE_h2ddbe927_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_5 = VRegTester__ConstPool__TABLE_h2df0290b_0
        [__Vtableidx1];
    vlSelf->RegTester__DOT__dut__DOT__vecReg_7 = VRegTester__ConstPool__TABLE_h2dec1828_0
        [__Vtableidx1];
}
