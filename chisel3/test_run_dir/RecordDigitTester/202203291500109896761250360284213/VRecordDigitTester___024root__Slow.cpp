// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordDigitTester.h for the primary calling header

#include "verilated.h"

#include "VRecordDigitTester__Syms.h"
#include "VRecordDigitTester___024root.h"

void VRecordDigitTester___024root___ctor_var_reset(VRecordDigitTester___024root* vlSelf);

VRecordDigitTester___024root::VRecordDigitTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRecordDigitTester___024root___ctor_var_reset(this);
}

void VRecordDigitTester___024root::__Vconfigure(VRecordDigitTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRecordDigitTester___024root::~VRecordDigitTester___024root() {
}
