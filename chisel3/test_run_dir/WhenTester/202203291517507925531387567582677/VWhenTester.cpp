// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VWhenTester.h"
#include "VWhenTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VWhenTester::VWhenTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VWhenTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VWhenTester::VWhenTester(const char* _vcname__)
    : VWhenTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VWhenTester::~VWhenTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VWhenTester___024root___eval_initial(VWhenTester___024root* vlSelf);
void VWhenTester___024root___eval_settle(VWhenTester___024root* vlSelf);
void VWhenTester___024root___eval(VWhenTester___024root* vlSelf);
#ifdef VL_DEBUG
void VWhenTester___024root___eval_debug_assertions(VWhenTester___024root* vlSelf);
#endif  // VL_DEBUG
void VWhenTester___024root___final(VWhenTester___024root* vlSelf);

static void _eval_initial_loop(VWhenTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VWhenTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VWhenTester___024root___eval_settle(&(vlSymsp->TOP));
        VWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VWhenTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VWhenTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VWhenTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VWhenTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VWhenTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VWhenTester::final() {
    VWhenTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VWhenTester___024root__trace_init_top(VWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWhenTester___024root*>(voidSelf);
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VWhenTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VWhenTester___024root__trace_register(VWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWhenTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VWhenTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
