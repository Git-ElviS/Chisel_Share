// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVecLiteralSpec_Anon__Syms.h"
#include "VVecLiteralSpec_Anon.h"
#include "VVecLiteralSpec_Anon___024root.h"

// FUNCTIONS
VVecLiteralSpec_Anon__Syms::~VVecLiteralSpec_Anon__Syms()
{
}

VVecLiteralSpec_Anon__Syms::VVecLiteralSpec_Anon__Syms(VerilatedContext* contextp, const char* namep,VVecLiteralSpec_Anon* modelp)
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
