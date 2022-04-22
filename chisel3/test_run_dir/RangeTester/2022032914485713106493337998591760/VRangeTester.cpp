// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRangeTester.h"
#include "VRangeTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRangeTester::VRangeTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRangeTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRangeTester::VRangeTester(const char* _vcname__)
    : VRangeTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRangeTester::~VRangeTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRangeTester___024root___eval_initial(VRangeTester___024root* vlSelf);
void VRangeTester___024root___eval_settle(VRangeTester___024root* vlSelf);
void VRangeTester___024root___eval(VRangeTester___024root* vlSelf);
#ifdef VL_DEBUG
void VRangeTester___024root___eval_debug_assertions(VRangeTester___024root* vlSelf);
#endif  // VL_DEBUG
void VRangeTester___024root___final(VRangeTester___024root* vlSelf);

static void _eval_initial_loop(VRangeTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRangeTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRangeTester___024root___eval_settle(&(vlSymsp->TOP));
        VRangeTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRangeTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRangeTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRangeTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRangeTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRangeTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRangeTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRangeTester::final() {
    VRangeTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRangeTester___024root__trace_init_top(VRangeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRangeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRangeTester___024root*>(voidSelf);
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRangeTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRangeTester___024root__trace_register(VRangeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRangeTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRangeTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
