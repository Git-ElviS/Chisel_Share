// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxTester.h for the primary calling header

#include "verilated.h"

#include "VBlackBoxTester__Syms.h"
#include "VBlackBoxTester___024root.h"

void VBlackBoxTester___024root___ctor_var_reset(VBlackBoxTester___024root* vlSelf);

VBlackBoxTester___024root::VBlackBoxTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBlackBoxTester___024root___ctor_var_reset(this);
}

void VBlackBoxTester___024root::__Vconfigure(VBlackBoxTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBlackBoxTester___024root::~VBlackBoxTester___024root() {
}
