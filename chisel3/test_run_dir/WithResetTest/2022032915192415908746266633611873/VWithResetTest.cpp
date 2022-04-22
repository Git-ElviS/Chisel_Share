// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VWithResetTest.h"
#include "VWithResetTest__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VWithResetTest::VWithResetTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VWithResetTest__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VWithResetTest::VWithResetTest(const char* _vcname__)
    : VWithResetTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VWithResetTest::~VWithResetTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VWithResetTest___024root___eval_initial(VWithResetTest___024root* vlSelf);
void VWithResetTest___024root___eval_settle(VWithResetTest___024root* vlSelf);
void VWithResetTest___024root___eval(VWithResetTest___024root* vlSelf);
#ifdef VL_DEBUG
void VWithResetTest___024root___eval_debug_assertions(VWithResetTest___024root* vlSelf);
#endif  // VL_DEBUG
void VWithResetTest___024root___final(VWithResetTest___024root* vlSelf);

static void _eval_initial_loop(VWithResetTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VWithResetTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VWithResetTest___024root___eval_settle(&(vlSymsp->TOP));
        VWithResetTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VWithResetTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VWithResetTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VWithResetTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VWithResetTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VWithResetTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VWithResetTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VWithResetTest::final() {
    VWithResetTest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VWithResetTest___024root__trace_init_top(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VWithResetTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWithResetTest___024root*>(voidSelf);
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VWithResetTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VWithResetTest___024root__trace_register(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWithResetTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VWithResetTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
