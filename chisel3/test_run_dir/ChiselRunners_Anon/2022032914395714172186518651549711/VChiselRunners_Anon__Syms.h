// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCHISELRUNNERS_ANON__SYMS_H_
#define VERILATED_VCHISELRUNNERS_ANON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VChiselRunners_Anon.h"

// INCLUDE MODULE CLASSES
#include "VChiselRunners_Anon___024root.h"

// SYMS CLASS (contains all model state)
class VChiselRunners_Anon__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VChiselRunners_Anon* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VChiselRunners_Anon___024root  TOP;

    // CONSTRUCTORS
    VChiselRunners_Anon__Syms(VerilatedContext* contextp, const char* namep, VChiselRunners_Anon* modelp);
    ~VChiselRunners_Anon__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
