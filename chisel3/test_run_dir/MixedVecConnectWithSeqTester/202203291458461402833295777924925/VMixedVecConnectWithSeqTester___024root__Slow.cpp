// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecConnectWithSeqTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecConnectWithSeqTester__Syms.h"
#include "VMixedVecConnectWithSeqTester___024root.h"

void VMixedVecConnectWithSeqTester___024root___ctor_var_reset(VMixedVecConnectWithSeqTester___024root* vlSelf);

VMixedVecConnectWithSeqTester___024root::VMixedVecConnectWithSeqTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMixedVecConnectWithSeqTester___024root___ctor_var_reset(this);
}

void VMixedVecConnectWithSeqTester___024root::__Vconfigure(VMixedVecConnectWithSeqTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMixedVecConnectWithSeqTester___024root::~VMixedVecConnectWithSeqTester___024root() {
}
