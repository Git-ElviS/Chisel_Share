// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDetectTwoOnesTester.h for the primary calling header

#include "verilated.h"

#include "VDetectTwoOnesTester__Syms.h"
#include "VDetectTwoOnesTester___024root.h"

void VDetectTwoOnesTester___024root___ctor_var_reset(VDetectTwoOnesTester___024root* vlSelf);

VDetectTwoOnesTester___024root::VDetectTwoOnesTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VDetectTwoOnesTester___024root___ctor_var_reset(this);
}

void VDetectTwoOnesTester___024root::__Vconfigure(VDetectTwoOnesTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VDetectTwoOnesTester___024root::~VDetectTwoOnesTester___024root() {
}
