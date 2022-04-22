// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDETECTTWOONESTESTER__SYMS_H_
#define VERILATED_VDETECTTWOONESTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDetectTwoOnesTester.h"

// INCLUDE MODULE CLASSES
#include "VDetectTwoOnesTester___024root.h"

// SYMS CLASS (contains all model state)
class VDetectTwoOnesTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDetectTwoOnesTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDetectTwoOnesTester___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_DetectTwoOnesTester;

    // CONSTRUCTORS
    VDetectTwoOnesTester__Syms(VerilatedContext* contextp, const char* namep, VDetectTwoOnesTester* modelp);
    ~VDetectTwoOnesTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
