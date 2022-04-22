// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBundleLiteralSpec_Anon.h"
#include "VBundleLiteralSpec_Anon__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBundleLiteralSpec_Anon::VBundleLiteralSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBundleLiteralSpec_Anon__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBundleLiteralSpec_Anon::VBundleLiteralSpec_Anon(const char* _vcname__)
    : VBundleLiteralSpec_Anon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBundleLiteralSpec_Anon::~VBundleLiteralSpec_Anon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBundleLiteralSpec_Anon___024root___eval_initial(VBundleLiteralSpec_Anon___024root* vlSelf);
void VBundleLiteralSpec_Anon___024root___eval_settle(VBundleLiteralSpec_Anon___024root* vlSelf);
void VBundleLiteralSpec_Anon___024root___eval(VBundleLiteralSpec_Anon___024root* vlSelf);
#ifdef VL_DEBUG
void VBundleLiteralSpec_Anon___024root___eval_debug_assertions(VBundleLiteralSpec_Anon___024root* vlSelf);
#endif  // VL_DEBUG
void VBundleLiteralSpec_Anon___024root___final(VBundleLiteralSpec_Anon___024root* vlSelf);

static void _eval_initial_loop(VBundleLiteralSpec_Anon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBundleLiteralSpec_Anon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBundleLiteralSpec_Anon___024root___eval_settle(&(vlSymsp->TOP));
        VBundleLiteralSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBundleLiteralSpec_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBundleLiteralSpec_Anon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBundleLiteralSpec_Anon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBundleLiteralSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBundleLiteralSpec_Anon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBundleLiteralSpec_Anon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBundleLiteralSpec_Anon::final() {
    VBundleLiteralSpec_Anon___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBundleLiteralSpec_Anon___024root__trace_init_top(VBundleLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBundleLiteralSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBundleLiteralSpec_Anon___024root*>(voidSelf);
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBundleLiteralSpec_Anon___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBundleLiteralSpec_Anon___024root__trace_register(VBundleLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBundleLiteralSpec_Anon::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBundleLiteralSpec_Anon___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
