// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFoo.h"
#include "VFoo__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFoo::VFoo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFoo__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFoo::VFoo(const char* _vcname__)
    : VFoo(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFoo::~VFoo() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFoo___024root___eval_initial(VFoo___024root* vlSelf);
void VFoo___024root___eval_settle(VFoo___024root* vlSelf);
void VFoo___024root___eval(VFoo___024root* vlSelf);
#ifdef VL_DEBUG
void VFoo___024root___eval_debug_assertions(VFoo___024root* vlSelf);
#endif  // VL_DEBUG
void VFoo___024root___final(VFoo___024root* vlSelf);

static void _eval_initial_loop(VFoo__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFoo___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFoo___024root___eval_settle(&(vlSymsp->TOP));
        VFoo___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFoo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFoo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFoo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFoo___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFoo::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFoo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFoo::final() {
    VFoo___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFoo___024root__trace_init_top(VFoo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFoo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFoo___024root*>(voidSelf);
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFoo___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFoo___024root__trace_register(VFoo___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFoo::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFoo___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
