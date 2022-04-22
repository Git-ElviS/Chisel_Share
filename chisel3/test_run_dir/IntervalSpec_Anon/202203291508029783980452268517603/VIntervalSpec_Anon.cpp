// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalSpec_Anon.h"
#include "VIntervalSpec_Anon__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalSpec_Anon::VIntervalSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalSpec_Anon__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalSpec_Anon::VIntervalSpec_Anon(const char* _vcname__)
    : VIntervalSpec_Anon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalSpec_Anon::~VIntervalSpec_Anon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalSpec_Anon___024root___eval_initial(VIntervalSpec_Anon___024root* vlSelf);
void VIntervalSpec_Anon___024root___eval_settle(VIntervalSpec_Anon___024root* vlSelf);
void VIntervalSpec_Anon___024root___eval(VIntervalSpec_Anon___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalSpec_Anon___024root___eval_debug_assertions(VIntervalSpec_Anon___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalSpec_Anon___024root___final(VIntervalSpec_Anon___024root* vlSelf);

static void _eval_initial_loop(VIntervalSpec_Anon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalSpec_Anon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalSpec_Anon___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalSpec_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalSpec_Anon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalSpec_Anon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalSpec_Anon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalSpec_Anon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalSpec_Anon::final() {
    VIntervalSpec_Anon___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalSpec_Anon___024root__trace_init_top(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalSpec_Anon___024root*>(voidSelf);
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalSpec_Anon___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_register(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalSpec_Anon::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalSpec_Anon___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
