// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSBPTester.h"
#include "VSBPTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSBPTester::VSBPTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSBPTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSBPTester::VSBPTester(const char* _vcname__)
    : VSBPTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSBPTester::~VSBPTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSBPTester___024root___eval_initial(VSBPTester___024root* vlSelf);
void VSBPTester___024root___eval_settle(VSBPTester___024root* vlSelf);
void VSBPTester___024root___eval(VSBPTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSBPTester___024root___eval_debug_assertions(VSBPTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSBPTester___024root___final(VSBPTester___024root* vlSelf);

static void _eval_initial_loop(VSBPTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSBPTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSBPTester___024root___eval_settle(&(vlSymsp->TOP));
        VSBPTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSBPTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSBPTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSBPTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSBPTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSBPTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSBPTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSBPTester::final() {
    VSBPTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSBPTester___024root__trace_init_top(VSBPTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSBPTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSBPTester___024root*>(voidSelf);
    VSBPTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSBPTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSBPTester___024root__trace_register(VSBPTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSBPTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSBPTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
