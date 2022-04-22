// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMemBundleTester__Syms.h"
#include "VMemBundleTester.h"
#include "VMemBundleTester___024root.h"

// FUNCTIONS
VMemBundleTester__Syms::~VMemBundleTester__Syms()
{
}

VMemBundleTester__Syms::VMemBundleTester__Syms(VerilatedContext* contextp, const char* namep,VMemBundleTester* modelp)
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
    __Vscope_MemBundleTester.configure(this, name(), "MemBundleTester", "MemBundleTester", -12, VerilatedScope::SCOPE_OTHER);
}
