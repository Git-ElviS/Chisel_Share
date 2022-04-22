// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVecOfBool2UInt.h for the primary calling header

#include "verilated.h"

#include "VVecOfBool2UInt__Syms.h"
#include "VVecOfBool2UInt___024root.h"

void VVecOfBool2UInt___024root___ctor_var_reset(VVecOfBool2UInt___024root* vlSelf);

VVecOfBool2UInt___024root::VVecOfBool2UInt___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VVecOfBool2UInt___024root___ctor_var_reset(this);
}

void VVecOfBool2UInt___024root::__Vconfigure(VVecOfBool2UInt__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VVecOfBool2UInt___024root::~VVecOfBool2UInt___024root() {
}
