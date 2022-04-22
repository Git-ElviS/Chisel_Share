// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCrossConnectTester.h"
#include "VCrossConnectTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCrossConnectTester::VCrossConnectTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCrossConnectTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VCrossConnectTester::VCrossConnectTester(const char* _vcname__)
    : VCrossConnectTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCrossConnectTester::~VCrossConnectTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCrossConnectTester___024root___eval_initial(VCrossConnectTester___024root* vlSelf);
void VCrossConnectTester___024root___eval_settle(VCrossConnectTester___024root* vlSelf);
void VCrossConnectTester___024root___eval(VCrossConnectTester___024root* vlSelf);
#ifdef VL_DEBUG
void VCrossConnectTester___024root___eval_debug_assertions(VCrossConnectTester___024root* vlSelf);
#endif  // VL_DEBUG
void VCrossConnectTester___024root___final(VCrossConnectTester___024root* vlSelf);

static void _eval_initial_loop(VCrossConnectTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCrossConnectTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCrossConnectTester___024root___eval_settle(&(vlSymsp->TOP));
        VCrossConnectTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCrossConnectTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCrossConnectTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCrossConnectTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCrossConnectTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VCrossConnectTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCrossConnectTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCrossConnectTester::final() {
    VCrossConnectTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VCrossConnectTester___024root__trace_init_top(VCrossConnectTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCrossConnectTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCrossConnectTester___024root*>(voidSelf);
    VCrossConnectTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCrossConnectTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCrossConnectTester___024root__trace_register(VCrossConnectTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCrossConnectTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCrossConnectTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
