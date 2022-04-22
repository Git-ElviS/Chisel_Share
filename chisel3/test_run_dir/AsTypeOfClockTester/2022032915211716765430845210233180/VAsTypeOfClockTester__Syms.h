// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASTYPEOFCLOCKTESTER__SYMS_H_
#define VERILATED_VASTYPEOFCLOCKTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAsTypeOfClockTester.h"

// INCLUDE MODULE CLASSES
#include "VAsTypeOfClockTester___024root.h"

// SYMS CLASS (contains all model state)
class VAsTypeOfClockTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAsTypeOfClockTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAsTypeOfClockTester___024root TOP;

    // CONSTRUCTORS
    VAsTypeOfClockTester__Syms(VerilatedContext* contextp, const char* namep, VAsTypeOfClockTester* modelp);
    ~VAsTypeOfClockTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
