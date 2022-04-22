// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUInt2Bundle.h for the primary calling header

#include "verilated.h"

#include "VUInt2Bundle__Syms.h"
#include "VUInt2Bundle___024root.h"

void VUInt2Bundle___024root___ctor_var_reset(VUInt2Bundle___024root* vlSelf);

VUInt2Bundle___024root::VUInt2Bundle___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VUInt2Bundle___024root___ctor_var_reset(this);
}

void VUInt2Bundle___024root::__Vconfigure(VUInt2Bundle__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VUInt2Bundle___024root::~VUInt2Bundle___024root() {
}
