// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnalogSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VAnalogSpec_Anon__Syms.h"
#include "VAnalogSpec_Anon___024root.h"

void VAnalogSpec_Anon___024root___ctor_var_reset(VAnalogSpec_Anon___024root* vlSelf);

VAnalogSpec_Anon___024root::VAnalogSpec_Anon___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAnalogSpec_Anon___024root___ctor_var_reset(this);
}

void VAnalogSpec_Anon___024root::__Vconfigure(VAnalogSpec_Anon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAnalogSpec_Anon___024root::~VAnalogSpec_Anon___024root() {
}
