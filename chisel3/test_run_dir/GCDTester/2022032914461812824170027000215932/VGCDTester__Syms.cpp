// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VGCDTester__Syms.h"
#include "VGCDTester.h"
#include "VGCDTester___024root.h"

// FUNCTIONS
VGCDTester__Syms::~VGCDTester__Syms()
{
}

VGCDTester__Syms::VGCDTester__Syms(VerilatedContext* contextp, const char* namep,VGCDTester* modelp)
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
    __Vscope_GCDTester.configure(this, name(), "GCDTester", "GCDTester", -12, VerilatedScope::SCOPE_OTHER);
}
