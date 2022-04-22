// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueFlowTester.h for the primary calling header

#include "verilated.h"

#include "VQueueFlowTester__Syms.h"
#include "VQueueFlowTester___024root.h"

void VQueueFlowTester___024root___ctor_var_reset(VQueueFlowTester___024root* vlSelf);

VQueueFlowTester___024root::VQueueFlowTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VQueueFlowTester___024root___ctor_var_reset(this);
}

void VQueueFlowTester___024root::__Vconfigure(VQueueFlowTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VQueueFlowTester___024root::~VQueueFlowTester___024root() {
}
