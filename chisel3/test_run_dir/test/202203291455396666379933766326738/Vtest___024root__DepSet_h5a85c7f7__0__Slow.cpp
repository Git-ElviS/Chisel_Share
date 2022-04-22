// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "verilated.h"

#include "Vtest__Syms.h"
#include "Vtest___024root.h"

VL_ATTR_COLD void Vtest___024root___initial__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___initial__TOP__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: test.v:4: Assertion failed in %Ntest: My specific, expected error message!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/test/202203291455396666379933766326738/test.v", 4, "");
        }
    }
    VL_WRITEF("test!\n");
    VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/test/202203291455396666379933766326738/test.v", 6, "");
}
