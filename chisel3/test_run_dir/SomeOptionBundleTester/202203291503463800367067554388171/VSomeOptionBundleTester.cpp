// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSomeOptionBundleTester.h"
#include "VSomeOptionBundleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSomeOptionBundleTester::VSomeOptionBundleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSomeOptionBundleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSomeOptionBundleTester::VSomeOptionBundleTester(const char* _vcname__)
    : VSomeOptionBundleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSomeOptionBundleTester::~VSomeOptionBundleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSomeOptionBundleTester___024root___eval_initial(VSomeOptionBundleTester___024root* vlSelf);
void VSomeOptionBundleTester___024root___eval_settle(VSomeOptionBundleTester___024root* vlSelf);
void VSomeOptionBundleTester___024root___eval(VSomeOptionBundleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSomeOptionBundleTester___024root___eval_debug_assertions(VSomeOptionBundleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSomeOptionBundleTester___024root___final(VSomeOptionBundleTester___024root* vlSelf);

static void _eval_initial_loop(VSomeOptionBundleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSomeOptionBundleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSomeOptionBundleTester___024root___eval_settle(&(vlSymsp->TOP));
        VSomeOptionBundleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSomeOptionBundleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSomeOptionBundleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSomeOptionBundleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSomeOptionBundleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSomeOptionBundleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSomeOptionBundleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSomeOptionBundleTester::final() {
    VSomeOptionBundleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSomeOptionBundleTester___024root__trace_init_top(VSomeOptionBundleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSomeOptionBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSomeOptionBundleTester___024root*>(voidSelf);
    VSomeOptionBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSomeOptionBundleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSomeOptionBundleTester___024root__trace_register(VSomeOptionBundleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSomeOptionBundleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSomeOptionBundleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
