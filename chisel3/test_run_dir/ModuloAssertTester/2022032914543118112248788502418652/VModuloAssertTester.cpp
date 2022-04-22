// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VModuloAssertTester.h"
#include "VModuloAssertTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VModuloAssertTester::VModuloAssertTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VModuloAssertTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VModuloAssertTester::VModuloAssertTester(const char* _vcname__)
    : VModuloAssertTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VModuloAssertTester::~VModuloAssertTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VModuloAssertTester___024root___eval_initial(VModuloAssertTester___024root* vlSelf);
void VModuloAssertTester___024root___eval_settle(VModuloAssertTester___024root* vlSelf);
void VModuloAssertTester___024root___eval(VModuloAssertTester___024root* vlSelf);
#ifdef VL_DEBUG
void VModuloAssertTester___024root___eval_debug_assertions(VModuloAssertTester___024root* vlSelf);
#endif  // VL_DEBUG
void VModuloAssertTester___024root___final(VModuloAssertTester___024root* vlSelf);

static void _eval_initial_loop(VModuloAssertTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VModuloAssertTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VModuloAssertTester___024root___eval_settle(&(vlSymsp->TOP));
        VModuloAssertTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VModuloAssertTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VModuloAssertTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VModuloAssertTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VModuloAssertTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VModuloAssertTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VModuloAssertTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VModuloAssertTester::final() {
    VModuloAssertTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VModuloAssertTester___024root__trace_init_top(VModuloAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VModuloAssertTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VModuloAssertTester___024root*>(voidSelf);
    VModuloAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VModuloAssertTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VModuloAssertTester___024root__trace_register(VModuloAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VModuloAssertTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VModuloAssertTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
