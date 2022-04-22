// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedModuleTester.h for the primary calling header

#include "verilated.h"

#include "VParameterizedModuleTester__Syms.h"
#include "VParameterizedModuleTester___024root.h"

void VParameterizedModuleTester___024root___ctor_var_reset(VParameterizedModuleTester___024root* vlSelf);

VParameterizedModuleTester___024root::VParameterizedModuleTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VParameterizedModuleTester___024root___ctor_var_reset(this);
}

void VParameterizedModuleTester___024root::__Vconfigure(VParameterizedModuleTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VParameterizedModuleTester___024root::~VParameterizedModuleTester___024root() {
}
