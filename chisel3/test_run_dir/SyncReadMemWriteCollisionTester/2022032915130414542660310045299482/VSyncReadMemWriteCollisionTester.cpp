// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSyncReadMemWriteCollisionTester.h"
#include "VSyncReadMemWriteCollisionTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSyncReadMemWriteCollisionTester::VSyncReadMemWriteCollisionTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSyncReadMemWriteCollisionTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSyncReadMemWriteCollisionTester::VSyncReadMemWriteCollisionTester(const char* _vcname__)
    : VSyncReadMemWriteCollisionTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSyncReadMemWriteCollisionTester::~VSyncReadMemWriteCollisionTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSyncReadMemWriteCollisionTester___024root___eval_initial(VSyncReadMemWriteCollisionTester___024root* vlSelf);
void VSyncReadMemWriteCollisionTester___024root___eval_settle(VSyncReadMemWriteCollisionTester___024root* vlSelf);
void VSyncReadMemWriteCollisionTester___024root___eval(VSyncReadMemWriteCollisionTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSyncReadMemWriteCollisionTester___024root___eval_debug_assertions(VSyncReadMemWriteCollisionTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSyncReadMemWriteCollisionTester___024root___final(VSyncReadMemWriteCollisionTester___024root* vlSelf);

static void _eval_initial_loop(VSyncReadMemWriteCollisionTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSyncReadMemWriteCollisionTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSyncReadMemWriteCollisionTester___024root___eval_settle(&(vlSymsp->TOP));
        VSyncReadMemWriteCollisionTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSyncReadMemWriteCollisionTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSyncReadMemWriteCollisionTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSyncReadMemWriteCollisionTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSyncReadMemWriteCollisionTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSyncReadMemWriteCollisionTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSyncReadMemWriteCollisionTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester::final() {
    VSyncReadMemWriteCollisionTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSyncReadMemWriteCollisionTester___024root__trace_init_top(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSyncReadMemWriteCollisionTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemWriteCollisionTester___024root*>(voidSelf);
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSyncReadMemWriteCollisionTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root__trace_register(VSyncReadMemWriteCollisionTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSyncReadMemWriteCollisionTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
