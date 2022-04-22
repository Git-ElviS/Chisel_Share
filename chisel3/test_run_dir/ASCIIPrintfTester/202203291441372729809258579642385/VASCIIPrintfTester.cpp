// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VASCIIPrintfTester.h"
#include "VASCIIPrintfTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VASCIIPrintfTester::VASCIIPrintfTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VASCIIPrintfTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VASCIIPrintfTester::VASCIIPrintfTester(const char* _vcname__)
    : VASCIIPrintfTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VASCIIPrintfTester::~VASCIIPrintfTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VASCIIPrintfTester___024root___eval_initial(VASCIIPrintfTester___024root* vlSelf);
void VASCIIPrintfTester___024root___eval_settle(VASCIIPrintfTester___024root* vlSelf);
void VASCIIPrintfTester___024root___eval(VASCIIPrintfTester___024root* vlSelf);
#ifdef VL_DEBUG
void VASCIIPrintfTester___024root___eval_debug_assertions(VASCIIPrintfTester___024root* vlSelf);
#endif  // VL_DEBUG
void VASCIIPrintfTester___024root___final(VASCIIPrintfTester___024root* vlSelf);

static void _eval_initial_loop(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VASCIIPrintfTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VASCIIPrintfTester___024root___eval_settle(&(vlSymsp->TOP));
        VASCIIPrintfTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VASCIIPrintfTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VASCIIPrintfTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VASCIIPrintfTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VASCIIPrintfTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VASCIIPrintfTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VASCIIPrintfTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VASCIIPrintfTester::final() {
    VASCIIPrintfTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VASCIIPrintfTester___024root__trace_init_top(VASCIIPrintfTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VASCIIPrintfTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VASCIIPrintfTester___024root*>(voidSelf);
    VASCIIPrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VASCIIPrintfTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VASCIIPrintfTester___024root__trace_register(VASCIIPrintfTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VASCIIPrintfTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VASCIIPrintfTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
