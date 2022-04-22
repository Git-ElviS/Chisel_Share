// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecRegTester.h"
#include "VMixedVecRegTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecRegTester::VMixedVecRegTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecRegTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecRegTester::VMixedVecRegTester(const char* _vcname__)
    : VMixedVecRegTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecRegTester::~VMixedVecRegTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecRegTester___024root___eval_initial(VMixedVecRegTester___024root* vlSelf);
void VMixedVecRegTester___024root___eval_settle(VMixedVecRegTester___024root* vlSelf);
void VMixedVecRegTester___024root___eval(VMixedVecRegTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecRegTester___024root___eval_debug_assertions(VMixedVecRegTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecRegTester___024root___final(VMixedVecRegTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecRegTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecRegTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecRegTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecRegTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecRegTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecRegTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecRegTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecRegTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecRegTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecRegTester::final() {
    VMixedVecRegTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecRegTester___024root__trace_init_top(VMixedVecRegTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecRegTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecRegTester___024root*>(voidSelf);
    VMixedVecRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecRegTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecRegTester___024root__trace_register(VMixedVecRegTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecRegTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecRegTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
