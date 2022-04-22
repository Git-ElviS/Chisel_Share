// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBidirectionalTester3DTabulate__Syms.h"
#include "VBidirectionalTester3DTabulate.h"
#include "VBidirectionalTester3DTabulate___024root.h"

// FUNCTIONS
VBidirectionalTester3DTabulate__Syms::~VBidirectionalTester3DTabulate__Syms()
{
}

VBidirectionalTester3DTabulate__Syms::VBidirectionalTester3DTabulate__Syms(VerilatedContext* contextp, const char* namep,VBidirectionalTester3DTabulate* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
