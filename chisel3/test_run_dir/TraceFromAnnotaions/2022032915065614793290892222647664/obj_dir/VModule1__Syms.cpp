// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VModule1__Syms.h"
#include "VModule1.h"
#include "VModule1___024root.h"

// FUNCTIONS
VModule1__Syms::~VModule1__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_Module1);
    __Vhier.remove(&__Vscope_Module1, &__Vscope_Module1__m0);

}

VModule1__Syms::VModule1__Syms(VerilatedContext* contextp, const char* namep,VModule1* modelp)
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
    __Vscope_Module1.configure(this, name(), "Module1", "Module1", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_Module1__m0.configure(this, name(), "Module1.m0", "m0", -12, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_Module1);
    __Vhier.add(&__Vscope_Module1, &__Vscope_Module1__m0);

    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Module1__m0.varInsert(__Vfinal,"o_a_b", &(TOP.Module1__DOT__m0__DOT__o_a_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
    }
}
