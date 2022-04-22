// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSyncReadMemTester.h"
#include "VSyncReadMemTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSyncReadMemTester::VSyncReadMemTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSyncReadMemTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSyncReadMemTester::VSyncReadMemTester(const char* _vcname__)
    : VSyncReadMemTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSyncReadMemTester::~VSyncReadMemTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSyncReadMemTester___024root___eval_initial(VSyncReadMemTester___024root* vlSelf);
void VSyncReadMemTester___024root___eval_settle(VSyncReadMemTester___024root* vlSelf);
void VSyncReadMemTester___024root___eval(VSyncReadMemTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSyncReadMemTester___024root___eval_debug_assertions(VSyncReadMemTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSyncReadMemTester___024root___final(VSyncReadMemTester___024root* vlSelf);

static void _eval_initial_loop(VSyncReadMemTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSyncReadMemTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSyncReadMemTester___024root___eval_settle(&(vlSymsp->TOP));
        VSyncReadMemTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSyncReadMemTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSyncReadMemTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSyncReadMemTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSyncReadMemTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSyncReadMemTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSyncReadMemTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSyncReadMemTester::final() {
    VSyncReadMemTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSyncReadMemTester___024root__trace_init_top(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSyncReadMemTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemTester___024root*>(voidSelf);
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSyncReadMemTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSyncReadMemTester___024root__trace_register(VSyncReadMemTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSyncReadMemTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
