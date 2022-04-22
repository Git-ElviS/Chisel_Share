// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLFSRResetTester.h"
#include "VLFSRResetTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLFSRResetTester::VLFSRResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VLFSRResetTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VLFSRResetTester::VLFSRResetTester(const char* _vcname__)
    : VLFSRResetTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VLFSRResetTester::~VLFSRResetTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VLFSRResetTester___024root___eval_initial(VLFSRResetTester___024root* vlSelf);
void VLFSRResetTester___024root___eval_settle(VLFSRResetTester___024root* vlSelf);
void VLFSRResetTester___024root___eval(VLFSRResetTester___024root* vlSelf);
#ifdef VL_DEBUG
void VLFSRResetTester___024root___eval_debug_assertions(VLFSRResetTester___024root* vlSelf);
#endif  // VL_DEBUG
void VLFSRResetTester___024root___final(VLFSRResetTester___024root* vlSelf);

static void _eval_initial_loop(VLFSRResetTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VLFSRResetTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VLFSRResetTester___024root___eval_settle(&(vlSymsp->TOP));
        VLFSRResetTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VLFSRResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLFSRResetTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLFSRResetTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VLFSRResetTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VLFSRResetTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VLFSRResetTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VLFSRResetTester::final() {
    VLFSRResetTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VLFSRResetTester___024root__trace_init_top(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLFSRResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRResetTester___024root*>(voidSelf);
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLFSRResetTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLFSRResetTester___024root__trace_register(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLFSRResetTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLFSRResetTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
