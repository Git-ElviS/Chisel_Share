// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VComplexAssignTester.h"
#include "VComplexAssignTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VComplexAssignTester::VComplexAssignTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VComplexAssignTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VComplexAssignTester::VComplexAssignTester(const char* _vcname__)
    : VComplexAssignTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VComplexAssignTester::~VComplexAssignTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VComplexAssignTester___024root___eval_initial(VComplexAssignTester___024root* vlSelf);
void VComplexAssignTester___024root___eval_settle(VComplexAssignTester___024root* vlSelf);
void VComplexAssignTester___024root___eval(VComplexAssignTester___024root* vlSelf);
#ifdef VL_DEBUG
void VComplexAssignTester___024root___eval_debug_assertions(VComplexAssignTester___024root* vlSelf);
#endif  // VL_DEBUG
void VComplexAssignTester___024root___final(VComplexAssignTester___024root* vlSelf);

static void _eval_initial_loop(VComplexAssignTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VComplexAssignTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VComplexAssignTester___024root___eval_settle(&(vlSymsp->TOP));
        VComplexAssignTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VComplexAssignTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComplexAssignTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VComplexAssignTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VComplexAssignTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VComplexAssignTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VComplexAssignTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VComplexAssignTester::final() {
    VComplexAssignTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VComplexAssignTester___024root__trace_init_top(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VComplexAssignTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexAssignTester___024root*>(voidSelf);
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VComplexAssignTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VComplexAssignTester___024root__trace_register(VComplexAssignTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VComplexAssignTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VComplexAssignTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
