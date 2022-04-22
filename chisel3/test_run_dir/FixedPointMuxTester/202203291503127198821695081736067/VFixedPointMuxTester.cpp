// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFixedPointMuxTester.h"
#include "VFixedPointMuxTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFixedPointMuxTester::VFixedPointMuxTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFixedPointMuxTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFixedPointMuxTester::VFixedPointMuxTester(const char* _vcname__)
    : VFixedPointMuxTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFixedPointMuxTester::~VFixedPointMuxTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFixedPointMuxTester___024root___eval_initial(VFixedPointMuxTester___024root* vlSelf);
void VFixedPointMuxTester___024root___eval_settle(VFixedPointMuxTester___024root* vlSelf);
void VFixedPointMuxTester___024root___eval(VFixedPointMuxTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFixedPointMuxTester___024root___eval_debug_assertions(VFixedPointMuxTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFixedPointMuxTester___024root___final(VFixedPointMuxTester___024root* vlSelf);

static void _eval_initial_loop(VFixedPointMuxTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFixedPointMuxTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFixedPointMuxTester___024root___eval_settle(&(vlSymsp->TOP));
        VFixedPointMuxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFixedPointMuxTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFixedPointMuxTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFixedPointMuxTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFixedPointMuxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFixedPointMuxTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFixedPointMuxTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFixedPointMuxTester::final() {
    VFixedPointMuxTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFixedPointMuxTester___024root__trace_init_top(VFixedPointMuxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFixedPointMuxTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFixedPointMuxTester___024root*>(voidSelf);
    VFixedPointMuxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFixedPointMuxTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFixedPointMuxTester___024root__trace_register(VFixedPointMuxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFixedPointMuxTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFixedPointMuxTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
