// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecIOTester.h"
#include "VMixedVecIOTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecIOTester::VMixedVecIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecIOTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecIOTester::VMixedVecIOTester(const char* _vcname__)
    : VMixedVecIOTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecIOTester::~VMixedVecIOTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecIOTester___024root___eval_initial(VMixedVecIOTester___024root* vlSelf);
void VMixedVecIOTester___024root___eval_settle(VMixedVecIOTester___024root* vlSelf);
void VMixedVecIOTester___024root___eval(VMixedVecIOTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecIOTester___024root___eval_debug_assertions(VMixedVecIOTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecIOTester___024root___final(VMixedVecIOTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecIOTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecIOTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecIOTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecIOTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecIOTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecIOTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecIOTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecIOTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecIOTester::final() {
    VMixedVecIOTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecIOTester___024root__trace_init_top(VMixedVecIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecIOTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecIOTester___024root*>(voidSelf);
    VMixedVecIOTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecIOTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecIOTester___024root__trace_register(VMixedVecIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecIOTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecIOTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
