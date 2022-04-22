// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftsTester.h for the primary calling header

#include "verilated.h"

#include "VShiftsTester__Syms.h"
#include "VShiftsTester___024root.h"

void VShiftsTester___024root___ctor_var_reset(VShiftsTester___024root* vlSelf);

VShiftsTester___024root::VShiftsTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VShiftsTester___024root___ctor_var_reset(this);
}

void VShiftsTester___024root::__Vconfigure(VShiftsTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VShiftsTester___024root::~VShiftsTester___024root() {
}
