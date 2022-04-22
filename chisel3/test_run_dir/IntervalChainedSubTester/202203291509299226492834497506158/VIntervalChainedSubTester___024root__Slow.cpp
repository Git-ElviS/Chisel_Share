// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalChainedSubTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalChainedSubTester__Syms.h"
#include "VIntervalChainedSubTester___024root.h"

void VIntervalChainedSubTester___024root___ctor_var_reset(VIntervalChainedSubTester___024root* vlSelf);

VIntervalChainedSubTester___024root::VIntervalChainedSubTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIntervalChainedSubTester___024root___ctor_var_reset(this);
}

void VIntervalChainedSubTester___024root::__Vconfigure(VIntervalChainedSubTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIntervalChainedSubTester___024root::~VIntervalChainedSubTester___024root() {
}
