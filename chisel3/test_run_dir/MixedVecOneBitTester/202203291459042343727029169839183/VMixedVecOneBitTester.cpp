// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecOneBitTester.h"
#include "VMixedVecOneBitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecOneBitTester::VMixedVecOneBitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecOneBitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecOneBitTester::VMixedVecOneBitTester(const char* _vcname__)
    : VMixedVecOneBitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecOneBitTester::~VMixedVecOneBitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecOneBitTester___024root___eval_initial(VMixedVecOneBitTester___024root* vlSelf);
void VMixedVecOneBitTester___024root___eval_settle(VMixedVecOneBitTester___024root* vlSelf);
void VMixedVecOneBitTester___024root___eval(VMixedVecOneBitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecOneBitTester___024root___eval_debug_assertions(VMixedVecOneBitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecOneBitTester___024root___final(VMixedVecOneBitTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecOneBitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecOneBitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecOneBitTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecOneBitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecOneBitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecOneBitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecOneBitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecOneBitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecOneBitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecOneBitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecOneBitTester::final() {
    VMixedVecOneBitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecOneBitTester___024root__trace_init_top(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecOneBitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecOneBitTester___024root*>(voidSelf);
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecOneBitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_register(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecOneBitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecOneBitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
