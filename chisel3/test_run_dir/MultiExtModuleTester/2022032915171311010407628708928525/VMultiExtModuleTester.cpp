// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMultiExtModuleTester.h"
#include "VMultiExtModuleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMultiExtModuleTester::VMultiExtModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMultiExtModuleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMultiExtModuleTester::VMultiExtModuleTester(const char* _vcname__)
    : VMultiExtModuleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMultiExtModuleTester::~VMultiExtModuleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMultiExtModuleTester___024root___eval_initial(VMultiExtModuleTester___024root* vlSelf);
void VMultiExtModuleTester___024root___eval_settle(VMultiExtModuleTester___024root* vlSelf);
void VMultiExtModuleTester___024root___eval(VMultiExtModuleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMultiExtModuleTester___024root___eval_debug_assertions(VMultiExtModuleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMultiExtModuleTester___024root___final(VMultiExtModuleTester___024root* vlSelf);

static void _eval_initial_loop(VMultiExtModuleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMultiExtModuleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMultiExtModuleTester___024root___eval_settle(&(vlSymsp->TOP));
        VMultiExtModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMultiExtModuleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiExtModuleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMultiExtModuleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMultiExtModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMultiExtModuleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMultiExtModuleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMultiExtModuleTester::final() {
    VMultiExtModuleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMultiExtModuleTester___024root__trace_init_top(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiExtModuleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiExtModuleTester___024root*>(voidSelf);
    VMultiExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMultiExtModuleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMultiExtModuleTester___024root__trace_register(VMultiExtModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiExtModuleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMultiExtModuleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
