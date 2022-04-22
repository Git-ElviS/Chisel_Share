// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIOTester.h"
#include "VIOTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIOTester::VIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIOTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIOTester::VIOTester(const char* _vcname__)
    : VIOTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIOTester::~VIOTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIOTester___024root___eval_initial(VIOTester___024root* vlSelf);
void VIOTester___024root___eval_settle(VIOTester___024root* vlSelf);
void VIOTester___024root___eval(VIOTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIOTester___024root___eval_debug_assertions(VIOTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIOTester___024root___final(VIOTester___024root* vlSelf);

static void _eval_initial_loop(VIOTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIOTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIOTester___024root___eval_settle(&(vlSymsp->TOP));
        VIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIOTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIOTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIOTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIOTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIOTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIOTester::final() {
    VIOTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIOTester___024root__trace_init_top(VIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIOTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIOTester___024root*>(voidSelf);
    VIOTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIOTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIOTester___024root__trace_register(VIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIOTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIOTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
