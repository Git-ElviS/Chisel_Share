// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFormattedAssertTester.h"
#include "VFormattedAssertTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFormattedAssertTester::VFormattedAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFormattedAssertTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFormattedAssertTester::VFormattedAssertTester(const char* _vcname__)
    : VFormattedAssertTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFormattedAssertTester::~VFormattedAssertTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFormattedAssertTester___024root___eval_initial(VFormattedAssertTester___024root* vlSelf);
void VFormattedAssertTester___024root___eval_settle(VFormattedAssertTester___024root* vlSelf);
void VFormattedAssertTester___024root___eval(VFormattedAssertTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFormattedAssertTester___024root___eval_debug_assertions(VFormattedAssertTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFormattedAssertTester___024root___final(VFormattedAssertTester___024root* vlSelf);

static void _eval_initial_loop(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFormattedAssertTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFormattedAssertTester___024root___eval_settle(&(vlSymsp->TOP));
        VFormattedAssertTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFormattedAssertTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFormattedAssertTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFormattedAssertTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFormattedAssertTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFormattedAssertTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFormattedAssertTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFormattedAssertTester::final() {
    VFormattedAssertTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFormattedAssertTester___024root__trace_init_top(VFormattedAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFormattedAssertTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFormattedAssertTester___024root*>(voidSelf);
    VFormattedAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFormattedAssertTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFormattedAssertTester___024root__trace_register(VFormattedAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFormattedAssertTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFormattedAssertTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
