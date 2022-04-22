// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntervalSetBinaryPointTester.h"
#include "VIntervalSetBinaryPointTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntervalSetBinaryPointTester::VIntervalSetBinaryPointTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIntervalSetBinaryPointTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIntervalSetBinaryPointTester::VIntervalSetBinaryPointTester(const char* _vcname__)
    : VIntervalSetBinaryPointTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIntervalSetBinaryPointTester::~VIntervalSetBinaryPointTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIntervalSetBinaryPointTester___024root___eval_initial(VIntervalSetBinaryPointTester___024root* vlSelf);
void VIntervalSetBinaryPointTester___024root___eval_settle(VIntervalSetBinaryPointTester___024root* vlSelf);
void VIntervalSetBinaryPointTester___024root___eval(VIntervalSetBinaryPointTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIntervalSetBinaryPointTester___024root___eval_debug_assertions(VIntervalSetBinaryPointTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIntervalSetBinaryPointTester___024root___final(VIntervalSetBinaryPointTester___024root* vlSelf);

static void _eval_initial_loop(VIntervalSetBinaryPointTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIntervalSetBinaryPointTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIntervalSetBinaryPointTester___024root___eval_settle(&(vlSymsp->TOP));
        VIntervalSetBinaryPointTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIntervalSetBinaryPointTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntervalSetBinaryPointTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntervalSetBinaryPointTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIntervalSetBinaryPointTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIntervalSetBinaryPointTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIntervalSetBinaryPointTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIntervalSetBinaryPointTester::final() {
    VIntervalSetBinaryPointTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIntervalSetBinaryPointTester___024root__trace_init_top(VIntervalSetBinaryPointTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntervalSetBinaryPointTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalSetBinaryPointTester___024root*>(voidSelf);
    VIntervalSetBinaryPointTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIntervalSetBinaryPointTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIntervalSetBinaryPointTester___024root__trace_register(VIntervalSetBinaryPointTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalSetBinaryPointTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntervalSetBinaryPointTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
