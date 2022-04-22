// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRECORDDIGITTESTER__SYMS_H_
#define VERILATED_VRECORDDIGITTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRecordDigitTester.h"

// INCLUDE MODULE CLASSES
#include "VRecordDigitTester___024root.h"

// SYMS CLASS (contains all model state)
class VRecordDigitTester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRecordDigitTester* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRecordDigitTester___024root   TOP;

    // CONSTRUCTORS
    VRecordDigitTester__Syms(VerilatedContext* contextp, const char* namep, VRecordDigitTester* modelp);
    ~VRecordDigitTester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
