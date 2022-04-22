// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRawModuleTester.h for the primary calling header

#include "verilated.h"

#include "VRawModuleTester__Syms.h"
#include "VRawModuleTester___024root.h"

void VRawModuleTester___024root___ctor_var_reset(VRawModuleTester___024root* vlSelf);

VRawModuleTester___024root::VRawModuleTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRawModuleTester___024root___ctor_var_reset(this);
}

void VRawModuleTester___024root::__Vconfigure(VRawModuleTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRawModuleTester___024root::~VRawModuleTester___024root() {
}
