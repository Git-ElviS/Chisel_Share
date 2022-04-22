// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUIntOpsTester.h"
#include "VUIntOpsTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VUIntOpsTester::VUIntOpsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VUIntOpsTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VUIntOpsTester::VUIntOpsTester(const char* _vcname__)
    : VUIntOpsTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VUIntOpsTester::~VUIntOpsTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VUIntOpsTester___024root___eval_initial(VUIntOpsTester___024root* vlSelf);
void VUIntOpsTester___024root___eval_settle(VUIntOpsTester___024root* vlSelf);
void VUIntOpsTester___024root___eval(VUIntOpsTester___024root* vlSelf);
#ifdef VL_DEBUG
void VUIntOpsTester___024root___eval_debug_assertions(VUIntOpsTester___024root* vlSelf);
#endif  // VL_DEBUG
void VUIntOpsTester___024root___final(VUIntOpsTester___024root* vlSelf);

static void _eval_initial_loop(VUIntOpsTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VUIntOpsTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VUIntOpsTester___024root___eval_settle(&(vlSymsp->TOP));
        VUIntOpsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VUIntOpsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUIntOpsTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUIntOpsTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VUIntOpsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VUIntOpsTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VUIntOpsTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VUIntOpsTester::final() {
    VUIntOpsTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VUIntOpsTester___024root__trace_init_top(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUIntOpsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUIntOpsTester___024root*>(voidSelf);
    VUIntOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VUIntOpsTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VUIntOpsTester___024root__trace_register(VUIntOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUIntOpsTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUIntOpsTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
