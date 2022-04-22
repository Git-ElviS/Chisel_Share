// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalTester__Syms.h"
#include "VIntervalTester___024root.h"

void VIntervalTester___024root___ctor_var_reset(VIntervalTester___024root* vlSelf);

VIntervalTester___024root::VIntervalTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIntervalTester___024root___ctor_var_reset(this);
}

void VIntervalTester___024root::__Vconfigure(VIntervalTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIntervalTester___024root::~VIntervalTester___024root() {
}
