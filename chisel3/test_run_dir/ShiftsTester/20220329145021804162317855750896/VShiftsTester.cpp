// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VShiftsTester.h"
#include "VShiftsTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VShiftsTester::VShiftsTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VShiftsTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VShiftsTester::VShiftsTester(const char* _vcname__)
    : VShiftsTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VShiftsTester::~VShiftsTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VShiftsTester___024root___eval_initial(VShiftsTester___024root* vlSelf);
void VShiftsTester___024root___eval_settle(VShiftsTester___024root* vlSelf);
void VShiftsTester___024root___eval(VShiftsTester___024root* vlSelf);
#ifdef VL_DEBUG
void VShiftsTester___024root___eval_debug_assertions(VShiftsTester___024root* vlSelf);
#endif  // VL_DEBUG
void VShiftsTester___024root___final(VShiftsTester___024root* vlSelf);

static void _eval_initial_loop(VShiftsTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VShiftsTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VShiftsTester___024root___eval_settle(&(vlSymsp->TOP));
        VShiftsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VShiftsTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftsTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VShiftsTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VShiftsTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VShiftsTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VShiftsTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VShiftsTester::final() {
    VShiftsTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VShiftsTester___024root__trace_init_top(VShiftsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShiftsTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftsTester___024root*>(voidSelf);
    VShiftsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VShiftsTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VShiftsTester___024root__trace_register(VShiftsTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShiftsTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VShiftsTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
