// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGStepTest.h for the primary calling header

#include "verilated.h"

#include "VPRNGStepTest__Syms.h"
#include "VPRNGStepTest___024root.h"

void VPRNGStepTest___024root___ctor_var_reset(VPRNGStepTest___024root* vlSelf);

VPRNGStepTest___024root::VPRNGStepTest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPRNGStepTest___024root___ctor_var_reset(this);
}

void VPRNGStepTest___024root::__Vconfigure(VPRNGStepTest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPRNGStepTest___024root::~VPRNGStepTest___024root() {
}
