// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VParameterizedAggregateOneHotTester.h"
#include "VParameterizedAggregateOneHotTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VParameterizedAggregateOneHotTester::VParameterizedAggregateOneHotTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VParameterizedAggregateOneHotTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VParameterizedAggregateOneHotTester::VParameterizedAggregateOneHotTester(const char* _vcname__)
    : VParameterizedAggregateOneHotTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VParameterizedAggregateOneHotTester::~VParameterizedAggregateOneHotTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VParameterizedAggregateOneHotTester___024root___eval_initial(VParameterizedAggregateOneHotTester___024root* vlSelf);
void VParameterizedAggregateOneHotTester___024root___eval_settle(VParameterizedAggregateOneHotTester___024root* vlSelf);
void VParameterizedAggregateOneHotTester___024root___eval(VParameterizedAggregateOneHotTester___024root* vlSelf);
#ifdef VL_DEBUG
void VParameterizedAggregateOneHotTester___024root___eval_debug_assertions(VParameterizedAggregateOneHotTester___024root* vlSelf);
#endif  // VL_DEBUG
void VParameterizedAggregateOneHotTester___024root___final(VParameterizedAggregateOneHotTester___024root* vlSelf);

static void _eval_initial_loop(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VParameterizedAggregateOneHotTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VParameterizedAggregateOneHotTester___024root___eval_settle(&(vlSymsp->TOP));
        VParameterizedAggregateOneHotTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VParameterizedAggregateOneHotTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VParameterizedAggregateOneHotTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VParameterizedAggregateOneHotTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VParameterizedAggregateOneHotTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VParameterizedAggregateOneHotTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VParameterizedAggregateOneHotTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VParameterizedAggregateOneHotTester::final() {
    VParameterizedAggregateOneHotTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VParameterizedAggregateOneHotTester___024root__trace_init_top(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParameterizedAggregateOneHotTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedAggregateOneHotTester___024root*>(voidSelf);
    VParameterizedAggregateOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VParameterizedAggregateOneHotTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_register(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedAggregateOneHotTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VParameterizedAggregateOneHotTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
