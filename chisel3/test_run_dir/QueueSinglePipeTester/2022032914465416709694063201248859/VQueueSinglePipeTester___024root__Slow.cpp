// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueSinglePipeTester.h for the primary calling header

#include "verilated.h"

#include "VQueueSinglePipeTester__Syms.h"
#include "VQueueSinglePipeTester___024root.h"

void VQueueSinglePipeTester___024root___ctor_var_reset(VQueueSinglePipeTester___024root* vlSelf);

VQueueSinglePipeTester___024root::VQueueSinglePipeTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VQueueSinglePipeTester___024root___ctor_var_reset(this);
}

void VQueueSinglePipeTester___024root::__Vconfigure(VQueueSinglePipeTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VQueueSinglePipeTester___024root::~VQueueSinglePipeTester___024root() {
}
