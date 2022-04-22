// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAspectTester.h"
#include "VAspectTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAspectTester::VAspectTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAspectTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAspectTester::VAspectTester(const char* _vcname__)
    : VAspectTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAspectTester::~VAspectTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAspectTester___024root___eval_initial(VAspectTester___024root* vlSelf);
void VAspectTester___024root___eval_settle(VAspectTester___024root* vlSelf);
void VAspectTester___024root___eval(VAspectTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAspectTester___024root___eval_debug_assertions(VAspectTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAspectTester___024root___final(VAspectTester___024root* vlSelf);

static void _eval_initial_loop(VAspectTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAspectTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAspectTester___024root___eval_settle(&(vlSymsp->TOP));
        VAspectTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAspectTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAspectTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAspectTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAspectTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAspectTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAspectTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAspectTester::final() {
    VAspectTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAspectTester___024root__trace_init_top(VAspectTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAspectTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAspectTester___024root*>(voidSelf);
    VAspectTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAspectTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAspectTester___024root__trace_register(VAspectTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAspectTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAspectTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
