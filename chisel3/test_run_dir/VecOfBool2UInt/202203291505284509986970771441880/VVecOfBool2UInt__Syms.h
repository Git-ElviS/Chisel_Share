// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVECOFBOOL2UINT__SYMS_H_
#define VERILATED_VVECOFBOOL2UINT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VVecOfBool2UInt.h"

// INCLUDE MODULE CLASSES
#include "VVecOfBool2UInt___024root.h"

// SYMS CLASS (contains all model state)
class VVecOfBool2UInt__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VVecOfBool2UInt* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VVecOfBool2UInt___024root      TOP;

    // CONSTRUCTORS
    VVecOfBool2UInt__Syms(VerilatedContext* contextp, const char* namep, VVecOfBool2UInt* modelp);
    ~VVecOfBool2UInt__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
