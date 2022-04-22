// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordSerializationTest.h for the primary calling header

#include "verilated.h"

#include "VRecordSerializationTest__Syms.h"
#include "VRecordSerializationTest___024root.h"

void VRecordSerializationTest___024root___ctor_var_reset(VRecordSerializationTest___024root* vlSelf);

VRecordSerializationTest___024root::VRecordSerializationTest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRecordSerializationTest___024root___ctor_var_reset(this);
}

void VRecordSerializationTest___024root::__Vconfigure(VRecordSerializationTest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRecordSerializationTest___024root::~VRecordSerializationTest___024root() {
}
