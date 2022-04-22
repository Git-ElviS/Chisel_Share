// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSubmoduleWhenTester.h"
#include "VSubmoduleWhenTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSubmoduleWhenTester::VSubmoduleWhenTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSubmoduleWhenTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSubmoduleWhenTester::VSubmoduleWhenTester(const char* _vcname__)
    : VSubmoduleWhenTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSubmoduleWhenTester::~VSubmoduleWhenTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSubmoduleWhenTester___024root___eval_initial(VSubmoduleWhenTester___024root* vlSelf);
void VSubmoduleWhenTester___024root___eval_settle(VSubmoduleWhenTester___024root* vlSelf);
void VSubmoduleWhenTester___024root___eval(VSubmoduleWhenTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSubmoduleWhenTester___024root___eval_debug_assertions(VSubmoduleWhenTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSubmoduleWhenTester___024root___final(VSubmoduleWhenTester___024root* vlSelf);

static void _eval_initial_loop(VSubmoduleWhenTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSubmoduleWhenTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSubmoduleWhenTester___024root___eval_settle(&(vlSymsp->TOP));
        VSubmoduleWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSubmoduleWhenTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSubmoduleWhenTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSubmoduleWhenTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSubmoduleWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSubmoduleWhenTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSubmoduleWhenTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSubmoduleWhenTester::final() {
    VSubmoduleWhenTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSubmoduleWhenTester___024root__trace_init_top(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSubmoduleWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSubmoduleWhenTester___024root*>(voidSelf);
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSubmoduleWhenTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_register(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSubmoduleWhenTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSubmoduleWhenTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
