// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBitwiseOpsTester.h"
#include "VBitwiseOpsTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBitwiseOpsTester::VBitwiseOpsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBitwiseOpsTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBitwiseOpsTester::VBitwiseOpsTester(const char* _vcname__)
    : VBitwiseOpsTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBitwiseOpsTester::~VBitwiseOpsTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBitwiseOpsTester___024root___eval_initial(VBitwiseOpsTester___024root* vlSelf);
void VBitwiseOpsTester___024root___eval_settle(VBitwiseOpsTester___024root* vlSelf);
void VBitwiseOpsTester___024root___eval(VBitwiseOpsTester___024root* vlSelf);
#ifdef VL_DEBUG
void VBitwiseOpsTester___024root___eval_debug_assertions(VBitwiseOpsTester___024root* vlSelf);
#endif  // VL_DEBUG
void VBitwiseOpsTester___024root___final(VBitwiseOpsTester___024root* vlSelf);

static void _eval_initial_loop(VBitwiseOpsTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBitwiseOpsTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBitwiseOpsTester___024root___eval_settle(&(vlSymsp->TOP));
        VBitwiseOpsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBitwiseOpsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBitwiseOpsTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBitwiseOpsTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBitwiseOpsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBitwiseOpsTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBitwiseOpsTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBitwiseOpsTester::final() {
    VBitwiseOpsTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBitwiseOpsTester___024root__trace_init_top(VBitwiseOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBitwiseOpsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBitwiseOpsTester___024root*>(voidSelf);
    VBitwiseOpsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBitwiseOpsTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBitwiseOpsTester___024root__trace_register(VBitwiseOpsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBitwiseOpsTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBitwiseOpsTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
