// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSinglePrintfTester.h for the primary calling header

#include "verilated.h"

#include "VSinglePrintfTester__Syms.h"
#include "VSinglePrintfTester___024root.h"

void VSinglePrintfTester___024root___ctor_var_reset(VSinglePrintfTester___024root* vlSelf);

VSinglePrintfTester___024root::VSinglePrintfTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSinglePrintfTester___024root___ctor_var_reset(this);
}

void VSinglePrintfTester___024root::__Vconfigure(VSinglePrintfTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSinglePrintfTester___024root::~VSinglePrintfTester___024root() {
}
