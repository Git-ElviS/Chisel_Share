// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VThingsPassThroughFlushQueueTester__Syms.h"
#include "VThingsPassThroughFlushQueueTester.h"
#include "VThingsPassThroughFlushQueueTester___024root.h"

// FUNCTIONS
VThingsPassThroughFlushQueueTester__Syms::~VThingsPassThroughFlushQueueTester__Syms()
{
}

VThingsPassThroughFlushQueueTester__Syms::VThingsPassThroughFlushQueueTester__Syms(VerilatedContext* contextp, const char* namep,VThingsPassThroughFlushQueueTester* modelp)
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
    __Vscope_ThingsPassThroughFlushQueueTester.configure(this, name(), "ThingsPassThroughFlushQueueTester", "ThingsPassThroughFlushQueueTester", -12, VerilatedScope::SCOPE_OTHER);
}
