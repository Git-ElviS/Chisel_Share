// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAspectTester.h for the primary calling header

#include "verilated.h"

#include "VAspectTester__Syms.h"
#include "VAspectTester___024root.h"

void VAspectTester___024root___ctor_var_reset(VAspectTester___024root* vlSelf);

VAspectTester___024root::VAspectTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAspectTester___024root___ctor_var_reset(this);
}

void VAspectTester___024root::__Vconfigure(VAspectTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAspectTester___024root::~VAspectTester___024root() {
}
