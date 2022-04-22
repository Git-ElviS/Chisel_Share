// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBlackBoxTester.h"
#include "VBlackBoxTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBlackBoxTester::VBlackBoxTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBlackBoxTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBlackBoxTester::VBlackBoxTester(const char* _vcname__)
    : VBlackBoxTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBlackBoxTester::~VBlackBoxTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBlackBoxTester___024root___eval_initial(VBlackBoxTester___024root* vlSelf);
void VBlackBoxTester___024root___eval_settle(VBlackBoxTester___024root* vlSelf);
void VBlackBoxTester___024root___eval(VBlackBoxTester___024root* vlSelf);
#ifdef VL_DEBUG
void VBlackBoxTester___024root___eval_debug_assertions(VBlackBoxTester___024root* vlSelf);
#endif  // VL_DEBUG
void VBlackBoxTester___024root___final(VBlackBoxTester___024root* vlSelf);

static void _eval_initial_loop(VBlackBoxTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBlackBoxTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBlackBoxTester___024root___eval_settle(&(vlSymsp->TOP));
        VBlackBoxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBlackBoxTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBlackBoxTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBlackBoxTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBlackBoxTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBlackBoxTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBlackBoxTester::final() {
    VBlackBoxTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBlackBoxTester___024root__trace_init_top(VBlackBoxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxTester___024root*>(voidSelf);
    VBlackBoxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBlackBoxTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBlackBoxTester___024root__trace_register(VBlackBoxTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBlackBoxTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
