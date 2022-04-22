// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIsLitTester.h"
#include "VIsLitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIsLitTester::VIsLitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIsLitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VIsLitTester::VIsLitTester(const char* _vcname__)
    : VIsLitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIsLitTester::~VIsLitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIsLitTester___024root___eval_initial(VIsLitTester___024root* vlSelf);
void VIsLitTester___024root___eval_settle(VIsLitTester___024root* vlSelf);
void VIsLitTester___024root___eval(VIsLitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VIsLitTester___024root___eval_debug_assertions(VIsLitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VIsLitTester___024root___final(VIsLitTester___024root* vlSelf);

static void _eval_initial_loop(VIsLitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIsLitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIsLitTester___024root___eval_settle(&(vlSymsp->TOP));
        VIsLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VIsLitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIsLitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIsLitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIsLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VIsLitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIsLitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VIsLitTester::final() {
    VIsLitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VIsLitTester___024root__trace_init_top(VIsLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIsLitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIsLitTester___024root*>(voidSelf);
    VIsLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VIsLitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VIsLitTester___024root__trace_register(VIsLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIsLitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIsLitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
