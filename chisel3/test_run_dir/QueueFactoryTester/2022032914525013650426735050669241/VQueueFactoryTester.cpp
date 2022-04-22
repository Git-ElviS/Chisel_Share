// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQueueFactoryTester.h"
#include "VQueueFactoryTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQueueFactoryTester::VQueueFactoryTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VQueueFactoryTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VQueueFactoryTester::VQueueFactoryTester(const char* _vcname__)
    : VQueueFactoryTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VQueueFactoryTester::~VQueueFactoryTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VQueueFactoryTester___024root___eval_initial(VQueueFactoryTester___024root* vlSelf);
void VQueueFactoryTester___024root___eval_settle(VQueueFactoryTester___024root* vlSelf);
void VQueueFactoryTester___024root___eval(VQueueFactoryTester___024root* vlSelf);
#ifdef VL_DEBUG
void VQueueFactoryTester___024root___eval_debug_assertions(VQueueFactoryTester___024root* vlSelf);
#endif  // VL_DEBUG
void VQueueFactoryTester___024root___final(VQueueFactoryTester___024root* vlSelf);

static void _eval_initial_loop(VQueueFactoryTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VQueueFactoryTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VQueueFactoryTester___024root___eval_settle(&(vlSymsp->TOP));
        VQueueFactoryTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VQueueFactoryTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueFactoryTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQueueFactoryTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VQueueFactoryTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VQueueFactoryTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VQueueFactoryTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VQueueFactoryTester::final() {
    VQueueFactoryTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VQueueFactoryTester___024root__trace_init_top(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueFactoryTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueFactoryTester___024root*>(voidSelf);
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VQueueFactoryTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_register(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueFactoryTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQueueFactoryTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
