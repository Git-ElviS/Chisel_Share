// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSIntOneHotTester.h"
#include "VSIntOneHotTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSIntOneHotTester::VSIntOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSIntOneHotTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSIntOneHotTester::VSIntOneHotTester(const char* _vcname__)
    : VSIntOneHotTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSIntOneHotTester::~VSIntOneHotTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSIntOneHotTester___024root___eval_initial(VSIntOneHotTester___024root* vlSelf);
void VSIntOneHotTester___024root___eval_settle(VSIntOneHotTester___024root* vlSelf);
void VSIntOneHotTester___024root___eval(VSIntOneHotTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSIntOneHotTester___024root___eval_debug_assertions(VSIntOneHotTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSIntOneHotTester___024root___final(VSIntOneHotTester___024root* vlSelf);

static void _eval_initial_loop(VSIntOneHotTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSIntOneHotTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSIntOneHotTester___024root___eval_settle(&(vlSymsp->TOP));
        VSIntOneHotTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSIntOneHotTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSIntOneHotTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSIntOneHotTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSIntOneHotTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSIntOneHotTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSIntOneHotTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSIntOneHotTester::final() {
    VSIntOneHotTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSIntOneHotTester___024root__trace_init_top(VSIntOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSIntOneHotTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSIntOneHotTester___024root*>(voidSelf);
    VSIntOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSIntOneHotTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSIntOneHotTester___024root__trace_register(VSIntOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSIntOneHotTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSIntOneHotTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
