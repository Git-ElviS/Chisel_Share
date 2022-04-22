// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VExtModuleTester.h"
#include "VExtModuleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VExtModuleTester::VExtModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VExtModuleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VExtModuleTester::VExtModuleTester(const char* _vcname__)
    : VExtModuleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VExtModuleTester::~VExtModuleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VExtModuleTester___024root___eval_initial(VExtModuleTester___024root* vlSelf);
void VExtModuleTester___024root___eval_settle(VExtModuleTester___024root* vlSelf);
void VExtModuleTester___024root___eval(VExtModuleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VExtModuleTester___024root___eval_debug_assertions(VExtModuleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VExtModuleTester___024root___final(VExtModuleTester___024root* vlSelf);

static void _eval_initial_loop(VExtModuleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VExtModuleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VExtModuleTester___024root___eval_settle(&(vlSymsp->TOP));
        VExtModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VExtModuleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExtModuleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VExtModuleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VExtModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VExtModuleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VExtModuleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VExtModuleTester::final() {
    VExtModuleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VExtModuleTester___024root__trace_init_top(VExtModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VExtModuleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExtModuleTester___024root*>(voidSelf);
    VExtModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VExtModuleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VExtModuleTester___024root__trace_register(VExtModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VExtModuleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VExtModuleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
