// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRawModuleTester.h"
#include "VRawModuleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRawModuleTester::VRawModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRawModuleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRawModuleTester::VRawModuleTester(const char* _vcname__)
    : VRawModuleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRawModuleTester::~VRawModuleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRawModuleTester___024root___eval_initial(VRawModuleTester___024root* vlSelf);
void VRawModuleTester___024root___eval_settle(VRawModuleTester___024root* vlSelf);
void VRawModuleTester___024root___eval(VRawModuleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VRawModuleTester___024root___eval_debug_assertions(VRawModuleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VRawModuleTester___024root___final(VRawModuleTester___024root* vlSelf);

static void _eval_initial_loop(VRawModuleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRawModuleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRawModuleTester___024root___eval_settle(&(vlSymsp->TOP));
        VRawModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRawModuleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRawModuleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRawModuleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRawModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRawModuleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRawModuleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRawModuleTester::final() {
    VRawModuleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRawModuleTester___024root__trace_init_top(VRawModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRawModuleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRawModuleTester___024root*>(voidSelf);
    VRawModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRawModuleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRawModuleTester___024root__trace_register(VRawModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRawModuleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRawModuleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
