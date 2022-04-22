// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithClockTester.h for the primary calling header

#include "verilated.h"

#include "VBlackBoxWithClockTester__Syms.h"
#include "VBlackBoxWithClockTester___024root.h"

void VBlackBoxWithClockTester___024root___ctor_var_reset(VBlackBoxWithClockTester___024root* vlSelf);

VBlackBoxWithClockTester___024root::VBlackBoxWithClockTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBlackBoxWithClockTester___024root___ctor_var_reset(this);
}

void VBlackBoxWithClockTester___024root::__Vconfigure(VBlackBoxWithClockTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBlackBoxWithClockTester___024root::~VBlackBoxWithClockTester___024root() {
}
