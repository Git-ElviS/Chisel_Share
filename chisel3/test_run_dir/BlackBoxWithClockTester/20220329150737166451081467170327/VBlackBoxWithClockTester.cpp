// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBlackBoxWithClockTester.h"
#include "VBlackBoxWithClockTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBlackBoxWithClockTester::VBlackBoxWithClockTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBlackBoxWithClockTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBlackBoxWithClockTester::VBlackBoxWithClockTester(const char* _vcname__)
    : VBlackBoxWithClockTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBlackBoxWithClockTester::~VBlackBoxWithClockTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBlackBoxWithClockTester___024root___eval_initial(VBlackBoxWithClockTester___024root* vlSelf);
void VBlackBoxWithClockTester___024root___eval_settle(VBlackBoxWithClockTester___024root* vlSelf);
void VBlackBoxWithClockTester___024root___eval(VBlackBoxWithClockTester___024root* vlSelf);
#ifdef VL_DEBUG
void VBlackBoxWithClockTester___024root___eval_debug_assertions(VBlackBoxWithClockTester___024root* vlSelf);
#endif  // VL_DEBUG
void VBlackBoxWithClockTester___024root___final(VBlackBoxWithClockTester___024root* vlSelf);

static void _eval_initial_loop(VBlackBoxWithClockTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBlackBoxWithClockTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBlackBoxWithClockTester___024root___eval_settle(&(vlSymsp->TOP));
        VBlackBoxWithClockTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBlackBoxWithClockTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxWithClockTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBlackBoxWithClockTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBlackBoxWithClockTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBlackBoxWithClockTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBlackBoxWithClockTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBlackBoxWithClockTester::final() {
    VBlackBoxWithClockTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBlackBoxWithClockTester___024root__trace_init_top(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxWithClockTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxWithClockTester___024root*>(voidSelf);
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBlackBoxWithClockTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_register(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxWithClockTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBlackBoxWithClockTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
