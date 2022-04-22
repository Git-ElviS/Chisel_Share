// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VModule1.h"
#include "VModule1__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VModule1::VModule1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VModule1__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , i_a_a{vlSymsp->TOP.i_a_a}
    , i_a_b{vlSymsp->TOP.i_a_b}
    , i_b_0_0{vlSymsp->TOP.i_b_0_0}
    , i_b_0_1{vlSymsp->TOP.i_b_0_1}
    , i_b_0_2{vlSymsp->TOP.i_b_0_2}
    , i_b_0_3{vlSymsp->TOP.i_b_0_3}
    , i_b_1_0{vlSymsp->TOP.i_b_1_0}
    , i_b_1_1{vlSymsp->TOP.i_b_1_1}
    , i_b_1_2{vlSymsp->TOP.i_b_1_2}
    , i_b_1_3{vlSymsp->TOP.i_b_1_3}
    , i_b_2_0{vlSymsp->TOP.i_b_2_0}
    , i_b_2_1{vlSymsp->TOP.i_b_2_1}
    , i_b_2_2{vlSymsp->TOP.i_b_2_2}
    , i_b_2_3{vlSymsp->TOP.i_b_2_3}
    , i_b_3_0{vlSymsp->TOP.i_b_3_0}
    , i_b_3_1{vlSymsp->TOP.i_b_3_1}
    , i_b_3_2{vlSymsp->TOP.i_b_3_2}
    , i_b_3_3{vlSymsp->TOP.i_b_3_3}
    , rootp{&(vlSymsp->TOP)}
{
}

VModule1::VModule1(const char* _vcname__)
    : VModule1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VModule1::~VModule1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VModule1___024root___eval_initial(VModule1___024root* vlSelf);
void VModule1___024root___eval_settle(VModule1___024root* vlSelf);
void VModule1___024root___eval(VModule1___024root* vlSelf);
#ifdef VL_DEBUG
void VModule1___024root___eval_debug_assertions(VModule1___024root* vlSelf);
#endif  // VL_DEBUG
void VModule1___024root___final(VModule1___024root* vlSelf);

static void _eval_initial_loop(VModule1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VModule1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VModule1___024root___eval_settle(&(vlSymsp->TOP));
        VModule1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VModule1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VModule1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VModule1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VModule1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VModule1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VModule1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VModule1::final() {
    VModule1___024root___final(&(vlSymsp->TOP));
}
