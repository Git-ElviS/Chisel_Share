// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPRNGStepTest.h"
#include "VPRNGStepTest__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPRNGStepTest::VPRNGStepTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPRNGStepTest__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VPRNGStepTest::VPRNGStepTest(const char* _vcname__)
    : VPRNGStepTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPRNGStepTest::~VPRNGStepTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPRNGStepTest___024root___eval_initial(VPRNGStepTest___024root* vlSelf);
void VPRNGStepTest___024root___eval_settle(VPRNGStepTest___024root* vlSelf);
void VPRNGStepTest___024root___eval(VPRNGStepTest___024root* vlSelf);
#ifdef VL_DEBUG
void VPRNGStepTest___024root___eval_debug_assertions(VPRNGStepTest___024root* vlSelf);
#endif  // VL_DEBUG
void VPRNGStepTest___024root___final(VPRNGStepTest___024root* vlSelf);

static void _eval_initial_loop(VPRNGStepTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPRNGStepTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPRNGStepTest___024root___eval_settle(&(vlSymsp->TOP));
        VPRNGStepTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPRNGStepTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPRNGStepTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPRNGStepTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPRNGStepTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPRNGStepTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPRNGStepTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPRNGStepTest::final() {
    VPRNGStepTest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPRNGStepTest___024root__trace_init_top(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPRNGStepTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGStepTest___024root*>(voidSelf);
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPRNGStepTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPRNGStepTest___024root__trace_register(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPRNGStepTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPRNGStepTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
