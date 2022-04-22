// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBlackBoxFlipTester.h"
#include "VBlackBoxFlipTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBlackBoxFlipTester::VBlackBoxFlipTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBlackBoxFlipTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBlackBoxFlipTester::VBlackBoxFlipTester(const char* _vcname__)
    : VBlackBoxFlipTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBlackBoxFlipTester::~VBlackBoxFlipTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBlackBoxFlipTester___024root___eval_initial(VBlackBoxFlipTester___024root* vlSelf);
void VBlackBoxFlipTester___024root___eval_settle(VBlackBoxFlipTester___024root* vlSelf);
void VBlackBoxFlipTester___024root___eval(VBlackBoxFlipTester___024root* vlSelf);
#ifdef VL_DEBUG
void VBlackBoxFlipTester___024root___eval_debug_assertions(VBlackBoxFlipTester___024root* vlSelf);
#endif  // VL_DEBUG
void VBlackBoxFlipTester___024root___final(VBlackBoxFlipTester___024root* vlSelf);

static void _eval_initial_loop(VBlackBoxFlipTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBlackBoxFlipTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBlackBoxFlipTester___024root___eval_settle(&(vlSymsp->TOP));
        VBlackBoxFlipTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBlackBoxFlipTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxFlipTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBlackBoxFlipTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBlackBoxFlipTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBlackBoxFlipTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBlackBoxFlipTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBlackBoxFlipTester::final() {
    VBlackBoxFlipTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBlackBoxFlipTester___024root__trace_init_top(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxFlipTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxFlipTester___024root*>(voidSelf);
    VBlackBoxFlipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBlackBoxFlipTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_register(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxFlipTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBlackBoxFlipTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
