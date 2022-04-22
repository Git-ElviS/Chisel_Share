// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBASICROTATE__SYMS_H_
#define VERILATED_VBASICROTATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBasicRotate.h"

// INCLUDE MODULE CLASSES
#include "VBasicRotate___024root.h"

// SYMS CLASS (contains all model state)
class VBasicRotate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBasicRotate* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBasicRotate___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_BasicRotate;

    // CONSTRUCTORS
    VBasicRotate__Syms(VerilatedContext* contextp, const char* namep, VBasicRotate* modelp);
    ~VBasicRotate__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
