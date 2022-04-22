// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VValueTester.h"
#include "VValueTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VValueTester::VValueTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VValueTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VValueTester::VValueTester(const char* _vcname__)
    : VValueTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VValueTester::~VValueTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VValueTester___024root___eval_initial(VValueTester___024root* vlSelf);
void VValueTester___024root___eval_settle(VValueTester___024root* vlSelf);
void VValueTester___024root___eval(VValueTester___024root* vlSelf);
#ifdef VL_DEBUG
void VValueTester___024root___eval_debug_assertions(VValueTester___024root* vlSelf);
#endif  // VL_DEBUG
void VValueTester___024root___final(VValueTester___024root* vlSelf);

static void _eval_initial_loop(VValueTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VValueTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VValueTester___024root___eval_settle(&(vlSymsp->TOP));
        VValueTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VValueTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VValueTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VValueTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VValueTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VValueTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VValueTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VValueTester::final() {
    VValueTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VValueTester___024root__trace_init_top(VValueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VValueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VValueTester___024root*>(voidSelf);
    VValueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VValueTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VValueTester___024root__trace_register(VValueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VValueTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VValueTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
