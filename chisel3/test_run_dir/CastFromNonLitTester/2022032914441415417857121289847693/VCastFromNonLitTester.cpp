// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCastFromNonLitTester.h"
#include "VCastFromNonLitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCastFromNonLitTester::VCastFromNonLitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCastFromNonLitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VCastFromNonLitTester::VCastFromNonLitTester(const char* _vcname__)
    : VCastFromNonLitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCastFromNonLitTester::~VCastFromNonLitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCastFromNonLitTester___024root___eval_initial(VCastFromNonLitTester___024root* vlSelf);
void VCastFromNonLitTester___024root___eval_settle(VCastFromNonLitTester___024root* vlSelf);
void VCastFromNonLitTester___024root___eval(VCastFromNonLitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VCastFromNonLitTester___024root___eval_debug_assertions(VCastFromNonLitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VCastFromNonLitTester___024root___final(VCastFromNonLitTester___024root* vlSelf);

static void _eval_initial_loop(VCastFromNonLitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCastFromNonLitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCastFromNonLitTester___024root___eval_settle(&(vlSymsp->TOP));
        VCastFromNonLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCastFromNonLitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCastFromNonLitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCastFromNonLitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCastFromNonLitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VCastFromNonLitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCastFromNonLitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCastFromNonLitTester::final() {
    VCastFromNonLitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VCastFromNonLitTester___024root__trace_init_top(VCastFromNonLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCastFromNonLitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCastFromNonLitTester___024root*>(voidSelf);
    VCastFromNonLitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCastFromNonLitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCastFromNonLitTester___024root__trace_register(VCastFromNonLitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCastFromNonLitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCastFromNonLitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
