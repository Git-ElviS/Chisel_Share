// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VQueueGetsFlushedTester__Syms.h"
#include "VQueueGetsFlushedTester.h"
#include "VQueueGetsFlushedTester___024root.h"

// FUNCTIONS
VQueueGetsFlushedTester__Syms::~VQueueGetsFlushedTester__Syms()
{
}

VQueueGetsFlushedTester__Syms::VQueueGetsFlushedTester__Syms(VerilatedContext* contextp, const char* namep,VQueueGetsFlushedTester* modelp)
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
    __Vscope_QueueGetsFlushedTester.configure(this, name(), "QueueGetsFlushedTester", "QueueGetsFlushedTester", -12, VerilatedScope::SCOPE_OTHER);
}
