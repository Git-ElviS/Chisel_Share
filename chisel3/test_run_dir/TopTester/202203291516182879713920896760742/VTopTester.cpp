// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTopTester.h"
#include "VTopTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTopTester::VTopTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTopTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VTopTester::VTopTester(const char* _vcname__)
    : VTopTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTopTester::~VTopTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTopTester___024root___eval_initial(VTopTester___024root* vlSelf);
void VTopTester___024root___eval_settle(VTopTester___024root* vlSelf);
void VTopTester___024root___eval(VTopTester___024root* vlSelf);
#ifdef VL_DEBUG
void VTopTester___024root___eval_debug_assertions(VTopTester___024root* vlSelf);
#endif  // VL_DEBUG
void VTopTester___024root___final(VTopTester___024root* vlSelf);

static void _eval_initial_loop(VTopTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTopTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTopTester___024root___eval_settle(&(vlSymsp->TOP));
        VTopTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTopTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTopTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTopTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTopTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTopTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTopTester::final() {
    VTopTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTopTester___024root__trace_init_top(VTopTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTopTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopTester___024root*>(voidSelf);
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTopTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTopTester___024root__trace_register(VTopTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTopTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTopTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
