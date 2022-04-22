// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFixedPointLitExtractTester.h"
#include "VFixedPointLitExtractTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFixedPointLitExtractTester::VFixedPointLitExtractTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFixedPointLitExtractTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFixedPointLitExtractTester::VFixedPointLitExtractTester(const char* _vcname__)
    : VFixedPointLitExtractTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFixedPointLitExtractTester::~VFixedPointLitExtractTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFixedPointLitExtractTester___024root___eval_initial(VFixedPointLitExtractTester___024root* vlSelf);
void VFixedPointLitExtractTester___024root___eval_settle(VFixedPointLitExtractTester___024root* vlSelf);
void VFixedPointLitExtractTester___024root___eval(VFixedPointLitExtractTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFixedPointLitExtractTester___024root___eval_debug_assertions(VFixedPointLitExtractTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFixedPointLitExtractTester___024root___final(VFixedPointLitExtractTester___024root* vlSelf);

static void _eval_initial_loop(VFixedPointLitExtractTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFixedPointLitExtractTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFixedPointLitExtractTester___024root___eval_settle(&(vlSymsp->TOP));
        VFixedPointLitExtractTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFixedPointLitExtractTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFixedPointLitExtractTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFixedPointLitExtractTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFixedPointLitExtractTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFixedPointLitExtractTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFixedPointLitExtractTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFixedPointLitExtractTester::final() {
    VFixedPointLitExtractTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFixedPointLitExtractTester___024root__trace_init_top(VFixedPointLitExtractTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFixedPointLitExtractTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFixedPointLitExtractTester___024root*>(voidSelf);
    VFixedPointLitExtractTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFixedPointLitExtractTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFixedPointLitExtractTester___024root__trace_register(VFixedPointLitExtractTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFixedPointLitExtractTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFixedPointLitExtractTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
