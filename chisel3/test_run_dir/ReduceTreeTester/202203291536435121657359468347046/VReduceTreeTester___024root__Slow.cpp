// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReduceTreeTester.h for the primary calling header

#include "verilated.h"

#include "VReduceTreeTester__Syms.h"
#include "VReduceTreeTester___024root.h"

void VReduceTreeTester___024root___ctor_var_reset(VReduceTreeTester___024root* vlSelf);

VReduceTreeTester___024root::VReduceTreeTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VReduceTreeTester___024root___ctor_var_reset(this);
}

void VReduceTreeTester___024root::__Vconfigure(VReduceTreeTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VReduceTreeTester___024root::~VReduceTreeTester___024root() {
}
