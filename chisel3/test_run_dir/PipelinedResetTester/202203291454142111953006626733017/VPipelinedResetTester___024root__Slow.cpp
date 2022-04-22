// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedResetTester.h for the primary calling header

#include "verilated.h"

#include "VPipelinedResetTester__Syms.h"
#include "VPipelinedResetTester___024root.h"

void VPipelinedResetTester___024root___ctor_var_reset(VPipelinedResetTester___024root* vlSelf);

VPipelinedResetTester___024root::VPipelinedResetTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPipelinedResetTester___024root___ctor_var_reset(this);
}

void VPipelinedResetTester___024root::__Vconfigure(VPipelinedResetTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPipelinedResetTester___024root::~VPipelinedResetTester___024root() {
}
