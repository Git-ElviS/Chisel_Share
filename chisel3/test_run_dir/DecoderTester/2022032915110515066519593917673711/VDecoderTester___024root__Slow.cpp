// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoderTester.h for the primary calling header

#include "verilated.h"

#include "VDecoderTester__Syms.h"
#include "VDecoderTester___024root.h"

void VDecoderTester___024root___ctor_var_reset(VDecoderTester___024root* vlSelf);

VDecoderTester___024root::VDecoderTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VDecoderTester___024root___ctor_var_reset(this);
}

void VDecoderTester___024root::__Vconfigure(VDecoderTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VDecoderTester___024root::~VDecoderTester___024root() {
}
