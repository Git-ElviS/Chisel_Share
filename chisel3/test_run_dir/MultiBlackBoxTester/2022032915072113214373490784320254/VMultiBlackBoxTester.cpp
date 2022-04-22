// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMultiBlackBoxTester.h"
#include "VMultiBlackBoxTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMultiBlackBoxTester::VMultiBlackBoxTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMultiBlackBoxTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMultiBlackBoxTester::VMultiBlackBoxTester(const char* _vcname__)
    : VMultiBlackBoxTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMultiBlackBoxTester::~VMultiBlackBoxTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMultiBlackBoxTester___024root___eval_initial(VMultiBlackBoxTester___024root* vlSelf);
void VMultiBlackBoxTester___024root___eval_settle(VMultiBlackBoxTester___024root* vlSelf);
void VMultiBlackBoxTester___024root___eval(VMultiBlackBoxTester___024root* vlSelf);
#ifdef VL_DEBUG
void VMultiBlackBoxTester___024root___eval_debug_assertions(VMultiBlackBoxTester___024root* vlSelf);
#endif  // VL_DEBUG
void VMultiBlackBoxTester___024root___final(VMultiBlackBoxTester___024root* vlSelf);

static void _eval_initial_loop(VMultiBlackBoxTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMultiBlackBoxTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMultiBlackBoxTester___024root___eval_settle(&(vlSymsp->TOP));
        VMultiBlackBoxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMultiBlackBoxTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiBlackBoxTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMultiBlackBoxTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMultiBlackBoxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMultiBlackBoxTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMultiBlackBoxTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMultiBlackBoxTester::final() {
    VMultiBlackBoxTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMultiBlackBoxTester___024root__trace_init_top(VMultiBlackBoxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiBlackBoxTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiBlackBoxTester___024root*>(voidSelf);
    VMultiBlackBoxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMultiBlackBoxTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMultiBlackBoxTester___024root__trace_register(VMultiBlackBoxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiBlackBoxTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMultiBlackBoxTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
