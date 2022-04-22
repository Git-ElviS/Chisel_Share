// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VWidthTester.h"
#include "VWidthTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VWidthTester::VWidthTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VWidthTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VWidthTester::VWidthTester(const char* _vcname__)
    : VWidthTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VWidthTester::~VWidthTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VWidthTester___024root___eval_initial(VWidthTester___024root* vlSelf);
void VWidthTester___024root___eval_settle(VWidthTester___024root* vlSelf);
void VWidthTester___024root___eval(VWidthTester___024root* vlSelf);
#ifdef VL_DEBUG
void VWidthTester___024root___eval_debug_assertions(VWidthTester___024root* vlSelf);
#endif  // VL_DEBUG
void VWidthTester___024root___final(VWidthTester___024root* vlSelf);

static void _eval_initial_loop(VWidthTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VWidthTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VWidthTester___024root___eval_settle(&(vlSymsp->TOP));
        VWidthTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VWidthTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VWidthTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VWidthTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VWidthTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VWidthTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VWidthTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VWidthTester::final() {
    VWidthTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VWidthTester___024root__trace_init_top(VWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VWidthTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWidthTester___024root*>(voidSelf);
    VWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VWidthTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VWidthTester___024root__trace_register(VWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWidthTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VWidthTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
