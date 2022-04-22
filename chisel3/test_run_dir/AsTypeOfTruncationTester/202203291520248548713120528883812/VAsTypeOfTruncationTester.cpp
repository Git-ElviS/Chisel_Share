// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsTypeOfTruncationTester.h"
#include "VAsTypeOfTruncationTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsTypeOfTruncationTester::VAsTypeOfTruncationTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsTypeOfTruncationTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsTypeOfTruncationTester::VAsTypeOfTruncationTester(const char* _vcname__)
    : VAsTypeOfTruncationTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsTypeOfTruncationTester::~VAsTypeOfTruncationTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsTypeOfTruncationTester___024root___eval_initial(VAsTypeOfTruncationTester___024root* vlSelf);
void VAsTypeOfTruncationTester___024root___eval_settle(VAsTypeOfTruncationTester___024root* vlSelf);
void VAsTypeOfTruncationTester___024root___eval(VAsTypeOfTruncationTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsTypeOfTruncationTester___024root___eval_debug_assertions(VAsTypeOfTruncationTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsTypeOfTruncationTester___024root___final(VAsTypeOfTruncationTester___024root* vlSelf);

static void _eval_initial_loop(VAsTypeOfTruncationTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsTypeOfTruncationTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsTypeOfTruncationTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsTypeOfTruncationTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAsTypeOfTruncationTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsTypeOfTruncationTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsTypeOfTruncationTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsTypeOfTruncationTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsTypeOfTruncationTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsTypeOfTruncationTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsTypeOfTruncationTester::final() {
    VAsTypeOfTruncationTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsTypeOfTruncationTester___024root__trace_init_top(VAsTypeOfTruncationTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsTypeOfTruncationTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsTypeOfTruncationTester___024root*>(voidSelf);
    VAsTypeOfTruncationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsTypeOfTruncationTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsTypeOfTruncationTester___024root__trace_register(VAsTypeOfTruncationTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsTypeOfTruncationTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsTypeOfTruncationTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
