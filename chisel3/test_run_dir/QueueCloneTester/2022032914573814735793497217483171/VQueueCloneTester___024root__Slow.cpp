// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueCloneTester.h for the primary calling header

#include "verilated.h"

#include "VQueueCloneTester__Syms.h"
#include "VQueueCloneTester___024root.h"

void VQueueCloneTester___024root___ctor_var_reset(VQueueCloneTester___024root* vlSelf);

VQueueCloneTester___024root::VQueueCloneTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VQueueCloneTester___024root___ctor_var_reset(this);
}

void VQueueCloneTester___024root::__Vconfigure(VQueueCloneTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VQueueCloneTester___024root::~VQueueCloneTester___024root() {
}
