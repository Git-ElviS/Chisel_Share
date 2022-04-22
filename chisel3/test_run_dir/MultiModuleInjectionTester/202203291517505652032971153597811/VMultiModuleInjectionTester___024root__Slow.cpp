// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiModuleInjectionTester.h for the primary calling header

#include "verilated.h"

#include "VMultiModuleInjectionTester__Syms.h"
#include "VMultiModuleInjectionTester___024root.h"

void VMultiModuleInjectionTester___024root___ctor_var_reset(VMultiModuleInjectionTester___024root* vlSelf);

VMultiModuleInjectionTester___024root::VMultiModuleInjectionTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMultiModuleInjectionTester___024root___ctor_var_reset(this);
}

void VMultiModuleInjectionTester___024root::__Vconfigure(VMultiModuleInjectionTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMultiModuleInjectionTester___024root::~VMultiModuleInjectionTester___024root() {
}
