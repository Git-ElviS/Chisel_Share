// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegTester.h"
#include "VRegTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegTester::VRegTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRegTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRegTester::VRegTester(const char* _vcname__)
    : VRegTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRegTester::~VRegTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRegTester___024root___eval_initial(VRegTester___024root* vlSelf);
void VRegTester___024root___eval_settle(VRegTester___024root* vlSelf);
void VRegTester___024root___eval(VRegTester___024root* vlSelf);
#ifdef VL_DEBUG
void VRegTester___024root___eval_debug_assertions(VRegTester___024root* vlSelf);
#endif  // VL_DEBUG
void VRegTester___024root___final(VRegTester___024root* vlSelf);

static void _eval_initial_loop(VRegTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRegTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRegTester___024root___eval_settle(&(vlSymsp->TOP));
        VRegTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRegTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRegTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRegTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRegTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRegTester::final() {
    VRegTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRegTester___024root__trace_init_top(VRegTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegTester___024root*>(voidSelf);
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRegTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRegTester___024root__trace_register(VRegTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRegTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
