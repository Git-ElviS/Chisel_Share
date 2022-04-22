// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCastFromLitTester.h"
#include "VCastFromLitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCastFromLitTester::VCastFromLitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCastFromLitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VCastFromLitTester::VCastFromLitTester(const char* _vcname__)
    : VCastFromLitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCastFromLitTester::~VCastFromLitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCastFromLitTester___024root___eval_initial(VCastFromLitTester___024root* vlSelf);
void VCastFromLitTester___024root___eval_settle(VCastFromLitTester___024root* vlSelf);
void VCastFromLitTester___024root___eval(VCastFromLitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VCastFromLitTester___024root___eval_debug_assertions(VCastFromLitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VCastFromLitTester___024root___final(VCastFromLitTester___024root* vlSelf);

static void _eval_initial_loop(VCastFromLitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCastFromLitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCastFromLitTester___024root___eval_settle(&(vlSymsp->TOP));
        VCastFromLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCastFromLitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCastFromLitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCastFromLitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCastFromLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VCastFromLitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCastFromLitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCastFromLitTester::final() {
    VCastFromLitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VCastFromLitTester___024root__trace_init_top(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCastFromLitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCastFromLitTester___024root*>(voidSelf);
    VCastFromLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCastFromLitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCastFromLitTester___024root__trace_register(VCastFromLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCastFromLitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCastFromLitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
