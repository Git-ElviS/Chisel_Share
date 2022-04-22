// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBlackBoxWithParamsTester.h"
#include "VBlackBoxWithParamsTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBlackBoxWithParamsTester::VBlackBoxWithParamsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBlackBoxWithParamsTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBlackBoxWithParamsTester::VBlackBoxWithParamsTester(const char* _vcname__)
    : VBlackBoxWithParamsTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBlackBoxWithParamsTester::~VBlackBoxWithParamsTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBlackBoxWithParamsTester___024root___eval_initial(VBlackBoxWithParamsTester___024root* vlSelf);
void VBlackBoxWithParamsTester___024root___eval_settle(VBlackBoxWithParamsTester___024root* vlSelf);
void VBlackBoxWithParamsTester___024root___eval(VBlackBoxWithParamsTester___024root* vlSelf);
#ifdef VL_DEBUG
void VBlackBoxWithParamsTester___024root___eval_debug_assertions(VBlackBoxWithParamsTester___024root* vlSelf);
#endif  // VL_DEBUG
void VBlackBoxWithParamsTester___024root___final(VBlackBoxWithParamsTester___024root* vlSelf);

static void _eval_initial_loop(VBlackBoxWithParamsTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBlackBoxWithParamsTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBlackBoxWithParamsTester___024root___eval_settle(&(vlSymsp->TOP));
        VBlackBoxWithParamsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBlackBoxWithParamsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxWithParamsTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBlackBoxWithParamsTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBlackBoxWithParamsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBlackBoxWithParamsTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBlackBoxWithParamsTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBlackBoxWithParamsTester::final() {
    VBlackBoxWithParamsTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBlackBoxWithParamsTester___024root__trace_init_top(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxWithParamsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxWithParamsTester___024root*>(voidSelf);
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBlackBoxWithParamsTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBlackBoxWithParamsTester___024root__trace_register(VBlackBoxWithParamsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxWithParamsTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBlackBoxWithParamsTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
