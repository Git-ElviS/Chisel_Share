// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VThingsPassThroughFlushQueueTester.h"
#include "VThingsPassThroughFlushQueueTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VThingsPassThroughFlushQueueTester::VThingsPassThroughFlushQueueTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VThingsPassThroughFlushQueueTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VThingsPassThroughFlushQueueTester::VThingsPassThroughFlushQueueTester(const char* _vcname__)
    : VThingsPassThroughFlushQueueTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VThingsPassThroughFlushQueueTester::~VThingsPassThroughFlushQueueTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VThingsPassThroughFlushQueueTester___024root___eval_initial(VThingsPassThroughFlushQueueTester___024root* vlSelf);
void VThingsPassThroughFlushQueueTester___024root___eval_settle(VThingsPassThroughFlushQueueTester___024root* vlSelf);
void VThingsPassThroughFlushQueueTester___024root___eval(VThingsPassThroughFlushQueueTester___024root* vlSelf);
#ifdef VL_DEBUG
void VThingsPassThroughFlushQueueTester___024root___eval_debug_assertions(VThingsPassThroughFlushQueueTester___024root* vlSelf);
#endif  // VL_DEBUG
void VThingsPassThroughFlushQueueTester___024root___final(VThingsPassThroughFlushQueueTester___024root* vlSelf);

static void _eval_initial_loop(VThingsPassThroughFlushQueueTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VThingsPassThroughFlushQueueTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VThingsPassThroughFlushQueueTester___024root___eval_settle(&(vlSymsp->TOP));
        VThingsPassThroughFlushQueueTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VThingsPassThroughFlushQueueTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VThingsPassThroughFlushQueueTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VThingsPassThroughFlushQueueTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VThingsPassThroughFlushQueueTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VThingsPassThroughFlushQueueTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VThingsPassThroughFlushQueueTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester::final() {
    VThingsPassThroughFlushQueueTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VThingsPassThroughFlushQueueTester___024root__trace_init_top(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VThingsPassThroughFlushQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VThingsPassThroughFlushQueueTester___024root*>(voidSelf);
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VThingsPassThroughFlushQueueTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_register(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VThingsPassThroughFlushQueueTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
