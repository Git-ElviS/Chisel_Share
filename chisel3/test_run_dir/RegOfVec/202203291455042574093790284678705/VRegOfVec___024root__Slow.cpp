// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegOfVec.h for the primary calling header

#include "verilated.h"

#include "VRegOfVec__Syms.h"
#include "VRegOfVec___024root.h"

void VRegOfVec___024root___ctor_var_reset(VRegOfVec___024root* vlSelf);

VRegOfVec___024root::VRegOfVec___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRegOfVec___024root___ctor_var_reset(this);
}

void VRegOfVec___024root::__Vconfigure(VRegOfVec__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRegOfVec___024root::~VRegOfVec___024root() {
}
