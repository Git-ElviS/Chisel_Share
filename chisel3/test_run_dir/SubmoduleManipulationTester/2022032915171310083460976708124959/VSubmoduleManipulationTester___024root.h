// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSubmoduleManipulationTester.h for the primary calling header

#ifndef VERILATED_VSUBMODULEMANIPULATIONTESTER___024ROOT_H_
#define VERILATED_VSUBMODULEMANIPULATIONTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSubmoduleManipulationTester__Syms;
VL_MODULE(VSubmoduleManipulationTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSubmoduleManipulationTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSubmoduleManipulationTester___024root(const char* name);
    ~VSubmoduleManipulationTester___024root();
    VL_UNCOPYABLE(VSubmoduleManipulationTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSubmoduleManipulationTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
