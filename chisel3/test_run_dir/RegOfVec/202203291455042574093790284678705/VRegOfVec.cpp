// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegOfVec.h"
#include "VRegOfVec__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegOfVec::VRegOfVec(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRegOfVec__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRegOfVec::VRegOfVec(const char* _vcname__)
    : VRegOfVec(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRegOfVec::~VRegOfVec() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRegOfVec___024root___eval_initial(VRegOfVec___024root* vlSelf);
void VRegOfVec___024root___eval_settle(VRegOfVec___024root* vlSelf);
void VRegOfVec___024root___eval(VRegOfVec___024root* vlSelf);
#ifdef VL_DEBUG
void VRegOfVec___024root___eval_debug_assertions(VRegOfVec___024root* vlSelf);
#endif  // VL_DEBUG
void VRegOfVec___024root___final(VRegOfVec___024root* vlSelf);

static void _eval_initial_loop(VRegOfVec__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRegOfVec___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRegOfVec___024root___eval_settle(&(vlSymsp->TOP));
        VRegOfVec___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRegOfVec::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegOfVec::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegOfVec___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRegOfVec___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRegOfVec::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRegOfVec::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRegOfVec::final() {
    VRegOfVec___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRegOfVec___024root__trace_init_top(VRegOfVec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegOfVec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegOfVec___024root*>(voidSelf);
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRegOfVec___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRegOfVec___024root__trace_register(VRegOfVec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegOfVec::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRegOfVec___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
