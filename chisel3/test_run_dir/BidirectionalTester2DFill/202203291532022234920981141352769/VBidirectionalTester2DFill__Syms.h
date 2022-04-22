// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBIDIRECTIONALTESTER2DFILL__SYMS_H_
#define VERILATED_VBIDIRECTIONALTESTER2DFILL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBidirectionalTester2DFill.h"

// INCLUDE MODULE CLASSES
#include "VBidirectionalTester2DFill___024root.h"

// SYMS CLASS (contains all model state)
class VBidirectionalTester2DFill__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBidirectionalTester2DFill* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBidirectionalTester2DFill___024root TOP;

    // CONSTRUCTORS
    VBidirectionalTester2DFill__Syms(VerilatedContext* contextp, const char* namep, VBidirectionalTester2DFill* modelp);
    ~VBidirectionalTester2DFill__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
