// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInternalBoreTester.h for the primary calling header

#include "verilated.h"

#include "VInternalBoreTester__Syms.h"
#include "VInternalBoreTester___024root.h"

void VInternalBoreTester___024root___ctor_var_reset(VInternalBoreTester___024root* vlSelf);

VInternalBoreTester___024root::VInternalBoreTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VInternalBoreTester___024root___ctor_var_reset(this);
}

void VInternalBoreTester___024root::__Vconfigure(VInternalBoreTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VInternalBoreTester___024root::~VInternalBoreTester___024root() {
}
