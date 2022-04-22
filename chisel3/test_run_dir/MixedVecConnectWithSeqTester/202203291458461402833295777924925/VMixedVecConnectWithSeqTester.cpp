// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecConnectWithSeqTester.h"
#include "VMixedVecConnectWithSeqTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecConnectWithSeqTester::VMixedVecConnectWithSeqTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecConnectWithSeqTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecConnectWithSeqTester::VMixedVecConnectWithSeqTester(const char* _vcname__)
    : VMixedVecConnectWithSeqTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecConnectWithSeqTester::~VMixedVecConnectWithSeqTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecConnectWithSeqTester___024root___eval_initial(VMixedVecConnectWithSeqTester___024root* vlSelf);
void VMixedVecConnectWithSeqTester___024root___eval_settle(VMixedVecConnectWithSeqTester___024root* vlSelf);
void VMixedVecConnectWithSeqTester___024root___eval(VMixedVecConnectWithSeqTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecConnectWithSeqTester___024root___eval_debug_assertions(VMixedVecConnectWithSeqTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecConnectWithSeqTester___024root___final(VMixedVecConnectWithSeqTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecConnectWithSeqTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecConnectWithSeqTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecConnectWithSeqTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecConnectWithSeqTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecConnectWithSeqTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecConnectWithSeqTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecConnectWithSeqTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecConnectWithSeqTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecConnectWithSeqTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecConnectWithSeqTester::final() {
    VMixedVecConnectWithSeqTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecConnectWithSeqTester___024root__trace_init_top(VMixedVecConnectWithSeqTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecConnectWithSeqTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecConnectWithSeqTester___024root*>(voidSelf);
    VMixedVecConnectWithSeqTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecConnectWithSeqTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecConnectWithSeqTester___024root__trace_register(VMixedVecConnectWithSeqTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecConnectWithSeqTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecConnectWithSeqTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
