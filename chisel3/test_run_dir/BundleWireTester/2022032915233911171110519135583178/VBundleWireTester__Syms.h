// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBUNDLEWIRETESTER__SYMS_H_
#define VERILATED_VBUNDLEWIRETESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBundleWireTester.h"

// INCLUDE MODULE CLASSES
#include "VBundleWireTester___024root.h"

// SYMS CLASS (contains all model state)
class VBundleWireTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBundleWireTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBundleWireTester___024root    TOP;

    // CONSTRUCTORS
    VBundleWireTester__Syms(VerilatedContext* contextp, const char* namep, VBundleWireTester* modelp);
    ~VBundleWireTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
