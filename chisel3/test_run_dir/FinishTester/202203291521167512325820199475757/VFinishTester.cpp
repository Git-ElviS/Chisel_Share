// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFinishTester.h"
#include "VFinishTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFinishTester::VFinishTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFinishTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFinishTester::VFinishTester(const char* _vcname__)
    : VFinishTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFinishTester::~VFinishTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFinishTester___024root___eval_initial(VFinishTester___024root* vlSelf);
void VFinishTester___024root___eval_settle(VFinishTester___024root* vlSelf);
void VFinishTester___024root___eval(VFinishTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFinishTester___024root___eval_debug_assertions(VFinishTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFinishTester___024root___final(VFinishTester___024root* vlSelf);

static void _eval_initial_loop(VFinishTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFinishTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFinishTester___024root___eval_settle(&(vlSymsp->TOP));
        VFinishTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFinishTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFinishTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFinishTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFinishTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFinishTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFinishTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFinishTester::final() {
    VFinishTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFinishTester___024root__trace_init_top(VFinishTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFinishTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFinishTester___024root*>(voidSelf);
    VFinishTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFinishTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFinishTester___024root__trace_register(VFinishTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFinishTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFinishTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
