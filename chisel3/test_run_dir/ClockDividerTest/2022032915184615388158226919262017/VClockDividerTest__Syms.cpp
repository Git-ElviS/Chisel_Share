// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VClockDividerTest__Syms.h"
#include "VClockDividerTest.h"
#include "VClockDividerTest___024root.h"

// FUNCTIONS
VClockDividerTest__Syms::~VClockDividerTest__Syms()
{
}

VClockDividerTest__Syms::VClockDividerTest__Syms(VerilatedContext* contextp, const char* namep,VClockDividerTest* modelp)
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
    __Vscope_ClockDividerTest.configure(this, name(), "ClockDividerTest", "ClockDividerTest", -12, VerilatedScope::SCOPE_OTHER);
}
