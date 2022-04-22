// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemTester__Syms.h"
#include "VSyncReadMemTester___024root.h"

void VSyncReadMemTester___024root___ctor_var_reset(VSyncReadMemTester___024root* vlSelf);

VSyncReadMemTester___024root::VSyncReadMemTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSyncReadMemTester___024root___ctor_var_reset(this);
}

void VSyncReadMemTester___024root::__Vconfigure(VSyncReadMemTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSyncReadMemTester___024root::~VSyncReadMemTester___024root() {
}
