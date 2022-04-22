// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VClipSqueezeWrapDemo.h"
#include "VClipSqueezeWrapDemo__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VClipSqueezeWrapDemo::VClipSqueezeWrapDemo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VClipSqueezeWrapDemo__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VClipSqueezeWrapDemo::VClipSqueezeWrapDemo(const char* _vcname__)
    : VClipSqueezeWrapDemo(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VClipSqueezeWrapDemo::~VClipSqueezeWrapDemo() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VClipSqueezeWrapDemo___024root___eval_initial(VClipSqueezeWrapDemo___024root* vlSelf);
void VClipSqueezeWrapDemo___024root___eval_settle(VClipSqueezeWrapDemo___024root* vlSelf);
void VClipSqueezeWrapDemo___024root___eval(VClipSqueezeWrapDemo___024root* vlSelf);
#ifdef VL_DEBUG
void VClipSqueezeWrapDemo___024root___eval_debug_assertions(VClipSqueezeWrapDemo___024root* vlSelf);
#endif  // VL_DEBUG
void VClipSqueezeWrapDemo___024root___final(VClipSqueezeWrapDemo___024root* vlSelf);

static void _eval_initial_loop(VClipSqueezeWrapDemo__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VClipSqueezeWrapDemo___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VClipSqueezeWrapDemo___024root___eval_settle(&(vlSymsp->TOP));
        VClipSqueezeWrapDemo___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VClipSqueezeWrapDemo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VClipSqueezeWrapDemo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VClipSqueezeWrapDemo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VClipSqueezeWrapDemo___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VClipSqueezeWrapDemo::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VClipSqueezeWrapDemo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VClipSqueezeWrapDemo::final() {
    VClipSqueezeWrapDemo___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VClipSqueezeWrapDemo___024root__trace_init_top(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VClipSqueezeWrapDemo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClipSqueezeWrapDemo___024root*>(voidSelf);
    VClipSqueezeWrapDemo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VClipSqueezeWrapDemo___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VClipSqueezeWrapDemo___024root__trace_register(VClipSqueezeWrapDemo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VClipSqueezeWrapDemo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VClipSqueezeWrapDemo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
