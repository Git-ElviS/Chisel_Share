// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBasicRotate.h for the primary calling header

#include "verilated.h"

#include "VBasicRotate__Syms.h"
#include "VBasicRotate___024root.h"

void VBasicRotate___024root___ctor_var_reset(VBasicRotate___024root* vlSelf);

VBasicRotate___024root::VBasicRotate___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBasicRotate___024root___ctor_var_reset(this);
}

void VBasicRotate___024root::__Vconfigure(VBasicRotate__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBasicRotate___024root::~VBasicRotate___024root() {
}
