// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiExtModuleTester.h for the primary calling header

#include "verilated.h"

#include "VMultiExtModuleTester__Syms.h"
#include "VMultiExtModuleTester___024root.h"

void VMultiExtModuleTester___024root___ctor_var_reset(VMultiExtModuleTester___024root* vlSelf);

VMultiExtModuleTester___024root::VMultiExtModuleTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMultiExtModuleTester___024root___ctor_var_reset(this);
}

void VMultiExtModuleTester___024root::__Vconfigure(VMultiExtModuleTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMultiExtModuleTester___024root::~VMultiExtModuleTester___024root() {
}
