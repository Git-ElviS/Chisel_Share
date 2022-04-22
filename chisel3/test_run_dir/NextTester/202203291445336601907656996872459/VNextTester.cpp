// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNextTester.h"
#include "VNextTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VNextTester::VNextTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VNextTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VNextTester::VNextTester(const char* _vcname__)
    : VNextTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VNextTester::~VNextTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VNextTester___024root___eval_initial(VNextTester___024root* vlSelf);
void VNextTester___024root___eval_settle(VNextTester___024root* vlSelf);
void VNextTester___024root___eval(VNextTester___024root* vlSelf);
#ifdef VL_DEBUG
void VNextTester___024root___eval_debug_assertions(VNextTester___024root* vlSelf);
#endif  // VL_DEBUG
void VNextTester___024root___final(VNextTester___024root* vlSelf);

static void _eval_initial_loop(VNextTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VNextTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VNextTester___024root___eval_settle(&(vlSymsp->TOP));
        VNextTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VNextTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNextTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNextTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VNextTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VNextTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VNextTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VNextTester::final() {
    VNextTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VNextTester___024root__trace_init_top(VNextTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VNextTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNextTester___024root*>(voidSelf);
    VNextTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VNextTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VNextTester___024root__trace_register(VNextTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VNextTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VNextTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
