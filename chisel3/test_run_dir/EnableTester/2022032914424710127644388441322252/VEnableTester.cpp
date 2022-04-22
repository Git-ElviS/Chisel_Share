// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VEnableTester.h"
#include "VEnableTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VEnableTester::VEnableTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VEnableTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VEnableTester::VEnableTester(const char* _vcname__)
    : VEnableTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VEnableTester::~VEnableTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VEnableTester___024root___eval_initial(VEnableTester___024root* vlSelf);
void VEnableTester___024root___eval_settle(VEnableTester___024root* vlSelf);
void VEnableTester___024root___eval(VEnableTester___024root* vlSelf);
#ifdef VL_DEBUG
void VEnableTester___024root___eval_debug_assertions(VEnableTester___024root* vlSelf);
#endif  // VL_DEBUG
void VEnableTester___024root___final(VEnableTester___024root* vlSelf);

static void _eval_initial_loop(VEnableTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VEnableTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VEnableTester___024root___eval_settle(&(vlSymsp->TOP));
        VEnableTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VEnableTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEnableTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VEnableTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VEnableTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VEnableTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VEnableTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VEnableTester::final() {
    VEnableTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VEnableTester___024root__trace_init_top(VEnableTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VEnableTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnableTester___024root*>(voidSelf);
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VEnableTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VEnableTester___024root__trace_register(VEnableTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VEnableTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VEnableTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
