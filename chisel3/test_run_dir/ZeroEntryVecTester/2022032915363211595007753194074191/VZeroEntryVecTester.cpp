// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VZeroEntryVecTester.h"
#include "VZeroEntryVecTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VZeroEntryVecTester::VZeroEntryVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VZeroEntryVecTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VZeroEntryVecTester::VZeroEntryVecTester(const char* _vcname__)
    : VZeroEntryVecTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VZeroEntryVecTester::~VZeroEntryVecTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VZeroEntryVecTester___024root___eval_initial(VZeroEntryVecTester___024root* vlSelf);
void VZeroEntryVecTester___024root___eval_settle(VZeroEntryVecTester___024root* vlSelf);
void VZeroEntryVecTester___024root___eval(VZeroEntryVecTester___024root* vlSelf);
#ifdef VL_DEBUG
void VZeroEntryVecTester___024root___eval_debug_assertions(VZeroEntryVecTester___024root* vlSelf);
#endif  // VL_DEBUG
void VZeroEntryVecTester___024root___final(VZeroEntryVecTester___024root* vlSelf);

static void _eval_initial_loop(VZeroEntryVecTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VZeroEntryVecTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VZeroEntryVecTester___024root___eval_settle(&(vlSymsp->TOP));
        VZeroEntryVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VZeroEntryVecTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VZeroEntryVecTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VZeroEntryVecTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VZeroEntryVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VZeroEntryVecTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VZeroEntryVecTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VZeroEntryVecTester::final() {
    VZeroEntryVecTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VZeroEntryVecTester___024root__trace_init_top(VZeroEntryVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VZeroEntryVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VZeroEntryVecTester___024root*>(voidSelf);
    VZeroEntryVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VZeroEntryVecTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VZeroEntryVecTester___024root__trace_register(VZeroEntryVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VZeroEntryVecTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VZeroEntryVecTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
