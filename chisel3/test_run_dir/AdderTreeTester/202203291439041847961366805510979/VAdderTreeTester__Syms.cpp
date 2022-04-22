// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAdderTreeTester__Syms.h"
#include "VAdderTreeTester.h"
#include "VAdderTreeTester___024root.h"

// FUNCTIONS
VAdderTreeTester__Syms::~VAdderTreeTester__Syms()
{
}

VAdderTreeTester__Syms::VAdderTreeTester__Syms(VerilatedContext* contextp, const char* namep,VAdderTreeTester* modelp)
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
