// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMultiClockSpec_Anon__Syms.h"
#include "VMultiClockSpec_Anon.h"
#include "VMultiClockSpec_Anon___024root.h"

// FUNCTIONS
VMultiClockSpec_Anon__Syms::~VMultiClockSpec_Anon__Syms()
{
}

VMultiClockSpec_Anon__Syms::VMultiClockSpec_Anon__Syms(VerilatedContext* contextp, const char* namep,VMultiClockSpec_Anon* modelp)
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
    __Vscope_MultiClockSpec_Anon.configure(this, name(), "MultiClockSpec_Anon", "MultiClockSpec_Anon", -12, VerilatedScope::SCOPE_OTHER);
}
