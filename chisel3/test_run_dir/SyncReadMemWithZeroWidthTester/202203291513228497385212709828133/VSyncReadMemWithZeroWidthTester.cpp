// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSyncReadMemWithZeroWidthTester.h"
#include "VSyncReadMemWithZeroWidthTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSyncReadMemWithZeroWidthTester::VSyncReadMemWithZeroWidthTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSyncReadMemWithZeroWidthTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSyncReadMemWithZeroWidthTester::VSyncReadMemWithZeroWidthTester(const char* _vcname__)
    : VSyncReadMemWithZeroWidthTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSyncReadMemWithZeroWidthTester::~VSyncReadMemWithZeroWidthTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSyncReadMemWithZeroWidthTester___024root___eval_initial(VSyncReadMemWithZeroWidthTester___024root* vlSelf);
void VSyncReadMemWithZeroWidthTester___024root___eval_settle(VSyncReadMemWithZeroWidthTester___024root* vlSelf);
void VSyncReadMemWithZeroWidthTester___024root___eval(VSyncReadMemWithZeroWidthTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSyncReadMemWithZeroWidthTester___024root___eval_debug_assertions(VSyncReadMemWithZeroWidthTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSyncReadMemWithZeroWidthTester___024root___final(VSyncReadMemWithZeroWidthTester___024root* vlSelf);

static void _eval_initial_loop(VSyncReadMemWithZeroWidthTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSyncReadMemWithZeroWidthTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSyncReadMemWithZeroWidthTester___024root___eval_settle(&(vlSymsp->TOP));
        VSyncReadMemWithZeroWidthTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSyncReadMemWithZeroWidthTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSyncReadMemWithZeroWidthTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSyncReadMemWithZeroWidthTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSyncReadMemWithZeroWidthTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSyncReadMemWithZeroWidthTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSyncReadMemWithZeroWidthTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester::final() {
    VSyncReadMemWithZeroWidthTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSyncReadMemWithZeroWidthTester___024root__trace_init_top(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSyncReadMemWithZeroWidthTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemWithZeroWidthTester___024root*>(voidSelf);
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSyncReadMemWithZeroWidthTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_register(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSyncReadMemWithZeroWidthTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
