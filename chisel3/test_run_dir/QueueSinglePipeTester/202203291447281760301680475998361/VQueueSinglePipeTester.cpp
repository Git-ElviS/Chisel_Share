// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQueueSinglePipeTester.h"
#include "VQueueSinglePipeTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQueueSinglePipeTester::VQueueSinglePipeTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VQueueSinglePipeTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VQueueSinglePipeTester::VQueueSinglePipeTester(const char* _vcname__)
    : VQueueSinglePipeTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VQueueSinglePipeTester::~VQueueSinglePipeTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VQueueSinglePipeTester___024root___eval_initial(VQueueSinglePipeTester___024root* vlSelf);
void VQueueSinglePipeTester___024root___eval_settle(VQueueSinglePipeTester___024root* vlSelf);
void VQueueSinglePipeTester___024root___eval(VQueueSinglePipeTester___024root* vlSelf);
#ifdef VL_DEBUG
void VQueueSinglePipeTester___024root___eval_debug_assertions(VQueueSinglePipeTester___024root* vlSelf);
#endif  // VL_DEBUG
void VQueueSinglePipeTester___024root___final(VQueueSinglePipeTester___024root* vlSelf);

static void _eval_initial_loop(VQueueSinglePipeTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VQueueSinglePipeTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VQueueSinglePipeTester___024root___eval_settle(&(vlSymsp->TOP));
        VQueueSinglePipeTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VQueueSinglePipeTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueSinglePipeTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQueueSinglePipeTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VQueueSinglePipeTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VQueueSinglePipeTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VQueueSinglePipeTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VQueueSinglePipeTester::final() {
    VQueueSinglePipeTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VQueueSinglePipeTester___024root__trace_init_top(VQueueSinglePipeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueSinglePipeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueSinglePipeTester___024root*>(voidSelf);
    VQueueSinglePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VQueueSinglePipeTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VQueueSinglePipeTester___024root__trace_register(VQueueSinglePipeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueSinglePipeTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQueueSinglePipeTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
