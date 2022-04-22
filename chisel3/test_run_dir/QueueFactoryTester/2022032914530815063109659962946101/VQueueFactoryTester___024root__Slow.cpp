// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueFactoryTester.h for the primary calling header

#include "verilated.h"

#include "VQueueFactoryTester__Syms.h"
#include "VQueueFactoryTester___024root.h"

void VQueueFactoryTester___024root___ctor_var_reset(VQueueFactoryTester___024root* vlSelf);

VQueueFactoryTester___024root::VQueueFactoryTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VQueueFactoryTester___024root___ctor_var_reset(this);
}

void VQueueFactoryTester___024root::__Vconfigure(VQueueFactoryTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VQueueFactoryTester___024root::~VQueueFactoryTester___024root() {
}
