// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMulLookupTester.h"
#include "VMulLookupTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMulLookupTester::VMulLookupTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMulLookupTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMulLookupTester::VMulLookupTester(const char* _vcname__)
    : VMulLookupTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMulLookupTester::~VMulLookupTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMulLookupTester___024root___eval_initial(VMulLookupTester___024root* vlSelf);
void VMulLookupTester___024root___eval_settle(VMulLookupTester___024root* vlSelf);
void VMulLookupTester___024root___eval(VMulLookupTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMulLookupTester___024root___eval_debug_assertions(VMulLookupTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMulLookupTester___024root___final(VMulLookupTester___024root* vlSelf);

static void _eval_initial_loop(VMulLookupTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMulLookupTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMulLookupTester___024root___eval_settle(&(vlSymsp->TOP));
        VMulLookupTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMulLookupTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMulLookupTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMulLookupTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMulLookupTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMulLookupTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMulLookupTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMulLookupTester::final() {
    VMulLookupTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMulLookupTester___024root__trace_init_top(VMulLookupTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMulLookupTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMulLookupTester___024root*>(voidSelf);
    VMulLookupTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMulLookupTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMulLookupTester___024root__trace_register(VMulLookupTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMulLookupTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMulLookupTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
