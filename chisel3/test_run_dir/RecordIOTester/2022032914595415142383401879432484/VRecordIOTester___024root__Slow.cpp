// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordIOTester.h for the primary calling header

#include "verilated.h"

#include "VRecordIOTester__Syms.h"
#include "VRecordIOTester___024root.h"

void VRecordIOTester___024root___ctor_var_reset(VRecordIOTester___024root* vlSelf);

VRecordIOTester___024root::VRecordIOTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRecordIOTester___024root___ctor_var_reset(this);
}

void VRecordIOTester___024root::__Vconfigure(VRecordIOTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRecordIOTester___024root::~VRecordIOTester___024root() {
}
