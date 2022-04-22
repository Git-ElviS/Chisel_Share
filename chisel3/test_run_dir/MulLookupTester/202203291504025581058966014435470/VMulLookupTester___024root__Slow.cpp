// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMulLookupTester.h for the primary calling header

#include "verilated.h"

#include "VMulLookupTester__Syms.h"
#include "VMulLookupTester___024root.h"

void VMulLookupTester___024root___ctor_var_reset(VMulLookupTester___024root* vlSelf);

VMulLookupTester___024root::VMulLookupTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMulLookupTester___024root___ctor_var_reset(this);
}

void VMulLookupTester___024root::__Vconfigure(VMulLookupTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMulLookupTester___024root::~VMulLookupTester___024root() {
}
