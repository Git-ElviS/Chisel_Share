// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMuxTester.h"
#include "VMuxTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMuxTester::VMuxTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMuxTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMuxTester::VMuxTester(const char* _vcname__)
    : VMuxTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMuxTester::~VMuxTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMuxTester___024root___eval_initial(VMuxTester___024root* vlSelf);
void VMuxTester___024root___eval_settle(VMuxTester___024root* vlSelf);
void VMuxTester___024root___eval(VMuxTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMuxTester___024root___eval_debug_assertions(VMuxTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMuxTester___024root___final(VMuxTester___024root* vlSelf);

static void _eval_initial_loop(VMuxTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMuxTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMuxTester___024root___eval_settle(&(vlSymsp->TOP));
        VMuxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMuxTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMuxTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMuxTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMuxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMuxTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMuxTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMuxTester::final() {
    VMuxTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMuxTester___024root__trace_init_top(VMuxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMuxTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxTester___024root*>(voidSelf);
    VMuxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMuxTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMuxTester___024root__trace_register(VMuxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMuxTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMuxTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
