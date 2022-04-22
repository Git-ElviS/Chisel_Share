// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecAssignTester.h"
#include "VMixedVecAssignTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecAssignTester::VMixedVecAssignTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecAssignTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecAssignTester::VMixedVecAssignTester(const char* _vcname__)
    : VMixedVecAssignTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecAssignTester::~VMixedVecAssignTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecAssignTester___024root___eval_initial(VMixedVecAssignTester___024root* vlSelf);
void VMixedVecAssignTester___024root___eval_settle(VMixedVecAssignTester___024root* vlSelf);
void VMixedVecAssignTester___024root___eval(VMixedVecAssignTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecAssignTester___024root___eval_debug_assertions(VMixedVecAssignTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecAssignTester___024root___final(VMixedVecAssignTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecAssignTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecAssignTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecAssignTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecAssignTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecAssignTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecAssignTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecAssignTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecAssignTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecAssignTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecAssignTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecAssignTester::final() {
    VMixedVecAssignTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecAssignTester___024root__trace_init_top(VMixedVecAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecAssignTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecAssignTester___024root*>(voidSelf);
    VMixedVecAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecAssignTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecAssignTester___024root__trace_register(VMixedVecAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecAssignTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecAssignTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
