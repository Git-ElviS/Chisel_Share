// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithParamsTester.h for the primary calling header

#include "verilated.h"

#include "VBlackBoxWithParamsTester__Syms.h"
#include "VBlackBoxWithParamsTester___024root.h"

void VBlackBoxWithParamsTester___024root___ctor_var_reset(VBlackBoxWithParamsTester___024root* vlSelf);

VBlackBoxWithParamsTester___024root::VBlackBoxWithParamsTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBlackBoxWithParamsTester___024root___ctor_var_reset(this);
}

void VBlackBoxWithParamsTester___024root::__Vconfigure(VBlackBoxWithParamsTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBlackBoxWithParamsTester___024root::~VBlackBoxWithParamsTester___024root() {
}
