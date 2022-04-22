// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQueuePipeTester.h"
#include "VQueuePipeTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQueuePipeTester::VQueuePipeTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VQueuePipeTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VQueuePipeTester::VQueuePipeTester(const char* _vcname__)
    : VQueuePipeTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VQueuePipeTester::~VQueuePipeTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VQueuePipeTester___024root___eval_initial(VQueuePipeTester___024root* vlSelf);
void VQueuePipeTester___024root___eval_settle(VQueuePipeTester___024root* vlSelf);
void VQueuePipeTester___024root___eval(VQueuePipeTester___024root* vlSelf);
#ifdef VL_DEBUG
void VQueuePipeTester___024root___eval_debug_assertions(VQueuePipeTester___024root* vlSelf);
#endif  // VL_DEBUG
void VQueuePipeTester___024root___final(VQueuePipeTester___024root* vlSelf);

static void _eval_initial_loop(VQueuePipeTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VQueuePipeTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VQueuePipeTester___024root___eval_settle(&(vlSymsp->TOP));
        VQueuePipeTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VQueuePipeTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueuePipeTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQueuePipeTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VQueuePipeTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VQueuePipeTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VQueuePipeTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VQueuePipeTester::final() {
    VQueuePipeTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VQueuePipeTester___024root__trace_init_top(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueuePipeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueuePipeTester___024root*>(voidSelf);
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VQueuePipeTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VQueuePipeTester___024root__trace_register(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueuePipeTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQueuePipeTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
