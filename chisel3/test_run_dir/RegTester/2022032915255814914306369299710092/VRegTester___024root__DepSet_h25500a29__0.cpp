// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegTester.h for the primary calling header

#include "verilated.h"

#include "VRegTester__Syms.h"
#include "VRegTester___024root.h"

VL_INLINE_OPT void VRegTester___024root___sequent__TOP__0(VRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root___sequent__TOP__0\n"); );
    // Init
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
                         & (2U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:146: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 146, "");
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
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:168: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 168, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_3))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_4))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:190: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 190, "");
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
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:212: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 212, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_5))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:234: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 234, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RegTester__DOT__doneReg) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->RegTester__DOT__doneReg) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 256, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_2))))) {
            VL_WRITEF("[%0t] %%Error: RegTester.v:267: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 267, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:289: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 289, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:311: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 311, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:333: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 333, "");
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
            VL_WRITEF("[%0t] %%Error: RegTester.v:355: Assertion failed in %NRegTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegTester/2022032915255814914306369299710092/RegTester.v", 355, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->RegTester__DOT__doneReg)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->RegTester__DOT__dut__DOT__vecReg_6))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n");
        }
    }
    vlSelf->RegTester__DOT__doneReg = __Vdly__RegTester__DOT__doneReg;
    if (vlSelf->reset) {
        vlSelf->RegTester__DOT__dut__DOT__vecReg_2 = 0U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_3 = 0U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_4 = 0U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_5 = 0U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_6 = 0U;
    } else {
        vlSelf->RegTester__DOT__dut__DOT__vecReg_2 = 2U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_3 = 1U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_4 = 1U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_5 = 1U;
        vlSelf->RegTester__DOT__dut__DOT__vecReg_6 = 2U;
    }
}
