// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecConnectWithVecTester.h"
#include "VMixedVecConnectWithVecTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecConnectWithVecTester::VMixedVecConnectWithVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecConnectWithVecTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecConnectWithVecTester::VMixedVecConnectWithVecTester(const char* _vcname__)
    : VMixedVecConnectWithVecTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecConnectWithVecTester::~VMixedVecConnectWithVecTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecConnectWithVecTester___024root___eval_initial(VMixedVecConnectWithVecTester___024root* vlSelf);
void VMixedVecConnectWithVecTester___024root___eval_settle(VMixedVecConnectWithVecTester___024root* vlSelf);
void VMixedVecConnectWithVecTester___024root___eval(VMixedVecConnectWithVecTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecConnectWithVecTester___024root___eval_debug_assertions(VMixedVecConnectWithVecTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecConnectWithVecTester___024root___final(VMixedVecConnectWithVecTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecConnectWithVecTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecConnectWithVecTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecConnectWithVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecConnectWithVecTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecConnectWithVecTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecConnectWithVecTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecConnectWithVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecConnectWithVecTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecConnectWithVecTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecConnectWithVecTester::final() {
    VMixedVecConnectWithVecTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecConnectWithVecTester___024root__trace_init_top(VMixedVecConnectWithVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecConnectWithVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecConnectWithVecTester___024root*>(voidSelf);
    VMixedVecConnectWithVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecConnectWithVecTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecConnectWithVecTester___024root__trace_register(VMixedVecConnectWithVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecConnectWithVecTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecConnectWithVecTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
