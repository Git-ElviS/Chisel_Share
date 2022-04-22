// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiBlackBoxTester.h for the primary calling header

#include "verilated.h"

#include "VMultiBlackBoxTester__Syms.h"
#include "VMultiBlackBoxTester___024root.h"

void VMultiBlackBoxTester___024root___ctor_var_reset(VMultiBlackBoxTester___024root* vlSelf);

VMultiBlackBoxTester___024root::VMultiBlackBoxTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMultiBlackBoxTester___024root___ctor_var_reset(this);
}

void VMultiBlackBoxTester___024root::__Vconfigure(VMultiBlackBoxTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMultiBlackBoxTester___024root::~VMultiBlackBoxTester___024root() {
}
