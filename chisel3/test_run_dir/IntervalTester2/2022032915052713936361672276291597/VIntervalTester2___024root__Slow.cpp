// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester2.h for the primary calling header

#include "verilated.h"

#include "VIntervalTester2__Syms.h"
#include "VIntervalTester2___024root.h"

void VIntervalTester2___024root___ctor_var_reset(VIntervalTester2___024root* vlSelf);

VIntervalTester2___024root::VIntervalTester2___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIntervalTester2___024root___ctor_var_reset(this);
}

void VIntervalTester2___024root::__Vconfigure(VIntervalTester2__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIntervalTester2___024root::~VIntervalTester2___024root() {
}
