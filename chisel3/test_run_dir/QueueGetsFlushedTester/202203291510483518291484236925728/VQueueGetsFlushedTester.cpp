// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQueueGetsFlushedTester.h"
#include "VQueueGetsFlushedTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQueueGetsFlushedTester::VQueueGetsFlushedTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VQueueGetsFlushedTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VQueueGetsFlushedTester::VQueueGetsFlushedTester(const char* _vcname__)
    : VQueueGetsFlushedTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VQueueGetsFlushedTester::~VQueueGetsFlushedTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VQueueGetsFlushedTester___024root___eval_initial(VQueueGetsFlushedTester___024root* vlSelf);
void VQueueGetsFlushedTester___024root___eval_settle(VQueueGetsFlushedTester___024root* vlSelf);
void VQueueGetsFlushedTester___024root___eval(VQueueGetsFlushedTester___024root* vlSelf);
#ifdef VL_DEBUG
void VQueueGetsFlushedTester___024root___eval_debug_assertions(VQueueGetsFlushedTester___024root* vlSelf);
#endif  // VL_DEBUG
void VQueueGetsFlushedTester___024root___final(VQueueGetsFlushedTester___024root* vlSelf);

static void _eval_initial_loop(VQueueGetsFlushedTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VQueueGetsFlushedTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VQueueGetsFlushedTester___024root___eval_settle(&(vlSymsp->TOP));
        VQueueGetsFlushedTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VQueueGetsFlushedTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueGetsFlushedTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQueueGetsFlushedTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VQueueGetsFlushedTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VQueueGetsFlushedTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VQueueGetsFlushedTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VQueueGetsFlushedTester::final() {
    VQueueGetsFlushedTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VQueueGetsFlushedTester___024root__trace_init_top(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueGetsFlushedTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueGetsFlushedTester___024root*>(voidSelf);
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VQueueGetsFlushedTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_register(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueGetsFlushedTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQueueGetsFlushedTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
