// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCountIsCorrectTester__Syms.h"
#include "VCountIsCorrectTester.h"
#include "VCountIsCorrectTester___024root.h"

// FUNCTIONS
VCountIsCorrectTester__Syms::~VCountIsCorrectTester__Syms()
{
}

VCountIsCorrectTester__Syms::VCountIsCorrectTester__Syms(VerilatedContext* contextp, const char* namep,VCountIsCorrectTester* modelp)
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
    // Setup scopes
    __Vscope_CountIsCorrectTester.configure(this, name(), "CountIsCorrectTester", "CountIsCorrectTester", -12, VerilatedScope::SCOPE_OTHER);
}
