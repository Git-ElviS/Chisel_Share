// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExtModuleTester.h for the primary calling header

#include "verilated.h"

#include "VExtModuleTester__Syms.h"
#include "VExtModuleTester___024root.h"

void VExtModuleTester___024root___ctor_var_reset(VExtModuleTester___024root* vlSelf);

VExtModuleTester___024root::VExtModuleTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VExtModuleTester___024root___ctor_var_reset(this);
}

void VExtModuleTester___024root::__Vconfigure(VExtModuleTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VExtModuleTester___024root::~VExtModuleTester___024root() {
}
