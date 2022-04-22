// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFoo.h for the primary calling header

#include "verilated.h"

#include "VFoo__Syms.h"
#include "VFoo___024root.h"

void VFoo___024root___ctor_var_reset(VFoo___024root* vlSelf);

VFoo___024root::VFoo___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFoo___024root___ctor_var_reset(this);
}

void VFoo___024root::__Vconfigure(VFoo__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFoo___024root::~VFoo___024root() {
}
