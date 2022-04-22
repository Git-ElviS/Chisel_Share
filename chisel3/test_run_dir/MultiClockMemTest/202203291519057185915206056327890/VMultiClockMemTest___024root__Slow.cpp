// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockMemTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockMemTest__Syms.h"
#include "VMultiClockMemTest___024root.h"

void VMultiClockMemTest___024root___ctor_var_reset(VMultiClockMemTest___024root* vlSelf);

VMultiClockMemTest___024root::VMultiClockMemTest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMultiClockMemTest___024root___ctor_var_reset(this);
}

void VMultiClockMemTest___024root::__Vconfigure(VMultiClockMemTest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMultiClockMemTest___024root::~VMultiClockMemTest___024root() {
}
