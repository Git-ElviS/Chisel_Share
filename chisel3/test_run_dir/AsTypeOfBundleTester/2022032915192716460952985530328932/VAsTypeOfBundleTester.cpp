// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsTypeOfBundleTester.h"
#include "VAsTypeOfBundleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsTypeOfBundleTester::VAsTypeOfBundleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsTypeOfBundleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsTypeOfBundleTester::VAsTypeOfBundleTester(const char* _vcname__)
    : VAsTypeOfBundleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsTypeOfBundleTester::~VAsTypeOfBundleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsTypeOfBundleTester___024root___eval_initial(VAsTypeOfBundleTester___024root* vlSelf);
void VAsTypeOfBundleTester___024root___eval_settle(VAsTypeOfBundleTester___024root* vlSelf);
void VAsTypeOfBundleTester___024root___eval(VAsTypeOfBundleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsTypeOfBundleTester___024root___eval_debug_assertions(VAsTypeOfBundleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsTypeOfBundleTester___024root___final(VAsTypeOfBundleTester___024root* vlSelf);

static void _eval_initial_loop(VAsTypeOfBundleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsTypeOfBundleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsTypeOfBundleTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsTypeOfBundleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAsTypeOfBundleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsTypeOfBundleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsTypeOfBundleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsTypeOfBundleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsTypeOfBundleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsTypeOfBundleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsTypeOfBundleTester::final() {
    VAsTypeOfBundleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsTypeOfBundleTester___024root__trace_init_top(VAsTypeOfBundleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsTypeOfBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsTypeOfBundleTester___024root*>(voidSelf);
    VAsTypeOfBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsTypeOfBundleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsTypeOfBundleTester___024root__trace_register(VAsTypeOfBundleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsTypeOfBundleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsTypeOfBundleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
