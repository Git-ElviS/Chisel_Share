// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsyncResetSpec_Anon.h"
#include "VAsyncResetSpec_Anon__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsyncResetSpec_Anon::VAsyncResetSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsyncResetSpec_Anon__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsyncResetSpec_Anon::VAsyncResetSpec_Anon(const char* _vcname__)
    : VAsyncResetSpec_Anon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsyncResetSpec_Anon::~VAsyncResetSpec_Anon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsyncResetSpec_Anon___024root___eval_initial(VAsyncResetSpec_Anon___024root* vlSelf);
void VAsyncResetSpec_Anon___024root___eval_settle(VAsyncResetSpec_Anon___024root* vlSelf);
void VAsyncResetSpec_Anon___024root___eval(VAsyncResetSpec_Anon___024root* vlSelf);
#ifdef VL_DEBUG
void VAsyncResetSpec_Anon___024root___eval_debug_assertions(VAsyncResetSpec_Anon___024root* vlSelf);
#endif  // VL_DEBUG
void VAsyncResetSpec_Anon___024root___final(VAsyncResetSpec_Anon___024root* vlSelf);

static void _eval_initial_loop(VAsyncResetSpec_Anon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsyncResetSpec_Anon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsyncResetSpec_Anon___024root___eval_settle(&(vlSymsp->TOP));
        VAsyncResetSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAsyncResetSpec_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetSpec_Anon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsyncResetSpec_Anon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsyncResetSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsyncResetSpec_Anon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsyncResetSpec_Anon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsyncResetSpec_Anon::final() {
    VAsyncResetSpec_Anon___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsyncResetSpec_Anon___024root__trace_init_top(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetSpec_Anon___024root*>(voidSelf);
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsyncResetSpec_Anon___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_register(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetSpec_Anon::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsyncResetSpec_Anon___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
