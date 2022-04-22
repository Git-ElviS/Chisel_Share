// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecFromVecTester.h"
#include "VMixedVecFromVecTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecFromVecTester::VMixedVecFromVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecFromVecTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecFromVecTester::VMixedVecFromVecTester(const char* _vcname__)
    : VMixedVecFromVecTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecFromVecTester::~VMixedVecFromVecTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecFromVecTester___024root___eval_initial(VMixedVecFromVecTester___024root* vlSelf);
void VMixedVecFromVecTester___024root___eval_settle(VMixedVecFromVecTester___024root* vlSelf);
void VMixedVecFromVecTester___024root___eval(VMixedVecFromVecTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecFromVecTester___024root___eval_debug_assertions(VMixedVecFromVecTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecFromVecTester___024root___final(VMixedVecFromVecTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecFromVecTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecFromVecTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecFromVecTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecFromVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecFromVecTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecFromVecTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecFromVecTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecFromVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecFromVecTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecFromVecTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecFromVecTester::final() {
    VMixedVecFromVecTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecFromVecTester___024root__trace_init_top(VMixedVecFromVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecFromVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecFromVecTester___024root*>(voidSelf);
    VMixedVecFromVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecFromVecTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecFromVecTester___024root__trace_register(VMixedVecFromVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecFromVecTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecFromVecTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
