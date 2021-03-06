// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalRegisterTester.h"
#include "VIntervalRegisterTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalRegisterTester::VIntervalRegisterTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalRegisterTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalRegisterTester::VIntervalRegisterTester(const char* _vcname__)
    : VIntervalRegisterTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalRegisterTester::~VIntervalRegisterTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalRegisterTester___024root___eval_initial(VIntervalRegisterTester___024root* vlSelf);
void VIntervalRegisterTester___024root___eval_settle(VIntervalRegisterTester___024root* vlSelf);
void VIntervalRegisterTester___024root___eval(VIntervalRegisterTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalRegisterTester___024root___eval_debug_assertions(VIntervalRegisterTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalRegisterTester___024root___final(VIntervalRegisterTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalRegisterTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalRegisterTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalRegisterTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalRegisterTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalRegisterTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalRegisterTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalRegisterTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalRegisterTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalRegisterTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalRegisterTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalRegisterTester::final() {
    VIntervalRegisterTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalRegisterTester___024root__trace_init_top(VIntervalRegisterTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalRegisterTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalRegisterTester___024root*>(voidSelf);
    VIntervalRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalRegisterTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalRegisterTester___024root__trace_register(VIntervalRegisterTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalRegisterTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalRegisterTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
