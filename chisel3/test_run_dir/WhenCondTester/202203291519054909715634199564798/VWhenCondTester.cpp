// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VWhenCondTester.h"
#include "VWhenCondTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VWhenCondTester::VWhenCondTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VWhenCondTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VWhenCondTester::VWhenCondTester(const char* _vcname__)
    : VWhenCondTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VWhenCondTester::~VWhenCondTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VWhenCondTester___024root___eval_initial(VWhenCondTester___024root* vlSelf);
void VWhenCondTester___024root___eval_settle(VWhenCondTester___024root* vlSelf);
void VWhenCondTester___024root___eval(VWhenCondTester___024root* vlSelf);
#ifdef VL_DEBUG
void VWhenCondTester___024root___eval_debug_assertions(VWhenCondTester___024root* vlSelf);
#endif  // VL_DEBUG
void VWhenCondTester___024root___final(VWhenCondTester___024root* vlSelf);

static void _eval_initial_loop(VWhenCondTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VWhenCondTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VWhenCondTester___024root___eval_settle(&(vlSymsp->TOP));
        VWhenCondTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VWhenCondTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VWhenCondTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VWhenCondTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VWhenCondTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VWhenCondTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VWhenCondTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VWhenCondTester::final() {
    VWhenCondTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VWhenCondTester___024root__trace_init_top(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VWhenCondTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWhenCondTester___024root*>(voidSelf);
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VWhenCondTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VWhenCondTester___024root__trace_register(VWhenCondTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWhenCondTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VWhenCondTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
