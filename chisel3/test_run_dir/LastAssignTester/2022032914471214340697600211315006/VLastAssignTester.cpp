// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLastAssignTester.h"
#include "VLastAssignTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLastAssignTester::VLastAssignTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VLastAssignTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VLastAssignTester::VLastAssignTester(const char* _vcname__)
    : VLastAssignTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VLastAssignTester::~VLastAssignTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VLastAssignTester___024root___eval_initial(VLastAssignTester___024root* vlSelf);
void VLastAssignTester___024root___eval_settle(VLastAssignTester___024root* vlSelf);
void VLastAssignTester___024root___eval(VLastAssignTester___024root* vlSelf);
#ifdef VL_DEBUG
void VLastAssignTester___024root___eval_debug_assertions(VLastAssignTester___024root* vlSelf);
#endif  // VL_DEBUG
void VLastAssignTester___024root___final(VLastAssignTester___024root* vlSelf);

static void _eval_initial_loop(VLastAssignTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VLastAssignTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VLastAssignTester___024root___eval_settle(&(vlSymsp->TOP));
        VLastAssignTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VLastAssignTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLastAssignTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLastAssignTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VLastAssignTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VLastAssignTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VLastAssignTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VLastAssignTester::final() {
    VLastAssignTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VLastAssignTester___024root__trace_init_top(VLastAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLastAssignTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLastAssignTester___024root*>(voidSelf);
    VLastAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLastAssignTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLastAssignTester___024root__trace_register(VLastAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLastAssignTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLastAssignTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
