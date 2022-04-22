// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueuePipeTester.h for the primary calling header

#include "verilated.h"

#include "VQueuePipeTester__Syms.h"
#include "VQueuePipeTester___024root.h"

void VQueuePipeTester___024root___ctor_var_reset(VQueuePipeTester___024root* vlSelf);

VQueuePipeTester___024root::VQueuePipeTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VQueuePipeTester___024root___ctor_var_reset(this);
}

void VQueuePipeTester___024root::__Vconfigure(VQueuePipeTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VQueuePipeTester___024root::~VQueuePipeTester___024root() {
}
