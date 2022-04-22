// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFillTester.h"
#include "VFillTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFillTester::VFillTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFillTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFillTester::VFillTester(const char* _vcname__)
    : VFillTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFillTester::~VFillTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFillTester___024root___eval_initial(VFillTester___024root* vlSelf);
void VFillTester___024root___eval_settle(VFillTester___024root* vlSelf);
void VFillTester___024root___eval(VFillTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFillTester___024root___eval_debug_assertions(VFillTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFillTester___024root___final(VFillTester___024root* vlSelf);

static void _eval_initial_loop(VFillTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFillTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFillTester___024root___eval_settle(&(vlSymsp->TOP));
        VFillTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFillTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFillTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFillTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFillTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFillTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFillTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFillTester::final() {
    VFillTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFillTester___024root__trace_init_top(VFillTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFillTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFillTester___024root*>(voidSelf);
    VFillTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFillTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFillTester___024root__trace_register(VFillTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFillTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFillTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
