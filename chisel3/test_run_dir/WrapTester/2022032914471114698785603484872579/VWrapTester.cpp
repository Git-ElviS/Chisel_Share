// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VWrapTester.h"
#include "VWrapTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VWrapTester::VWrapTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VWrapTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VWrapTester::VWrapTester(const char* _vcname__)
    : VWrapTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VWrapTester::~VWrapTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VWrapTester___024root___eval_initial(VWrapTester___024root* vlSelf);
void VWrapTester___024root___eval_settle(VWrapTester___024root* vlSelf);
void VWrapTester___024root___eval(VWrapTester___024root* vlSelf);
#ifdef VL_DEBUG
void VWrapTester___024root___eval_debug_assertions(VWrapTester___024root* vlSelf);
#endif  // VL_DEBUG
void VWrapTester___024root___final(VWrapTester___024root* vlSelf);

static void _eval_initial_loop(VWrapTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VWrapTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VWrapTester___024root___eval_settle(&(vlSymsp->TOP));
        VWrapTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VWrapTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VWrapTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VWrapTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VWrapTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VWrapTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VWrapTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VWrapTester::final() {
    VWrapTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VWrapTester___024root__trace_init_top(VWrapTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VWrapTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWrapTester___024root*>(voidSelf);
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VWrapTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VWrapTester___024root__trace_register(VWrapTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWrapTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VWrapTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
