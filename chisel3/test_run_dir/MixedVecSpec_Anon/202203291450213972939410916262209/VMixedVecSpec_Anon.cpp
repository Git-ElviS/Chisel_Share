// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecSpec_Anon.h"
#include "VMixedVecSpec_Anon__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecSpec_Anon::VMixedVecSpec_Anon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecSpec_Anon__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecSpec_Anon::VMixedVecSpec_Anon(const char* _vcname__)
    : VMixedVecSpec_Anon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecSpec_Anon::~VMixedVecSpec_Anon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecSpec_Anon___024root___eval_initial(VMixedVecSpec_Anon___024root* vlSelf);
void VMixedVecSpec_Anon___024root___eval_settle(VMixedVecSpec_Anon___024root* vlSelf);
void VMixedVecSpec_Anon___024root___eval(VMixedVecSpec_Anon___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecSpec_Anon___024root___eval_debug_assertions(VMixedVecSpec_Anon___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecSpec_Anon___024root___final(VMixedVecSpec_Anon___024root* vlSelf);

static void _eval_initial_loop(VMixedVecSpec_Anon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecSpec_Anon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecSpec_Anon___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecSpec_Anon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecSpec_Anon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecSpec_Anon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecSpec_Anon___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecSpec_Anon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecSpec_Anon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecSpec_Anon::final() {
    VMixedVecSpec_Anon___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecSpec_Anon___024root__trace_init_top(VMixedVecSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecSpec_Anon___024root*>(voidSelf);
    VMixedVecSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecSpec_Anon___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecSpec_Anon___024root__trace_register(VMixedVecSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecSpec_Anon::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecSpec_Anon___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
