// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSIntLitExtractTester.h"
#include "VSIntLitExtractTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSIntLitExtractTester::VSIntLitExtractTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSIntLitExtractTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSIntLitExtractTester::VSIntLitExtractTester(const char* _vcname__)
    : VSIntLitExtractTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSIntLitExtractTester::~VSIntLitExtractTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSIntLitExtractTester___024root___eval_initial(VSIntLitExtractTester___024root* vlSelf);
void VSIntLitExtractTester___024root___eval_settle(VSIntLitExtractTester___024root* vlSelf);
void VSIntLitExtractTester___024root___eval(VSIntLitExtractTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSIntLitExtractTester___024root___eval_debug_assertions(VSIntLitExtractTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSIntLitExtractTester___024root___final(VSIntLitExtractTester___024root* vlSelf);

static void _eval_initial_loop(VSIntLitExtractTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSIntLitExtractTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSIntLitExtractTester___024root___eval_settle(&(vlSymsp->TOP));
        VSIntLitExtractTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSIntLitExtractTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSIntLitExtractTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSIntLitExtractTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSIntLitExtractTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSIntLitExtractTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSIntLitExtractTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSIntLitExtractTester::final() {
    VSIntLitExtractTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSIntLitExtractTester___024root__trace_init_top(VSIntLitExtractTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSIntLitExtractTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSIntLitExtractTester___024root*>(voidSelf);
    VSIntLitExtractTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSIntLitExtractTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSIntLitExtractTester___024root__trace_register(VSIntLitExtractTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSIntLitExtractTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSIntLitExtractTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
