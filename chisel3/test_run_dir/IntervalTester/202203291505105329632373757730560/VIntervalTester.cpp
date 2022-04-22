// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalTester.h"
#include "VIntervalTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalTester::VIntervalTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalTester::VIntervalTester(const char* _vcname__)
    : VIntervalTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalTester::~VIntervalTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalTester___024root___eval_initial(VIntervalTester___024root* vlSelf);
void VIntervalTester___024root___eval_settle(VIntervalTester___024root* vlSelf);
void VIntervalTester___024root___eval(VIntervalTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalTester___024root___eval_debug_assertions(VIntervalTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalTester___024root___final(VIntervalTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalTester::final() {
    VIntervalTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalTester___024root__trace_init_top(VIntervalTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalTester___024root*>(voidSelf);
    VIntervalTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalTester___024root__trace_register(VIntervalTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
