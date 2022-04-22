// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VASCIIPrintableTester.h"
#include "VASCIIPrintableTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VASCIIPrintableTester::VASCIIPrintableTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VASCIIPrintableTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VASCIIPrintableTester::VASCIIPrintableTester(const char* _vcname__)
    : VASCIIPrintableTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VASCIIPrintableTester::~VASCIIPrintableTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VASCIIPrintableTester___024root___eval_initial(VASCIIPrintableTester___024root* vlSelf);
void VASCIIPrintableTester___024root___eval_settle(VASCIIPrintableTester___024root* vlSelf);
void VASCIIPrintableTester___024root___eval(VASCIIPrintableTester___024root* vlSelf);
#ifdef VL_DEBUG
void VASCIIPrintableTester___024root___eval_debug_assertions(VASCIIPrintableTester___024root* vlSelf);
#endif  // VL_DEBUG
void VASCIIPrintableTester___024root___final(VASCIIPrintableTester___024root* vlSelf);

static void _eval_initial_loop(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VASCIIPrintableTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VASCIIPrintableTester___024root___eval_settle(&(vlSymsp->TOP));
        VASCIIPrintableTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VASCIIPrintableTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VASCIIPrintableTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VASCIIPrintableTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VASCIIPrintableTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VASCIIPrintableTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VASCIIPrintableTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VASCIIPrintableTester::final() {
    VASCIIPrintableTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VASCIIPrintableTester___024root__trace_init_top(VASCIIPrintableTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VASCIIPrintableTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VASCIIPrintableTester___024root*>(voidSelf);
    VASCIIPrintableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VASCIIPrintableTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VASCIIPrintableTester___024root__trace_register(VASCIIPrintableTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VASCIIPrintableTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VASCIIPrintableTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
