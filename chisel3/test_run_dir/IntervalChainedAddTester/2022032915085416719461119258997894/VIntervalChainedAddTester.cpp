// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalChainedAddTester.h"
#include "VIntervalChainedAddTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalChainedAddTester::VIntervalChainedAddTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalChainedAddTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalChainedAddTester::VIntervalChainedAddTester(const char* _vcname__)
    : VIntervalChainedAddTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalChainedAddTester::~VIntervalChainedAddTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalChainedAddTester___024root___eval_initial(VIntervalChainedAddTester___024root* vlSelf);
void VIntervalChainedAddTester___024root___eval_settle(VIntervalChainedAddTester___024root* vlSelf);
void VIntervalChainedAddTester___024root___eval(VIntervalChainedAddTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalChainedAddTester___024root___eval_debug_assertions(VIntervalChainedAddTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalChainedAddTester___024root___final(VIntervalChainedAddTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalChainedAddTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalChainedAddTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalChainedAddTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalChainedAddTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalChainedAddTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalChainedAddTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalChainedAddTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalChainedAddTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalChainedAddTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalChainedAddTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalChainedAddTester::final() {
    VIntervalChainedAddTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalChainedAddTester___024root__trace_init_top(VIntervalChainedAddTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalChainedAddTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalChainedAddTester___024root*>(voidSelf);
    VIntervalChainedAddTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalChainedAddTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalChainedAddTester___024root__trace_register(VIntervalChainedAddTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalChainedAddTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalChainedAddTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
