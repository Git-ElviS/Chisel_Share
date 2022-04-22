// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VParameterizedVendingMachineTester.h"
#include "VParameterizedVendingMachineTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VParameterizedVendingMachineTester::VParameterizedVendingMachineTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VParameterizedVendingMachineTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VParameterizedVendingMachineTester::VParameterizedVendingMachineTester(const char* _vcname__)
    : VParameterizedVendingMachineTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VParameterizedVendingMachineTester::~VParameterizedVendingMachineTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VParameterizedVendingMachineTester___024root___eval_initial(VParameterizedVendingMachineTester___024root* vlSelf);
void VParameterizedVendingMachineTester___024root___eval_settle(VParameterizedVendingMachineTester___024root* vlSelf);
void VParameterizedVendingMachineTester___024root___eval(VParameterizedVendingMachineTester___024root* vlSelf);
#ifdef VL_DEBUG
void VParameterizedVendingMachineTester___024root___eval_debug_assertions(VParameterizedVendingMachineTester___024root* vlSelf);
#endif  // VL_DEBUG
void VParameterizedVendingMachineTester___024root___final(VParameterizedVendingMachineTester___024root* vlSelf);

static void _eval_initial_loop(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VParameterizedVendingMachineTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VParameterizedVendingMachineTester___024root___eval_settle(&(vlSymsp->TOP));
        VParameterizedVendingMachineTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VParameterizedVendingMachineTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VParameterizedVendingMachineTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VParameterizedVendingMachineTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VParameterizedVendingMachineTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VParameterizedVendingMachineTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VParameterizedVendingMachineTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VParameterizedVendingMachineTester::final() {
    VParameterizedVendingMachineTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VParameterizedVendingMachineTester___024root__trace_init_top(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VParameterizedVendingMachineTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_register(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedVendingMachineTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VParameterizedVendingMachineTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
