// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockDividerTest.h for the primary calling header

#include "verilated.h"

#include "VClockDividerTest__Syms.h"
#include "VClockDividerTest___024root.h"

void VClockDividerTest___024root___ctor_var_reset(VClockDividerTest___024root* vlSelf);

VClockDividerTest___024root::VClockDividerTest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VClockDividerTest___024root___ctor_var_reset(this);
}

void VClockDividerTest___024root::__Vconfigure(VClockDividerTest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VClockDividerTest___024root::~VClockDividerTest___024root() {
}
