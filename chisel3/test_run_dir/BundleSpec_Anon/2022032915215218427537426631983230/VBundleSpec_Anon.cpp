// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBundleSpec_Anon.h"
#include "VBundleSpec_Anon__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBundleSpec_Anon::VBundleSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBundleSpec_Anon__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBundleSpec_Anon::VBundleSpec_Anon(const char* _vcname__)
    : VBundleSpec_Anon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBundleSpec_Anon::~VBundleSpec_Anon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBundleSpec_Anon___024root___eval_initial(VBundleSpec_Anon___024root* vlSelf);
void VBundleSpec_Anon___024root___eval_settle(VBundleSpec_Anon___024root* vlSelf);
void VBundleSpec_Anon___024root___eval(VBundleSpec_Anon___024root* vlSelf);
#ifdef VL_DEBUG
void VBundleSpec_Anon___024root___eval_debug_assertions(VBundleSpec_Anon___024root* vlSelf);
#endif  // VL_DEBUG
void VBundleSpec_Anon___024root___final(VBundleSpec_Anon___024root* vlSelf);

static void _eval_initial_loop(VBundleSpec_Anon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBundleSpec_Anon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBundleSpec_Anon___024root___eval_settle(&(vlSymsp->TOP));
        VBundleSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBundleSpec_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBundleSpec_Anon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBundleSpec_Anon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBundleSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBundleSpec_Anon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBundleSpec_Anon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBundleSpec_Anon::final() {
    VBundleSpec_Anon___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBundleSpec_Anon___024root__trace_init_top(VBundleSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBundleSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBundleSpec_Anon___024root*>(voidSelf);
    VBundleSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBundleSpec_Anon___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBundleSpec_Anon___024root__trace_register(VBundleSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBundleSpec_Anon::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBundleSpec_Anon___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
