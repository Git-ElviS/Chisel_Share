// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VParameterizedModuleTester.h"
#include "VParameterizedModuleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VParameterizedModuleTester::VParameterizedModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VParameterizedModuleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VParameterizedModuleTester::VParameterizedModuleTester(const char* _vcname__)
    : VParameterizedModuleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VParameterizedModuleTester::~VParameterizedModuleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VParameterizedModuleTester___024root___eval_initial(VParameterizedModuleTester___024root* vlSelf);
void VParameterizedModuleTester___024root___eval_settle(VParameterizedModuleTester___024root* vlSelf);
void VParameterizedModuleTester___024root___eval(VParameterizedModuleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VParameterizedModuleTester___024root___eval_debug_assertions(VParameterizedModuleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VParameterizedModuleTester___024root___final(VParameterizedModuleTester___024root* vlSelf);

static void _eval_initial_loop(VParameterizedModuleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VParameterizedModuleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VParameterizedModuleTester___024root___eval_settle(&(vlSymsp->TOP));
        VParameterizedModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VParameterizedModuleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VParameterizedModuleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VParameterizedModuleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VParameterizedModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VParameterizedModuleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VParameterizedModuleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VParameterizedModuleTester::final() {
    VParameterizedModuleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VParameterizedModuleTester___024root__trace_init_top(VParameterizedModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParameterizedModuleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedModuleTester___024root*>(voidSelf);
    VParameterizedModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VParameterizedModuleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VParameterizedModuleTester___024root__trace_register(VParameterizedModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedModuleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VParameterizedModuleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
