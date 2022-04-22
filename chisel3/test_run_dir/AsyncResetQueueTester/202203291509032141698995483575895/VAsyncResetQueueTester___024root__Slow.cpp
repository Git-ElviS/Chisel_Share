// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetQueueTester__Syms.h"
#include "VAsyncResetQueueTester___024root.h"

void VAsyncResetQueueTester___024root___ctor_var_reset(VAsyncResetQueueTester___024root* vlSelf);

VAsyncResetQueueTester___024root::VAsyncResetQueueTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAsyncResetQueueTester___024root___ctor_var_reset(this);
}

void VAsyncResetQueueTester___024root::__Vconfigure(VAsyncResetQueueTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAsyncResetQueueTester___024root::~VAsyncResetQueueTester___024root() {
}
