// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMixedVecZeroEntryTester.h"
#include "VMixedVecZeroEntryTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMixedVecZeroEntryTester::VMixedVecZeroEntryTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMixedVecZeroEntryTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMixedVecZeroEntryTester::VMixedVecZeroEntryTester(const char* _vcname__)
    : VMixedVecZeroEntryTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMixedVecZeroEntryTester::~VMixedVecZeroEntryTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMixedVecZeroEntryTester___024root___eval_initial(VMixedVecZeroEntryTester___024root* vlSelf);
void VMixedVecZeroEntryTester___024root___eval_settle(VMixedVecZeroEntryTester___024root* vlSelf);
void VMixedVecZeroEntryTester___024root___eval(VMixedVecZeroEntryTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMixedVecZeroEntryTester___024root___eval_debug_assertions(VMixedVecZeroEntryTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMixedVecZeroEntryTester___024root___final(VMixedVecZeroEntryTester___024root* vlSelf);

static void _eval_initial_loop(VMixedVecZeroEntryTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMixedVecZeroEntryTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMixedVecZeroEntryTester___024root___eval_settle(&(vlSymsp->TOP));
        VMixedVecZeroEntryTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMixedVecZeroEntryTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecZeroEntryTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMixedVecZeroEntryTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMixedVecZeroEntryTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMixedVecZeroEntryTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMixedVecZeroEntryTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMixedVecZeroEntryTester::final() {
    VMixedVecZeroEntryTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMixedVecZeroEntryTester___024root__trace_init_top(VMixedVecZeroEntryTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMixedVecZeroEntryTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecZeroEntryTester___024root*>(voidSelf);
    VMixedVecZeroEntryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMixedVecZeroEntryTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMixedVecZeroEntryTester___024root__trace_register(VMixedVecZeroEntryTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecZeroEntryTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMixedVecZeroEntryTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
