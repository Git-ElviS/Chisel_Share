// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMODULE1__SYMS_H_
#define VERILATED_VMODULE1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VModule1.h"

// INCLUDE MODULE CLASSES
#include "VModule1___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VModule1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VModule1* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VModule1___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_Module1;
    VerilatedScope __Vscope_Module1__m0;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VModule1__Syms(VerilatedContext* contextp, const char* namep, VModule1* modelp);
    ~VModule1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
