// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSafeCastFromNonLitTester.h"
#include "VSafeCastFromNonLitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSafeCastFromNonLitTester::VSafeCastFromNonLitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSafeCastFromNonLitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSafeCastFromNonLitTester::VSafeCastFromNonLitTester(const char* _vcname__)
    : VSafeCastFromNonLitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSafeCastFromNonLitTester::~VSafeCastFromNonLitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSafeCastFromNonLitTester___024root___eval_initial(VSafeCastFromNonLitTester___024root* vlSelf);
void VSafeCastFromNonLitTester___024root___eval_settle(VSafeCastFromNonLitTester___024root* vlSelf);
void VSafeCastFromNonLitTester___024root___eval(VSafeCastFromNonLitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSafeCastFromNonLitTester___024root___eval_debug_assertions(VSafeCastFromNonLitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSafeCastFromNonLitTester___024root___final(VSafeCastFromNonLitTester___024root* vlSelf);

static void _eval_initial_loop(VSafeCastFromNonLitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSafeCastFromNonLitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSafeCastFromNonLitTester___024root___eval_settle(&(vlSymsp->TOP));
        VSafeCastFromNonLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSafeCastFromNonLitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSafeCastFromNonLitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSafeCastFromNonLitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSafeCastFromNonLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSafeCastFromNonLitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSafeCastFromNonLitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSafeCastFromNonLitTester::final() {
    VSafeCastFromNonLitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSafeCastFromNonLitTester___024root__trace_init_top(VSafeCastFromNonLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSafeCastFromNonLitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSafeCastFromNonLitTester___024root*>(voidSelf);
    VSafeCastFromNonLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSafeCastFromNonLitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSafeCastFromNonLitTester___024root__trace_register(VSafeCastFromNonLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSafeCastFromNonLitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSafeCastFromNonLitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
