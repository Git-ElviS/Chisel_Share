// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIterateTester.h"
#include "VIterateTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIterateTester::VIterateTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIterateTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIterateTester::VIterateTester(const char* _vcname__)
    : VIterateTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIterateTester::~VIterateTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIterateTester___024root___eval_initial(VIterateTester___024root* vlSelf);
void VIterateTester___024root___eval_settle(VIterateTester___024root* vlSelf);
void VIterateTester___024root___eval(VIterateTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIterateTester___024root___eval_debug_assertions(VIterateTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIterateTester___024root___final(VIterateTester___024root* vlSelf);

static void _eval_initial_loop(VIterateTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIterateTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIterateTester___024root___eval_settle(&(vlSymsp->TOP));
        VIterateTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIterateTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIterateTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIterateTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIterateTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIterateTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIterateTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIterateTester::final() {
    VIterateTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIterateTester___024root__trace_init_top(VIterateTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIterateTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIterateTester___024root*>(voidSelf);
    VIterateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIterateTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIterateTester___024root__trace_register(VIterateTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIterateTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIterateTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
