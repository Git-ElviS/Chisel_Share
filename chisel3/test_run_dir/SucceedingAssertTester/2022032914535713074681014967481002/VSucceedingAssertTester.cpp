// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSucceedingAssertTester.h"
#include "VSucceedingAssertTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSucceedingAssertTester::VSucceedingAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSucceedingAssertTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSucceedingAssertTester::VSucceedingAssertTester(const char* _vcname__)
    : VSucceedingAssertTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSucceedingAssertTester::~VSucceedingAssertTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSucceedingAssertTester___024root___eval_initial(VSucceedingAssertTester___024root* vlSelf);
void VSucceedingAssertTester___024root___eval_settle(VSucceedingAssertTester___024root* vlSelf);
void VSucceedingAssertTester___024root___eval(VSucceedingAssertTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSucceedingAssertTester___024root___eval_debug_assertions(VSucceedingAssertTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSucceedingAssertTester___024root___final(VSucceedingAssertTester___024root* vlSelf);

static void _eval_initial_loop(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSucceedingAssertTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSucceedingAssertTester___024root___eval_settle(&(vlSymsp->TOP));
        VSucceedingAssertTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSucceedingAssertTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSucceedingAssertTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSucceedingAssertTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSucceedingAssertTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSucceedingAssertTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSucceedingAssertTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSucceedingAssertTester::final() {
    VSucceedingAssertTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSucceedingAssertTester___024root__trace_init_top(VSucceedingAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSucceedingAssertTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSucceedingAssertTester___024root*>(voidSelf);
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSucceedingAssertTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSucceedingAssertTester___024root__trace_register(VSucceedingAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSucceedingAssertTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSucceedingAssertTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
