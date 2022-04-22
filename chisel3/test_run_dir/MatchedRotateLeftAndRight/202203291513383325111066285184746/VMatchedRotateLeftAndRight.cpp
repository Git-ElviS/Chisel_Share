// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMatchedRotateLeftAndRight.h"
#include "VMatchedRotateLeftAndRight__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMatchedRotateLeftAndRight::VMatchedRotateLeftAndRight(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMatchedRotateLeftAndRight__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMatchedRotateLeftAndRight::VMatchedRotateLeftAndRight(const char* _vcname__)
    : VMatchedRotateLeftAndRight(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMatchedRotateLeftAndRight::~VMatchedRotateLeftAndRight() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMatchedRotateLeftAndRight___024root___eval_initial(VMatchedRotateLeftAndRight___024root* vlSelf);
void VMatchedRotateLeftAndRight___024root___eval_settle(VMatchedRotateLeftAndRight___024root* vlSelf);
void VMatchedRotateLeftAndRight___024root___eval(VMatchedRotateLeftAndRight___024root* vlSelf);
#ifdef VL_DEBUG
void VMatchedRotateLeftAndRight___024root___eval_debug_assertions(VMatchedRotateLeftAndRight___024root* vlSelf);
#endif  // VL_DEBUG
void VMatchedRotateLeftAndRight___024root___final(VMatchedRotateLeftAndRight___024root* vlSelf);

static void _eval_initial_loop(VMatchedRotateLeftAndRight__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMatchedRotateLeftAndRight___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMatchedRotateLeftAndRight___024root___eval_settle(&(vlSymsp->TOP));
        VMatchedRotateLeftAndRight___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMatchedRotateLeftAndRight::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMatchedRotateLeftAndRight::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMatchedRotateLeftAndRight___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMatchedRotateLeftAndRight___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMatchedRotateLeftAndRight::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMatchedRotateLeftAndRight::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMatchedRotateLeftAndRight::final() {
    VMatchedRotateLeftAndRight___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMatchedRotateLeftAndRight___024root__trace_init_top(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMatchedRotateLeftAndRight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatchedRotateLeftAndRight___024root*>(voidSelf);
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMatchedRotateLeftAndRight___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMatchedRotateLeftAndRight___024root__trace_register(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMatchedRotateLeftAndRight::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMatchedRotateLeftAndRight___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
