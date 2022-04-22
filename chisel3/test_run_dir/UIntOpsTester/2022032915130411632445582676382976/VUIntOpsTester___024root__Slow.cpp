// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUIntOpsTester.h for the primary calling header

#include "verilated.h"

#include "VUIntOpsTester__Syms.h"
#include "VUIntOpsTester___024root.h"

void VUIntOpsTester___024root___ctor_var_reset(VUIntOpsTester___024root* vlSelf);

VUIntOpsTester___024root::VUIntOpsTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VUIntOpsTester___024root___ctor_var_reset(this);
}

void VUIntOpsTester___024root::__Vconfigure(VUIntOpsTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VUIntOpsTester___024root::~VUIntOpsTester___024root() {
}
