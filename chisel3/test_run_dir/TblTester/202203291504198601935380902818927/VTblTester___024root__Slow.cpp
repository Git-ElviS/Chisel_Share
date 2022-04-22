// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTblTester.h for the primary calling header

#include "verilated.h"

#include "VTblTester__Syms.h"
#include "VTblTester___024root.h"

void VTblTester___024root___ctor_var_reset(VTblTester___024root* vlSelf);

VTblTester___024root::VTblTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTblTester___024root___ctor_var_reset(this);
}

void VTblTester___024root::__Vconfigure(VTblTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTblTester___024root::~VTblTester___024root() {
}
