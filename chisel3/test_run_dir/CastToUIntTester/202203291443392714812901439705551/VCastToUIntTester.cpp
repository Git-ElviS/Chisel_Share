// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCastToUIntTester.h"
#include "VCastToUIntTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCastToUIntTester::VCastToUIntTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCastToUIntTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VCastToUIntTester::VCastToUIntTester(const char* _vcname__)
    : VCastToUIntTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCastToUIntTester::~VCastToUIntTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCastToUIntTester___024root___eval_initial(VCastToUIntTester___024root* vlSelf);
void VCastToUIntTester___024root___eval_settle(VCastToUIntTester___024root* vlSelf);
void VCastToUIntTester___024root___eval(VCastToUIntTester___024root* vlSelf);
#ifdef VL_DEBUG
void VCastToUIntTester___024root___eval_debug_assertions(VCastToUIntTester___024root* vlSelf);
#endif  // VL_DEBUG
void VCastToUIntTester___024root___final(VCastToUIntTester___024root* vlSelf);

static void _eval_initial_loop(VCastToUIntTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCastToUIntTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCastToUIntTester___024root___eval_settle(&(vlSymsp->TOP));
        VCastToUIntTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCastToUIntTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCastToUIntTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCastToUIntTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCastToUIntTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VCastToUIntTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCastToUIntTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCastToUIntTester::final() {
    VCastToUIntTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VCastToUIntTester___024root__trace_init_top(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCastToUIntTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCastToUIntTester___024root*>(voidSelf);
    VCastToUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCastToUIntTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCastToUIntTester___024root__trace_register(VCastToUIntTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCastToUIntTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCastToUIntTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
