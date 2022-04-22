// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VWrapTester__Syms.h"
#include "VWrapTester.h"
#include "VWrapTester___024root.h"

// FUNCTIONS
VWrapTester__Syms::~VWrapTester__Syms()
{
}

VWrapTester__Syms::VWrapTester__Syms(VerilatedContext* contextp, const char* namep,VWrapTester* modelp)
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
    __Vscope_WrapTester.configure(this, name(), "WrapTester", "WrapTester", -12, VerilatedScope::SCOPE_OTHER);
}
