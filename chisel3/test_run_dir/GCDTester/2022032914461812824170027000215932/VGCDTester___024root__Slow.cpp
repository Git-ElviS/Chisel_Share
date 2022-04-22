// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCDTester.h for the primary calling header

#include "verilated.h"

#include "VGCDTester__Syms.h"
#include "VGCDTester___024root.h"

void VGCDTester___024root___ctor_var_reset(VGCDTester___024root* vlSelf);

VGCDTester___024root::VGCDTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VGCDTester___024root___ctor_var_reset(this);
}

void VGCDTester___024root::__Vconfigure(VGCDTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VGCDTester___024root::~VGCDTester___024root() {
}
