// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VOverlappedWhenTester.h"
#include "VOverlappedWhenTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VOverlappedWhenTester::VOverlappedWhenTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VOverlappedWhenTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VOverlappedWhenTester::VOverlappedWhenTester(const char* _vcname__)
    : VOverlappedWhenTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VOverlappedWhenTester::~VOverlappedWhenTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VOverlappedWhenTester___024root___eval_initial(VOverlappedWhenTester___024root* vlSelf);
void VOverlappedWhenTester___024root___eval_settle(VOverlappedWhenTester___024root* vlSelf);
void VOverlappedWhenTester___024root___eval(VOverlappedWhenTester___024root* vlSelf);
#ifdef VL_DEBUG
void VOverlappedWhenTester___024root___eval_debug_assertions(VOverlappedWhenTester___024root* vlSelf);
#endif  // VL_DEBUG
void VOverlappedWhenTester___024root___final(VOverlappedWhenTester___024root* vlSelf);

static void _eval_initial_loop(VOverlappedWhenTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VOverlappedWhenTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VOverlappedWhenTester___024root___eval_settle(&(vlSymsp->TOP));
        VOverlappedWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VOverlappedWhenTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOverlappedWhenTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VOverlappedWhenTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VOverlappedWhenTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VOverlappedWhenTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VOverlappedWhenTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VOverlappedWhenTester::final() {
    VOverlappedWhenTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VOverlappedWhenTester___024root__trace_init_top(VOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VOverlappedWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOverlappedWhenTester___024root*>(voidSelf);
    VOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VOverlappedWhenTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VOverlappedWhenTester___024root__trace_register(VOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VOverlappedWhenTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VOverlappedWhenTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
