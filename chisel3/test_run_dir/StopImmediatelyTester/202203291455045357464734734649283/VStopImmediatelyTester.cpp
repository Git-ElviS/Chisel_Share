// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VStopImmediatelyTester.h"
#include "VStopImmediatelyTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VStopImmediatelyTester::VStopImmediatelyTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VStopImmediatelyTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VStopImmediatelyTester::VStopImmediatelyTester(const char* _vcname__)
    : VStopImmediatelyTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VStopImmediatelyTester::~VStopImmediatelyTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VStopImmediatelyTester___024root___eval_initial(VStopImmediatelyTester___024root* vlSelf);
void VStopImmediatelyTester___024root___eval_settle(VStopImmediatelyTester___024root* vlSelf);
void VStopImmediatelyTester___024root___eval(VStopImmediatelyTester___024root* vlSelf);
#ifdef VL_DEBUG
void VStopImmediatelyTester___024root___eval_debug_assertions(VStopImmediatelyTester___024root* vlSelf);
#endif  // VL_DEBUG
void VStopImmediatelyTester___024root___final(VStopImmediatelyTester___024root* vlSelf);

static void _eval_initial_loop(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VStopImmediatelyTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VStopImmediatelyTester___024root___eval_settle(&(vlSymsp->TOP));
        VStopImmediatelyTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VStopImmediatelyTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStopImmediatelyTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VStopImmediatelyTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VStopImmediatelyTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VStopImmediatelyTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VStopImmediatelyTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VStopImmediatelyTester::final() {
    VStopImmediatelyTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VStopImmediatelyTester___024root__trace_init_top(VStopImmediatelyTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VStopImmediatelyTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStopImmediatelyTester___024root*>(voidSelf);
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VStopImmediatelyTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VStopImmediatelyTester___024root__trace_register(VStopImmediatelyTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VStopImmediatelyTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VStopImmediatelyTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
