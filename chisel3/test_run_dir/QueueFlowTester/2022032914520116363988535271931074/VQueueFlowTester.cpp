// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQueueFlowTester.h"
#include "VQueueFlowTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQueueFlowTester::VQueueFlowTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VQueueFlowTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VQueueFlowTester::VQueueFlowTester(const char* _vcname__)
    : VQueueFlowTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VQueueFlowTester::~VQueueFlowTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VQueueFlowTester___024root___eval_initial(VQueueFlowTester___024root* vlSelf);
void VQueueFlowTester___024root___eval_settle(VQueueFlowTester___024root* vlSelf);
void VQueueFlowTester___024root___eval(VQueueFlowTester___024root* vlSelf);
#ifdef VL_DEBUG
void VQueueFlowTester___024root___eval_debug_assertions(VQueueFlowTester___024root* vlSelf);
#endif  // VL_DEBUG
void VQueueFlowTester___024root___final(VQueueFlowTester___024root* vlSelf);

static void _eval_initial_loop(VQueueFlowTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VQueueFlowTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VQueueFlowTester___024root___eval_settle(&(vlSymsp->TOP));
        VQueueFlowTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VQueueFlowTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueFlowTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQueueFlowTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VQueueFlowTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VQueueFlowTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VQueueFlowTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VQueueFlowTester::final() {
    VQueueFlowTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VQueueFlowTester___024root__trace_init_top(VQueueFlowTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQueueFlowTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueFlowTester___024root*>(voidSelf);
    VQueueFlowTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VQueueFlowTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VQueueFlowTester___024root__trace_register(VQueueFlowTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueFlowTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQueueFlowTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}