// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VShiftTester__Syms.h"
#include "VShiftTester.h"
#include "VShiftTester___024root.h"

// FUNCTIONS
VShiftTester__Syms::~VShiftTester__Syms()
{
}

VShiftTester__Syms::VShiftTester__Syms(VerilatedContext* contextp, const char* namep,VShiftTester* modelp)
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
