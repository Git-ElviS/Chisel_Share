// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFullQueueFlushEdgecaseTester.h"
#include "VFullQueueFlushEdgecaseTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFullQueueFlushEdgecaseTester::VFullQueueFlushEdgecaseTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFullQueueFlushEdgecaseTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFullQueueFlushEdgecaseTester::VFullQueueFlushEdgecaseTester(const char* _vcname__)
    : VFullQueueFlushEdgecaseTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFullQueueFlushEdgecaseTester::~VFullQueueFlushEdgecaseTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFullQueueFlushEdgecaseTester___024root___eval_initial(VFullQueueFlushEdgecaseTester___024root* vlSelf);
void VFullQueueFlushEdgecaseTester___024root___eval_settle(VFullQueueFlushEdgecaseTester___024root* vlSelf);
void VFullQueueFlushEdgecaseTester___024root___eval(VFullQueueFlushEdgecaseTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFullQueueFlushEdgecaseTester___024root___eval_debug_assertions(VFullQueueFlushEdgecaseTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFullQueueFlushEdgecaseTester___024root___final(VFullQueueFlushEdgecaseTester___024root* vlSelf);

static void _eval_initial_loop(VFullQueueFlushEdgecaseTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFullQueueFlushEdgecaseTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFullQueueFlushEdgecaseTester___024root___eval_settle(&(vlSymsp->TOP));
        VFullQueueFlushEdgecaseTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFullQueueFlushEdgecaseTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFullQueueFlushEdgecaseTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFullQueueFlushEdgecaseTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFullQueueFlushEdgecaseTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFullQueueFlushEdgecaseTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFullQueueFlushEdgecaseTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester::final() {
    VFullQueueFlushEdgecaseTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFullQueueFlushEdgecaseTester___024root__trace_init_top(VFullQueueFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFullQueueFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFullQueueFlushEdgecaseTester___024root*>(voidSelf);
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFullQueueFlushEdgecaseTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester___024root__trace_register(VFullQueueFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFullQueueFlushEdgecaseTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
