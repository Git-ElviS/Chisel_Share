// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecUIntDynamicIndexTester.h"
#include "VMixedVecUIntDynamicIndexTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecUIntDynamicIndexTester::VMixedVecUIntDynamicIndexTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecUIntDynamicIndexTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecUIntDynamicIndexTester::VMixedVecUIntDynamicIndexTester(const char* _vcname__)
    : VMixedVecUIntDynamicIndexTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecUIntDynamicIndexTester::~VMixedVecUIntDynamicIndexTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecUIntDynamicIndexTester___024root___eval_initial(VMixedVecUIntDynamicIndexTester___024root* vlSelf);
void VMixedVecUIntDynamicIndexTester___024root___eval_settle(VMixedVecUIntDynamicIndexTester___024root* vlSelf);
void VMixedVecUIntDynamicIndexTester___024root___eval(VMixedVecUIntDynamicIndexTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecUIntDynamicIndexTester___024root___eval_debug_assertions(VMixedVecUIntDynamicIndexTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecUIntDynamicIndexTester___024root___final(VMixedVecUIntDynamicIndexTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecUIntDynamicIndexTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecUIntDynamicIndexTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecUIntDynamicIndexTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecUIntDynamicIndexTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecUIntDynamicIndexTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecUIntDynamicIndexTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecUIntDynamicIndexTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecUIntDynamicIndexTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecUIntDynamicIndexTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester::final() {
    VMixedVecUIntDynamicIndexTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecUIntDynamicIndexTester___024root__trace_init_top(VMixedVecUIntDynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecUIntDynamicIndexTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecUIntDynamicIndexTester___024root*>(voidSelf);
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecUIntDynamicIndexTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester___024root__trace_register(VMixedVecUIntDynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecUIntDynamicIndexTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
