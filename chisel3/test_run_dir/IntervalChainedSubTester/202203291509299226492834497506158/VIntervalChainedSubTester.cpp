// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalChainedSubTester.h"
#include "VIntervalChainedSubTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalChainedSubTester::VIntervalChainedSubTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalChainedSubTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalChainedSubTester::VIntervalChainedSubTester(const char* _vcname__)
    : VIntervalChainedSubTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalChainedSubTester::~VIntervalChainedSubTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalChainedSubTester___024root___eval_initial(VIntervalChainedSubTester___024root* vlSelf);
void VIntervalChainedSubTester___024root___eval_settle(VIntervalChainedSubTester___024root* vlSelf);
void VIntervalChainedSubTester___024root___eval(VIntervalChainedSubTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalChainedSubTester___024root___eval_debug_assertions(VIntervalChainedSubTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalChainedSubTester___024root___final(VIntervalChainedSubTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalChainedSubTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalChainedSubTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalChainedSubTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalChainedSubTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalChainedSubTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalChainedSubTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalChainedSubTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalChainedSubTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalChainedSubTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalChainedSubTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalChainedSubTester::final() {
    VIntervalChainedSubTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalChainedSubTester___024root__trace_init_top(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalChainedSubTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalChainedSubTester___024root*>(voidSelf);
    VIntervalChainedSubTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalChainedSubTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_register(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalChainedSubTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalChainedSubTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
