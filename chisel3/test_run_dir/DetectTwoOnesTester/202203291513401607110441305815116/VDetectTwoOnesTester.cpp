// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDetectTwoOnesTester.h"
#include "VDetectTwoOnesTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDetectTwoOnesTester::VDetectTwoOnesTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VDetectTwoOnesTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VDetectTwoOnesTester::VDetectTwoOnesTester(const char* _vcname__)
    : VDetectTwoOnesTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VDetectTwoOnesTester::~VDetectTwoOnesTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDetectTwoOnesTester___024root___eval_initial(VDetectTwoOnesTester___024root* vlSelf);
void VDetectTwoOnesTester___024root___eval_settle(VDetectTwoOnesTester___024root* vlSelf);
void VDetectTwoOnesTester___024root___eval(VDetectTwoOnesTester___024root* vlSelf);
#ifdef VL_DEBUG
void VDetectTwoOnesTester___024root___eval_debug_assertions(VDetectTwoOnesTester___024root* vlSelf);
#endif  // VL_DEBUG
void VDetectTwoOnesTester___024root___final(VDetectTwoOnesTester___024root* vlSelf);

static void _eval_initial_loop(VDetectTwoOnesTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDetectTwoOnesTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDetectTwoOnesTester___024root___eval_settle(&(vlSymsp->TOP));
        VDetectTwoOnesTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VDetectTwoOnesTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDetectTwoOnesTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDetectTwoOnesTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDetectTwoOnesTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VDetectTwoOnesTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VDetectTwoOnesTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VDetectTwoOnesTester::final() {
    VDetectTwoOnesTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VDetectTwoOnesTester___024root__trace_init_top(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDetectTwoOnesTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDetectTwoOnesTester___024root*>(voidSelf);
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDetectTwoOnesTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_register(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDetectTwoOnesTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDetectTwoOnesTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
