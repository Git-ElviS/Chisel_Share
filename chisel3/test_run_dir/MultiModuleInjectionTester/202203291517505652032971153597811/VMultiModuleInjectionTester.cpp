// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMultiModuleInjectionTester.h"
#include "VMultiModuleInjectionTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMultiModuleInjectionTester::VMultiModuleInjectionTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMultiModuleInjectionTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMultiModuleInjectionTester::VMultiModuleInjectionTester(const char* _vcname__)
    : VMultiModuleInjectionTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMultiModuleInjectionTester::~VMultiModuleInjectionTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMultiModuleInjectionTester___024root___eval_initial(VMultiModuleInjectionTester___024root* vlSelf);
void VMultiModuleInjectionTester___024root___eval_settle(VMultiModuleInjectionTester___024root* vlSelf);
void VMultiModuleInjectionTester___024root___eval(VMultiModuleInjectionTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMultiModuleInjectionTester___024root___eval_debug_assertions(VMultiModuleInjectionTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMultiModuleInjectionTester___024root___final(VMultiModuleInjectionTester___024root* vlSelf);

static void _eval_initial_loop(VMultiModuleInjectionTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMultiModuleInjectionTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMultiModuleInjectionTester___024root___eval_settle(&(vlSymsp->TOP));
        VMultiModuleInjectionTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMultiModuleInjectionTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiModuleInjectionTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMultiModuleInjectionTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMultiModuleInjectionTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMultiModuleInjectionTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMultiModuleInjectionTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMultiModuleInjectionTester::final() {
    VMultiModuleInjectionTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMultiModuleInjectionTester___024root__trace_init_top(VMultiModuleInjectionTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiModuleInjectionTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiModuleInjectionTester___024root*>(voidSelf);
    VMultiModuleInjectionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMultiModuleInjectionTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMultiModuleInjectionTester___024root__trace_register(VMultiModuleInjectionTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiModuleInjectionTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMultiModuleInjectionTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
