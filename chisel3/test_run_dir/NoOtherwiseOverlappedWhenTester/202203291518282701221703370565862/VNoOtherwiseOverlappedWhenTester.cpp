// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNoOtherwiseOverlappedWhenTester.h"
#include "VNoOtherwiseOverlappedWhenTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VNoOtherwiseOverlappedWhenTester::VNoOtherwiseOverlappedWhenTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VNoOtherwiseOverlappedWhenTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VNoOtherwiseOverlappedWhenTester::VNoOtherwiseOverlappedWhenTester(const char* _vcname__)
    : VNoOtherwiseOverlappedWhenTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VNoOtherwiseOverlappedWhenTester::~VNoOtherwiseOverlappedWhenTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VNoOtherwiseOverlappedWhenTester___024root___eval_initial(VNoOtherwiseOverlappedWhenTester___024root* vlSelf);
void VNoOtherwiseOverlappedWhenTester___024root___eval_settle(VNoOtherwiseOverlappedWhenTester___024root* vlSelf);
void VNoOtherwiseOverlappedWhenTester___024root___eval(VNoOtherwiseOverlappedWhenTester___024root* vlSelf);
#ifdef VL_DEBUG
void VNoOtherwiseOverlappedWhenTester___024root___eval_debug_assertions(VNoOtherwiseOverlappedWhenTester___024root* vlSelf);
#endif  // VL_DEBUG
void VNoOtherwiseOverlappedWhenTester___024root___final(VNoOtherwiseOverlappedWhenTester___024root* vlSelf);

static void _eval_initial_loop(VNoOtherwiseOverlappedWhenTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VNoOtherwiseOverlappedWhenTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VNoOtherwiseOverlappedWhenTester___024root___eval_settle(&(vlSymsp->TOP));
        VNoOtherwiseOverlappedWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VNoOtherwiseOverlappedWhenTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNoOtherwiseOverlappedWhenTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNoOtherwiseOverlappedWhenTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VNoOtherwiseOverlappedWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VNoOtherwiseOverlappedWhenTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VNoOtherwiseOverlappedWhenTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester::final() {
    VNoOtherwiseOverlappedWhenTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VNoOtherwiseOverlappedWhenTester___024root__trace_init_top(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VNoOtherwiseOverlappedWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNoOtherwiseOverlappedWhenTester___024root*>(voidSelf);
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VNoOtherwiseOverlappedWhenTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_register(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VNoOtherwiseOverlappedWhenTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
