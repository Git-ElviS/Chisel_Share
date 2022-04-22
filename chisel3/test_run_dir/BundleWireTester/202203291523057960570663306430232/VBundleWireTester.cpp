// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBundleWireTester.h"
#include "VBundleWireTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBundleWireTester::VBundleWireTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBundleWireTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBundleWireTester::VBundleWireTester(const char* _vcname__)
    : VBundleWireTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBundleWireTester::~VBundleWireTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBundleWireTester___024root___eval_initial(VBundleWireTester___024root* vlSelf);
void VBundleWireTester___024root___eval_settle(VBundleWireTester___024root* vlSelf);
void VBundleWireTester___024root___eval(VBundleWireTester___024root* vlSelf);
#ifdef VL_DEBUG
void VBundleWireTester___024root___eval_debug_assertions(VBundleWireTester___024root* vlSelf);
#endif  // VL_DEBUG
void VBundleWireTester___024root___final(VBundleWireTester___024root* vlSelf);

static void _eval_initial_loop(VBundleWireTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBundleWireTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBundleWireTester___024root___eval_settle(&(vlSymsp->TOP));
        VBundleWireTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBundleWireTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBundleWireTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBundleWireTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBundleWireTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBundleWireTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBundleWireTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBundleWireTester::final() {
    VBundleWireTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBundleWireTester___024root__trace_init_top(VBundleWireTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBundleWireTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBundleWireTester___024root*>(voidSelf);
    VBundleWireTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBundleWireTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBundleWireTester___024root__trace_register(VBundleWireTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBundleWireTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBundleWireTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
