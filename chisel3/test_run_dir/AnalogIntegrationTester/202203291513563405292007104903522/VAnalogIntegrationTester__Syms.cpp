// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAnalogIntegrationTester__Syms.h"
#include "VAnalogIntegrationTester.h"
#include "VAnalogIntegrationTester___024root.h"

// FUNCTIONS
VAnalogIntegrationTester__Syms::~VAnalogIntegrationTester__Syms()
{
}

VAnalogIntegrationTester__Syms::VAnalogIntegrationTester__Syms(VerilatedContext* contextp, const char* namep,VAnalogIntegrationTester* modelp)
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
    __Vscope_AnalogIntegrationTester.configure(this, name(), "AnalogIntegrationTester", "AnalogIntegrationTester", -12, VerilatedScope::SCOPE_OTHER);
}
