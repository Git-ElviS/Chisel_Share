// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiPrintfTester.h for the primary calling header

#include "verilated.h"

#include "VMultiPrintfTester__Syms.h"
#include "VMultiPrintfTester___024root.h"

void VMultiPrintfTester___024root___ctor_var_reset(VMultiPrintfTester___024root* vlSelf);

VMultiPrintfTester___024root::VMultiPrintfTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMultiPrintfTester___024root___ctor_var_reset(this);
}

void VMultiPrintfTester___024root::__Vconfigure(VMultiPrintfTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMultiPrintfTester___024root::~VMultiPrintfTester___024root() {
}
