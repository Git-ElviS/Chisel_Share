// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPARAMETERIZEDAGGREGATEONEHOTTESTER__SYMS_H_
#define VERILATED_VPARAMETERIZEDAGGREGATEONEHOTTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VParameterizedAggregateOneHotTester.h"

// INCLUDE MODULE CLASSES
#include "VParameterizedAggregateOneHotTester___024root.h"

// SYMS CLASS (contains all model state)
class VParameterizedAggregateOneHotTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VParameterizedAggregateOneHotTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VParameterizedAggregateOneHotTester___024root TOP;

    // CONSTRUCTORS
    VParameterizedAggregateOneHotTester__Syms(VerilatedContext* contextp, const char* namep, VParameterizedAggregateOneHotTester* modelp);
    ~VParameterizedAggregateOneHotTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
