// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDequeueFullQueueEdgecaseTester.h"
#include "VDequeueFullQueueEdgecaseTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDequeueFullQueueEdgecaseTester::VDequeueFullQueueEdgecaseTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VDequeueFullQueueEdgecaseTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VDequeueFullQueueEdgecaseTester::VDequeueFullQueueEdgecaseTester(const char* _vcname__)
    : VDequeueFullQueueEdgecaseTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VDequeueFullQueueEdgecaseTester::~VDequeueFullQueueEdgecaseTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDequeueFullQueueEdgecaseTester___024root___eval_initial(VDequeueFullQueueEdgecaseTester___024root* vlSelf);
void VDequeueFullQueueEdgecaseTester___024root___eval_settle(VDequeueFullQueueEdgecaseTester___024root* vlSelf);
void VDequeueFullQueueEdgecaseTester___024root___eval(VDequeueFullQueueEdgecaseTester___024root* vlSelf);
#ifdef VL_DEBUG
void VDequeueFullQueueEdgecaseTester___024root___eval_debug_assertions(VDequeueFullQueueEdgecaseTester___024root* vlSelf);
#endif  // VL_DEBUG
void VDequeueFullQueueEdgecaseTester___024root___final(VDequeueFullQueueEdgecaseTester___024root* vlSelf);

static void _eval_initial_loop(VDequeueFullQueueEdgecaseTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDequeueFullQueueEdgecaseTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDequeueFullQueueEdgecaseTester___024root___eval_settle(&(vlSymsp->TOP));
        VDequeueFullQueueEdgecaseTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VDequeueFullQueueEdgecaseTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDequeueFullQueueEdgecaseTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDequeueFullQueueEdgecaseTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDequeueFullQueueEdgecaseTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VDequeueFullQueueEdgecaseTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VDequeueFullQueueEdgecaseTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester::final() {
    VDequeueFullQueueEdgecaseTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VDequeueFullQueueEdgecaseTester___024root__trace_init_top(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDequeueFullQueueEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDequeueFullQueueEdgecaseTester___024root*>(voidSelf);
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDequeueFullQueueEdgecaseTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_register(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDequeueFullQueueEdgecaseTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
