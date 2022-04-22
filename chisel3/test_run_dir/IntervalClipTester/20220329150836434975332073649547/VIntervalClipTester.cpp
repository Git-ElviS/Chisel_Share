// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalClipTester.h"
#include "VIntervalClipTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalClipTester::VIntervalClipTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalClipTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalClipTester::VIntervalClipTester(const char* _vcname__)
    : VIntervalClipTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalClipTester::~VIntervalClipTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalClipTester___024root___eval_initial(VIntervalClipTester___024root* vlSelf);
void VIntervalClipTester___024root___eval_settle(VIntervalClipTester___024root* vlSelf);
void VIntervalClipTester___024root___eval(VIntervalClipTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalClipTester___024root___eval_debug_assertions(VIntervalClipTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalClipTester___024root___final(VIntervalClipTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalClipTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalClipTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalClipTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalClipTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalClipTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalClipTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalClipTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalClipTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalClipTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalClipTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalClipTester::final() {
    VIntervalClipTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalClipTester___024root__trace_init_top(VIntervalClipTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalClipTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalClipTester___024root*>(voidSelf);
    VIntervalClipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalClipTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalClipTester___024root__trace_register(VIntervalClipTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalClipTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalClipTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
