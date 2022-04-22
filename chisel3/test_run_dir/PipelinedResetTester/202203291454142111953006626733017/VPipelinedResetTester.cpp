// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPipelinedResetTester.h"
#include "VPipelinedResetTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPipelinedResetTester::VPipelinedResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPipelinedResetTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VPipelinedResetTester::VPipelinedResetTester(const char* _vcname__)
    : VPipelinedResetTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPipelinedResetTester::~VPipelinedResetTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPipelinedResetTester___024root___eval_initial(VPipelinedResetTester___024root* vlSelf);
void VPipelinedResetTester___024root___eval_settle(VPipelinedResetTester___024root* vlSelf);
void VPipelinedResetTester___024root___eval(VPipelinedResetTester___024root* vlSelf);
#ifdef VL_DEBUG
void VPipelinedResetTester___024root___eval_debug_assertions(VPipelinedResetTester___024root* vlSelf);
#endif  // VL_DEBUG
void VPipelinedResetTester___024root___final(VPipelinedResetTester___024root* vlSelf);

static void _eval_initial_loop(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPipelinedResetTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPipelinedResetTester___024root___eval_settle(&(vlSymsp->TOP));
        VPipelinedResetTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPipelinedResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipelinedResetTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPipelinedResetTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPipelinedResetTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPipelinedResetTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPipelinedResetTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPipelinedResetTester::final() {
    VPipelinedResetTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPipelinedResetTester___024root__trace_init_top(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPipelinedResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelinedResetTester___024root*>(voidSelf);
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPipelinedResetTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_register(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPipelinedResetTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPipelinedResetTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
