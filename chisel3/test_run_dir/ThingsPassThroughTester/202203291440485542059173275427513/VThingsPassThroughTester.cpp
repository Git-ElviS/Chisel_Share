// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VThingsPassThroughTester.h"
#include "VThingsPassThroughTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VThingsPassThroughTester::VThingsPassThroughTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VThingsPassThroughTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VThingsPassThroughTester::VThingsPassThroughTester(const char* _vcname__)
    : VThingsPassThroughTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VThingsPassThroughTester::~VThingsPassThroughTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VThingsPassThroughTester___024root___eval_initial(VThingsPassThroughTester___024root* vlSelf);
void VThingsPassThroughTester___024root___eval_settle(VThingsPassThroughTester___024root* vlSelf);
void VThingsPassThroughTester___024root___eval(VThingsPassThroughTester___024root* vlSelf);
#ifdef VL_DEBUG
void VThingsPassThroughTester___024root___eval_debug_assertions(VThingsPassThroughTester___024root* vlSelf);
#endif  // VL_DEBUG
void VThingsPassThroughTester___024root___final(VThingsPassThroughTester___024root* vlSelf);

static void _eval_initial_loop(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VThingsPassThroughTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VThingsPassThroughTester___024root___eval_settle(&(vlSymsp->TOP));
        VThingsPassThroughTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VThingsPassThroughTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VThingsPassThroughTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VThingsPassThroughTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VThingsPassThroughTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VThingsPassThroughTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VThingsPassThroughTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VThingsPassThroughTester::final() {
    VThingsPassThroughTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VThingsPassThroughTester___024root__trace_init_top(VThingsPassThroughTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VThingsPassThroughTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VThingsPassThroughTester___024root*>(voidSelf);
    VThingsPassThroughTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VThingsPassThroughTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VThingsPassThroughTester___024root__trace_register(VThingsPassThroughTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VThingsPassThroughTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VThingsPassThroughTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
