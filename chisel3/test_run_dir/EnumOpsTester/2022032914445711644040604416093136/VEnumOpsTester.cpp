// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VEnumOpsTester.h"
#include "VEnumOpsTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VEnumOpsTester::VEnumOpsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VEnumOpsTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VEnumOpsTester::VEnumOpsTester(const char* _vcname__)
    : VEnumOpsTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VEnumOpsTester::~VEnumOpsTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VEnumOpsTester___024root___eval_initial(VEnumOpsTester___024root* vlSelf);
void VEnumOpsTester___024root___eval_settle(VEnumOpsTester___024root* vlSelf);
void VEnumOpsTester___024root___eval(VEnumOpsTester___024root* vlSelf);
#ifdef VL_DEBUG
void VEnumOpsTester___024root___eval_debug_assertions(VEnumOpsTester___024root* vlSelf);
#endif  // VL_DEBUG
void VEnumOpsTester___024root___final(VEnumOpsTester___024root* vlSelf);

static void _eval_initial_loop(VEnumOpsTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VEnumOpsTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VEnumOpsTester___024root___eval_settle(&(vlSymsp->TOP));
        VEnumOpsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VEnumOpsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEnumOpsTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VEnumOpsTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VEnumOpsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VEnumOpsTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VEnumOpsTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VEnumOpsTester::final() {
    VEnumOpsTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VEnumOpsTester___024root__trace_init_top(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VEnumOpsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnumOpsTester___024root*>(voidSelf);
    VEnumOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VEnumOpsTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VEnumOpsTester___024root__trace_register(VEnumOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VEnumOpsTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VEnumOpsTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
