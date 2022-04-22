// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCountTester.h"
#include "VCountTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCountTester::VCountTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCountTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VCountTester::VCountTester(const char* _vcname__)
    : VCountTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCountTester::~VCountTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCountTester___024root___eval_initial(VCountTester___024root* vlSelf);
void VCountTester___024root___eval_settle(VCountTester___024root* vlSelf);
void VCountTester___024root___eval(VCountTester___024root* vlSelf);
#ifdef VL_DEBUG
void VCountTester___024root___eval_debug_assertions(VCountTester___024root* vlSelf);
#endif  // VL_DEBUG
void VCountTester___024root___final(VCountTester___024root* vlSelf);

static void _eval_initial_loop(VCountTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCountTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCountTester___024root___eval_settle(&(vlSymsp->TOP));
        VCountTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCountTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCountTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCountTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCountTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VCountTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCountTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCountTester::final() {
    VCountTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VCountTester___024root__trace_init_top(VCountTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCountTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCountTester___024root*>(voidSelf);
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCountTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCountTester___024root__trace_register(VCountTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCountTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCountTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
