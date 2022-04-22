// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VModuleIODynamicIndexTester__Syms.h"
#include "VModuleIODynamicIndexTester.h"
#include "VModuleIODynamicIndexTester___024root.h"

// FUNCTIONS
VModuleIODynamicIndexTester__Syms::~VModuleIODynamicIndexTester__Syms()
{
}

VModuleIODynamicIndexTester__Syms::VModuleIODynamicIndexTester__Syms(VerilatedContext* contextp, const char* namep,VModuleIODynamicIndexTester* modelp)
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
    __Vscope_ModuleIODynamicIndexTester.configure(this, name(), "ModuleIODynamicIndexTester", "ModuleIODynamicIndexTester", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ModuleIODynamicIndexTester__tester.configure(this, name(), "ModuleIODynamicIndexTester.tester", "tester", -12, VerilatedScope::SCOPE_OTHER);
}
