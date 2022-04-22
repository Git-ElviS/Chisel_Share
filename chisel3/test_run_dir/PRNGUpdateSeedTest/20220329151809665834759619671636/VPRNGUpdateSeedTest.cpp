// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPRNGUpdateSeedTest.h"
#include "VPRNGUpdateSeedTest__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPRNGUpdateSeedTest::VPRNGUpdateSeedTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPRNGUpdateSeedTest__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VPRNGUpdateSeedTest::VPRNGUpdateSeedTest(const char* _vcname__)
    : VPRNGUpdateSeedTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPRNGUpdateSeedTest::~VPRNGUpdateSeedTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPRNGUpdateSeedTest___024root___eval_initial(VPRNGUpdateSeedTest___024root* vlSelf);
void VPRNGUpdateSeedTest___024root___eval_settle(VPRNGUpdateSeedTest___024root* vlSelf);
void VPRNGUpdateSeedTest___024root___eval(VPRNGUpdateSeedTest___024root* vlSelf);
#ifdef VL_DEBUG
void VPRNGUpdateSeedTest___024root___eval_debug_assertions(VPRNGUpdateSeedTest___024root* vlSelf);
#endif  // VL_DEBUG
void VPRNGUpdateSeedTest___024root___final(VPRNGUpdateSeedTest___024root* vlSelf);

static void _eval_initial_loop(VPRNGUpdateSeedTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPRNGUpdateSeedTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPRNGUpdateSeedTest___024root___eval_settle(&(vlSymsp->TOP));
        VPRNGUpdateSeedTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPRNGUpdateSeedTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPRNGUpdateSeedTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPRNGUpdateSeedTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPRNGUpdateSeedTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPRNGUpdateSeedTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPRNGUpdateSeedTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPRNGUpdateSeedTest::final() {
    VPRNGUpdateSeedTest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPRNGUpdateSeedTest___024root__trace_init_top(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPRNGUpdateSeedTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGUpdateSeedTest___024root*>(voidSelf);
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPRNGUpdateSeedTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_register(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPRNGUpdateSeedTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPRNGUpdateSeedTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
