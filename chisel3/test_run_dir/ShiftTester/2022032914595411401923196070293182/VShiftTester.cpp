// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VShiftTester.h"
#include "VShiftTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VShiftTester::VShiftTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VShiftTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VShiftTester::VShiftTester(const char* _vcname__)
    : VShiftTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VShiftTester::~VShiftTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VShiftTester___024root___eval_initial(VShiftTester___024root* vlSelf);
void VShiftTester___024root___eval_settle(VShiftTester___024root* vlSelf);
void VShiftTester___024root___eval(VShiftTester___024root* vlSelf);
#ifdef VL_DEBUG
void VShiftTester___024root___eval_debug_assertions(VShiftTester___024root* vlSelf);
#endif  // VL_DEBUG
void VShiftTester___024root___final(VShiftTester___024root* vlSelf);

static void _eval_initial_loop(VShiftTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VShiftTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VShiftTester___024root___eval_settle(&(vlSymsp->TOP));
        VShiftTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VShiftTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VShiftTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VShiftTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VShiftTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VShiftTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VShiftTester::final() {
    VShiftTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VShiftTester___024root__trace_init_top(VShiftTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShiftTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftTester___024root*>(voidSelf);
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VShiftTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VShiftTester___024root__trace_register(VShiftTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShiftTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VShiftTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
