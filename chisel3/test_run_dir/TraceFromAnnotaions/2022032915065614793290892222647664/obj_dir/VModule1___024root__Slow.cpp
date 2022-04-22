// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModule1.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VModule1__Syms.h"
#include "VModule1___024root.h"

void VModule1___024root___ctor_var_reset(VModule1___024root* vlSelf);

VModule1___024root::VModule1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VModule1___024root___ctor_var_reset(this);
}

void VModule1___024root::__Vconfigure(VModule1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VModule1___024root::~VModule1___024root() {
}
