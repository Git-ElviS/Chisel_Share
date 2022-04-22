// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsTypeOfBundleZeroWidthTester.h"
#include "VAsTypeOfBundleZeroWidthTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsTypeOfBundleZeroWidthTester::VAsTypeOfBundleZeroWidthTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsTypeOfBundleZeroWidthTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsTypeOfBundleZeroWidthTester::VAsTypeOfBundleZeroWidthTester(const char* _vcname__)
    : VAsTypeOfBundleZeroWidthTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsTypeOfBundleZeroWidthTester::~VAsTypeOfBundleZeroWidthTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsTypeOfBundleZeroWidthTester___024root___eval_initial(VAsTypeOfBundleZeroWidthTester___024root* vlSelf);
void VAsTypeOfBundleZeroWidthTester___024root___eval_settle(VAsTypeOfBundleZeroWidthTester___024root* vlSelf);
void VAsTypeOfBundleZeroWidthTester___024root___eval(VAsTypeOfBundleZeroWidthTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsTypeOfBundleZeroWidthTester___024root___eval_debug_assertions(VAsTypeOfBundleZeroWidthTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsTypeOfBundleZeroWidthTester___024root___final(VAsTypeOfBundleZeroWidthTester___024root* vlSelf);

static void _eval_initial_loop(VAsTypeOfBundleZeroWidthTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsTypeOfBundleZeroWidthTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsTypeOfBundleZeroWidthTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsTypeOfBundleZeroWidthTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAsTypeOfBundleZeroWidthTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsTypeOfBundleZeroWidthTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsTypeOfBundleZeroWidthTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsTypeOfBundleZeroWidthTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsTypeOfBundleZeroWidthTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsTypeOfBundleZeroWidthTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester::final() {
    VAsTypeOfBundleZeroWidthTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsTypeOfBundleZeroWidthTester___024root__trace_init_top(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsTypeOfBundleZeroWidthTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsTypeOfBundleZeroWidthTester___024root*>(voidSelf);
    VAsTypeOfBundleZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsTypeOfBundleZeroWidthTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_register(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsTypeOfBundleZeroWidthTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
