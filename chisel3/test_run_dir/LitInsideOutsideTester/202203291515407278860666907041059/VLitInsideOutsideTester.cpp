// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLitInsideOutsideTester.h"
#include "VLitInsideOutsideTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLitInsideOutsideTester::VLitInsideOutsideTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VLitInsideOutsideTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VLitInsideOutsideTester::VLitInsideOutsideTester(const char* _vcname__)
    : VLitInsideOutsideTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VLitInsideOutsideTester::~VLitInsideOutsideTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VLitInsideOutsideTester___024root___eval_initial(VLitInsideOutsideTester___024root* vlSelf);
void VLitInsideOutsideTester___024root___eval_settle(VLitInsideOutsideTester___024root* vlSelf);
void VLitInsideOutsideTester___024root___eval(VLitInsideOutsideTester___024root* vlSelf);
#ifdef VL_DEBUG
void VLitInsideOutsideTester___024root___eval_debug_assertions(VLitInsideOutsideTester___024root* vlSelf);
#endif  // VL_DEBUG
void VLitInsideOutsideTester___024root___final(VLitInsideOutsideTester___024root* vlSelf);

static void _eval_initial_loop(VLitInsideOutsideTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VLitInsideOutsideTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VLitInsideOutsideTester___024root___eval_settle(&(vlSymsp->TOP));
        VLitInsideOutsideTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VLitInsideOutsideTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLitInsideOutsideTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLitInsideOutsideTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VLitInsideOutsideTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VLitInsideOutsideTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VLitInsideOutsideTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VLitInsideOutsideTester::final() {
    VLitInsideOutsideTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VLitInsideOutsideTester___024root__trace_init_top(VLitInsideOutsideTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLitInsideOutsideTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLitInsideOutsideTester___024root*>(voidSelf);
    VLitInsideOutsideTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLitInsideOutsideTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLitInsideOutsideTester___024root__trace_register(VLitInsideOutsideTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLitInsideOutsideTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLitInsideOutsideTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
