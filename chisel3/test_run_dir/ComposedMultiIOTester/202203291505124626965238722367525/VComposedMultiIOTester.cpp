// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VComposedMultiIOTester.h"
#include "VComposedMultiIOTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VComposedMultiIOTester::VComposedMultiIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VComposedMultiIOTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VComposedMultiIOTester::VComposedMultiIOTester(const char* _vcname__)
    : VComposedMultiIOTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VComposedMultiIOTester::~VComposedMultiIOTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VComposedMultiIOTester___024root___eval_initial(VComposedMultiIOTester___024root* vlSelf);
void VComposedMultiIOTester___024root___eval_settle(VComposedMultiIOTester___024root* vlSelf);
void VComposedMultiIOTester___024root___eval(VComposedMultiIOTester___024root* vlSelf);
#ifdef VL_DEBUG
void VComposedMultiIOTester___024root___eval_debug_assertions(VComposedMultiIOTester___024root* vlSelf);
#endif  // VL_DEBUG
void VComposedMultiIOTester___024root___final(VComposedMultiIOTester___024root* vlSelf);

static void _eval_initial_loop(VComposedMultiIOTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VComposedMultiIOTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VComposedMultiIOTester___024root___eval_settle(&(vlSymsp->TOP));
        VComposedMultiIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VComposedMultiIOTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComposedMultiIOTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VComposedMultiIOTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VComposedMultiIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VComposedMultiIOTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VComposedMultiIOTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VComposedMultiIOTester::final() {
    VComposedMultiIOTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VComposedMultiIOTester___024root__trace_init_top(VComposedMultiIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VComposedMultiIOTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComposedMultiIOTester___024root*>(voidSelf);
    VComposedMultiIOTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VComposedMultiIOTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VComposedMultiIOTester___024root__trace_register(VComposedMultiIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VComposedMultiIOTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VComposedMultiIOTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
