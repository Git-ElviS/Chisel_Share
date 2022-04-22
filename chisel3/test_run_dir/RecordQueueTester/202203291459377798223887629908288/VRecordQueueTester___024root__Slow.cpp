// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordQueueTester.h for the primary calling header

#include "verilated.h"

#include "VRecordQueueTester__Syms.h"
#include "VRecordQueueTester___024root.h"

void VRecordQueueTester___024root___ctor_var_reset(VRecordQueueTester___024root* vlSelf);

VRecordQueueTester___024root::VRecordQueueTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRecordQueueTester___024root___ctor_var_reset(this);
}

void VRecordQueueTester___024root::__Vconfigure(VRecordQueueTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRecordQueueTester___024root::~VRecordQueueTester___024root() {
}
