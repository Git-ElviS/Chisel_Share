// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLitTester.h"
#include "VLitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLitTester::VLitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VLitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VLitTester::VLitTester(const char* _vcname__)
    : VLitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VLitTester::~VLitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VLitTester___024root___eval_initial(VLitTester___024root* vlSelf);
void VLitTester___024root___eval_settle(VLitTester___024root* vlSelf);
void VLitTester___024root___eval(VLitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VLitTester___024root___eval_debug_assertions(VLitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VLitTester___024root___final(VLitTester___024root* vlSelf);

static void _eval_initial_loop(VLitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VLitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VLitTester___024root___eval_settle(&(vlSymsp->TOP));
        VLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VLitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VLitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VLitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VLitTester::final() {
    VLitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VLitTester___024root__trace_init_top(VLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLitTester___024root*>(voidSelf);
    VLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLitTester___024root__trace_register(VLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
