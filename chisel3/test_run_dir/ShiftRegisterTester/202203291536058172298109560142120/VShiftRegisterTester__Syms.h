// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTREGISTERTESTER__SYMS_H_
#define VERILATED_VSHIFTREGISTERTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VShiftRegisterTester.h"

// INCLUDE MODULE CLASSES
#include "VShiftRegisterTester___024root.h"

// SYMS CLASS (contains all model state)
class VShiftRegisterTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VShiftRegisterTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VShiftRegisterTester___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ShiftRegisterTester;

    // CONSTRUCTORS
    VShiftRegisterTester__Syms(VerilatedContext* contextp, const char* namep, VShiftRegisterTester* modelp);
    ~VShiftRegisterTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
