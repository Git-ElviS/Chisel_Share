// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSyncReadMemBundleTester.h"
#include "VSyncReadMemBundleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSyncReadMemBundleTester::VSyncReadMemBundleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSyncReadMemBundleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSyncReadMemBundleTester::VSyncReadMemBundleTester(const char* _vcname__)
    : VSyncReadMemBundleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSyncReadMemBundleTester::~VSyncReadMemBundleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSyncReadMemBundleTester___024root___eval_initial(VSyncReadMemBundleTester___024root* vlSelf);
void VSyncReadMemBundleTester___024root___eval_settle(VSyncReadMemBundleTester___024root* vlSelf);
void VSyncReadMemBundleTester___024root___eval(VSyncReadMemBundleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSyncReadMemBundleTester___024root___eval_debug_assertions(VSyncReadMemBundleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSyncReadMemBundleTester___024root___final(VSyncReadMemBundleTester___024root* vlSelf);

static void _eval_initial_loop(VSyncReadMemBundleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSyncReadMemBundleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSyncReadMemBundleTester___024root___eval_settle(&(vlSymsp->TOP));
        VSyncReadMemBundleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSyncReadMemBundleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSyncReadMemBundleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSyncReadMemBundleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSyncReadMemBundleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSyncReadMemBundleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSyncReadMemBundleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSyncReadMemBundleTester::final() {
    VSyncReadMemBundleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSyncReadMemBundleTester___024root__trace_init_top(VSyncReadMemBundleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSyncReadMemBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemBundleTester___024root*>(voidSelf);
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSyncReadMemBundleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSyncReadMemBundleTester___024root__trace_register(VSyncReadMemBundleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemBundleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSyncReadMemBundleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
