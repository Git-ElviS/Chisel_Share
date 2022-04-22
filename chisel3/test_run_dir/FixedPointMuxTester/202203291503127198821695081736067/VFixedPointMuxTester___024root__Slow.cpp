// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFixedPointMuxTester.h for the primary calling header

#include "verilated.h"

#include "VFixedPointMuxTester__Syms.h"
#include "VFixedPointMuxTester___024root.h"

void VFixedPointMuxTester___024root___ctor_var_reset(VFixedPointMuxTester___024root* vlSelf);

VFixedPointMuxTester___024root::VFixedPointMuxTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFixedPointMuxTester___024root___ctor_var_reset(this);
}

void VFixedPointMuxTester___024root::__Vconfigure(VFixedPointMuxTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFixedPointMuxTester___024root::~VFixedPointMuxTester___024root() {
}
