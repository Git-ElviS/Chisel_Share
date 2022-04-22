// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VResetTester.h"
#include "VResetTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VResetTester::VResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VResetTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VResetTester::VResetTester(const char* _vcname__)
    : VResetTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VResetTester::~VResetTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VResetTester___024root___eval_initial(VResetTester___024root* vlSelf);
void VResetTester___024root___eval_settle(VResetTester___024root* vlSelf);
void VResetTester___024root___eval(VResetTester___024root* vlSelf);
#ifdef VL_DEBUG
void VResetTester___024root___eval_debug_assertions(VResetTester___024root* vlSelf);
#endif  // VL_DEBUG
void VResetTester___024root___final(VResetTester___024root* vlSelf);

static void _eval_initial_loop(VResetTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VResetTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VResetTester___024root___eval_settle(&(vlSymsp->TOP));
        VResetTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VResetTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VResetTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VResetTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VResetTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VResetTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VResetTester::final() {
    VResetTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VResetTester___024root__trace_init_top(VResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VResetTester___024root*>(voidSelf);
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VResetTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VResetTester___024root__trace_register(VResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VResetTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VResetTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
