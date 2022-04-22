// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRecordSerializationTest.h for the primary calling header

#ifndef VERILATED_VRECORDSERIALIZATIONTEST___024ROOT_H_
#define VERILATED_VRECORDSERIALIZATIONTEST___024ROOT_H_  // guard

#include "verilated.h"

class VRecordSerializationTest__Syms;
VL_MODULE(VRecordSerializationTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VRecordSerializationTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRecordSerializationTest___024root(const char* name);
    ~VRecordSerializationTest___024root();
    VL_UNCOPYABLE(VRecordSerializationTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRecordSerializationTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
