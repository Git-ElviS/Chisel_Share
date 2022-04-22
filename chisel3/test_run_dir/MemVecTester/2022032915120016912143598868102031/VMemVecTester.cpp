// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMemVecTester.h"
#include "VMemVecTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMemVecTester::VMemVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMemVecTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMemVecTester::VMemVecTester(const char* _vcname__)
    : VMemVecTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMemVecTester::~VMemVecTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMemVecTester___024root___eval_initial(VMemVecTester___024root* vlSelf);
void VMemVecTester___024root___eval_settle(VMemVecTester___024root* vlSelf);
void VMemVecTester___024root___eval(VMemVecTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMemVecTester___024root___eval_debug_assertions(VMemVecTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMemVecTester___024root___final(VMemVecTester___024root* vlSelf);

static void _eval_initial_loop(VMemVecTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMemVecTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMemVecTester___024root___eval_settle(&(vlSymsp->TOP));
        VMemVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMemVecTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMemVecTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMemVecTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMemVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMemVecTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMemVecTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMemVecTester::final() {
    VMemVecTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMemVecTester___024root__trace_init_top(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMemVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemVecTester___024root*>(voidSelf);
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMemVecTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMemVecTester___024root__trace_register(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMemVecTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMemVecTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
