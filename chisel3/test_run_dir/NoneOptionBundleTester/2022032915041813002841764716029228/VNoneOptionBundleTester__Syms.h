// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNONEOPTIONBUNDLETESTER__SYMS_H_
#define VERILATED_VNONEOPTIONBUNDLETESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNoneOptionBundleTester.h"

// INCLUDE MODULE CLASSES
#include "VNoneOptionBundleTester___024root.h"

// SYMS CLASS (contains all model state)
class VNoneOptionBundleTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNoneOptionBundleTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNoneOptionBundleTester___024root TOP;

    // CONSTRUCTORS
    VNoneOptionBundleTester__Syms(VerilatedContext* contextp, const char* namep, VNoneOptionBundleTester* modelp);
    ~VNoneOptionBundleTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
