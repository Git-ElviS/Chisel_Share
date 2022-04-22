// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChiselRunners_Anon.h for the primary calling header

#include "verilated.h"

#include "VChiselRunners_Anon__Syms.h"
#include "VChiselRunners_Anon___024root.h"

void VChiselRunners_Anon___024root___ctor_var_reset(VChiselRunners_Anon___024root* vlSelf);

VChiselRunners_Anon___024root::VChiselRunners_Anon___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VChiselRunners_Anon___024root___ctor_var_reset(this);
}

void VChiselRunners_Anon___024root::__Vconfigure(VChiselRunners_Anon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VChiselRunners_Anon___024root::~VChiselRunners_Anon___024root() {
}
