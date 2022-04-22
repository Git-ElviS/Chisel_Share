// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVecOfBool2UInt__Syms.h"
#include "VVecOfBool2UInt.h"
#include "VVecOfBool2UInt___024root.h"

// FUNCTIONS
VVecOfBool2UInt__Syms::~VVecOfBool2UInt__Syms()
{
}

VVecOfBool2UInt__Syms::VVecOfBool2UInt__Syms(VerilatedContext* contextp, const char* namep,VVecOfBool2UInt* modelp)
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
