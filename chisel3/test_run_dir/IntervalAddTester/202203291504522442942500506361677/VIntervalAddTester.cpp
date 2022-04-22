// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalAddTester.h"
#include "VIntervalAddTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalAddTester::VIntervalAddTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalAddTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalAddTester::VIntervalAddTester(const char* _vcname__)
    : VIntervalAddTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalAddTester::~VIntervalAddTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalAddTester___024root___eval_initial(VIntervalAddTester___024root* vlSelf);
void VIntervalAddTester___024root___eval_settle(VIntervalAddTester___024root* vlSelf);
void VIntervalAddTester___024root___eval(VIntervalAddTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalAddTester___024root___eval_debug_assertions(VIntervalAddTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalAddTester___024root___final(VIntervalAddTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalAddTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalAddTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalAddTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalAddTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalAddTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalAddTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalAddTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalAddTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalAddTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalAddTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalAddTester::final() {
    VIntervalAddTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalAddTester___024root__trace_init_top(VIntervalAddTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalAddTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalAddTester___024root*>(voidSelf);
    VIntervalAddTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalAddTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalAddTester___024root__trace_register(VIntervalAddTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalAddTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalAddTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
