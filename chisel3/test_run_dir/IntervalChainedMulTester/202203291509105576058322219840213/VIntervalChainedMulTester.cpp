// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalChainedMulTester.h"
#include "VIntervalChainedMulTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalChainedMulTester::VIntervalChainedMulTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalChainedMulTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalChainedMulTester::VIntervalChainedMulTester(const char* _vcname__)
    : VIntervalChainedMulTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalChainedMulTester::~VIntervalChainedMulTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalChainedMulTester___024root___eval_initial(VIntervalChainedMulTester___024root* vlSelf);
void VIntervalChainedMulTester___024root___eval_settle(VIntervalChainedMulTester___024root* vlSelf);
void VIntervalChainedMulTester___024root___eval(VIntervalChainedMulTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalChainedMulTester___024root___eval_debug_assertions(VIntervalChainedMulTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalChainedMulTester___024root___final(VIntervalChainedMulTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalChainedMulTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalChainedMulTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalChainedMulTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalChainedMulTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalChainedMulTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalChainedMulTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalChainedMulTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalChainedMulTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalChainedMulTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalChainedMulTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalChainedMulTester::final() {
    VIntervalChainedMulTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalChainedMulTester___024root__trace_init_top(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalChainedMulTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalChainedMulTester___024root*>(voidSelf);
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalChainedMulTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_register(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalChainedMulTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalChainedMulTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
