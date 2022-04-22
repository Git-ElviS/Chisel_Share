// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASYNCRESETSPEC_ANON__SYMS_H_
#define VERILATED_VASYNCRESETSPEC_ANON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAsyncResetSpec_Anon.h"

// INCLUDE MODULE CLASSES
#include "VAsyncResetSpec_Anon___024root.h"

// SYMS CLASS (contains all model state)
class VAsyncResetSpec_Anon__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAsyncResetSpec_Anon* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAsyncResetSpec_Anon___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_AsyncResetSpec_Anon;

    // CONSTRUCTORS
    VAsyncResetSpec_Anon__Syms(VerilatedContext* contextp, const char* namep, VAsyncResetSpec_Anon* modelp);
    ~VAsyncResetSpec_Anon__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
