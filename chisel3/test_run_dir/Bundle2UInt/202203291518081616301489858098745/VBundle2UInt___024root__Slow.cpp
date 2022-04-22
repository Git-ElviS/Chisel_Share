// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundle2UInt.h for the primary calling header

#include "verilated.h"

#include "VBundle2UInt__Syms.h"
#include "VBundle2UInt___024root.h"

void VBundle2UInt___024root___ctor_var_reset(VBundle2UInt___024root* vlSelf);

VBundle2UInt___024root::VBundle2UInt___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBundle2UInt___024root___ctor_var_reset(this);
}

void VBundle2UInt___024root::__Vconfigure(VBundle2UInt__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBundle2UInt___024root::~VBundle2UInt___024root() {
}
