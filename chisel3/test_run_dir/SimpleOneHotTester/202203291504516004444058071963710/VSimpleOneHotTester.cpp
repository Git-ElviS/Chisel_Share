// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimpleOneHotTester.h"
#include "VSimpleOneHotTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSimpleOneHotTester::VSimpleOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSimpleOneHotTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSimpleOneHotTester::VSimpleOneHotTester(const char* _vcname__)
    : VSimpleOneHotTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSimpleOneHotTester::~VSimpleOneHotTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSimpleOneHotTester___024root___eval_initial(VSimpleOneHotTester___024root* vlSelf);
void VSimpleOneHotTester___024root___eval_settle(VSimpleOneHotTester___024root* vlSelf);
void VSimpleOneHotTester___024root___eval(VSimpleOneHotTester___024root* vlSelf);
#ifdef VL_DEBUG
void VSimpleOneHotTester___024root___eval_debug_assertions(VSimpleOneHotTester___024root* vlSelf);
#endif  // VL_DEBUG
void VSimpleOneHotTester___024root___final(VSimpleOneHotTester___024root* vlSelf);

static void _eval_initial_loop(VSimpleOneHotTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSimpleOneHotTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSimpleOneHotTester___024root___eval_settle(&(vlSymsp->TOP));
        VSimpleOneHotTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSimpleOneHotTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimpleOneHotTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimpleOneHotTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSimpleOneHotTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSimpleOneHotTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSimpleOneHotTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSimpleOneHotTester::final() {
    VSimpleOneHotTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSimpleOneHotTester___024root__trace_init_top(VSimpleOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimpleOneHotTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleOneHotTester___024root*>(voidSelf);
    VSimpleOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSimpleOneHotTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSimpleOneHotTester___024root__trace_register(VSimpleOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimpleOneHotTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSimpleOneHotTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
