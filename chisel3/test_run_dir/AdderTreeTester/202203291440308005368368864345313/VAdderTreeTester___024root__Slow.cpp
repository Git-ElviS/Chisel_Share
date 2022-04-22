// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdderTreeTester.h for the primary calling header

#include "verilated.h"

#include "VAdderTreeTester__Syms.h"
#include "VAdderTreeTester___024root.h"

void VAdderTreeTester___024root___ctor_var_reset(VAdderTreeTester___024root* vlSelf);

VAdderTreeTester___024root::VAdderTreeTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAdderTreeTester___024root___ctor_var_reset(this);
}

void VAdderTreeTester___024root::__Vconfigure(VAdderTreeTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAdderTreeTester___024root::~VAdderTreeTester___024root() {
}
