// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBasicRotate.h"
#include "VBasicRotate__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBasicRotate::VBasicRotate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBasicRotate__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBasicRotate::VBasicRotate(const char* _vcname__)
    : VBasicRotate(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBasicRotate::~VBasicRotate() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBasicRotate___024root___eval_initial(VBasicRotate___024root* vlSelf);
void VBasicRotate___024root___eval_settle(VBasicRotate___024root* vlSelf);
void VBasicRotate___024root___eval(VBasicRotate___024root* vlSelf);
#ifdef VL_DEBUG
void VBasicRotate___024root___eval_debug_assertions(VBasicRotate___024root* vlSelf);
#endif  // VL_DEBUG
void VBasicRotate___024root___final(VBasicRotate___024root* vlSelf);

static void _eval_initial_loop(VBasicRotate__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBasicRotate___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBasicRotate___024root___eval_settle(&(vlSymsp->TOP));
        VBasicRotate___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBasicRotate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBasicRotate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBasicRotate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBasicRotate___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBasicRotate::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBasicRotate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBasicRotate::final() {
    VBasicRotate___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBasicRotate___024root__trace_init_top(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBasicRotate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicRotate___024root*>(voidSelf);
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBasicRotate___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBasicRotate___024root__trace_register(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBasicRotate::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBasicRotate___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
