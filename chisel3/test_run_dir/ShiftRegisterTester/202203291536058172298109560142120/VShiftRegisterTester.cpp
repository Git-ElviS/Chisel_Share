// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VShiftRegisterTester.h"
#include "VShiftRegisterTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VShiftRegisterTester::VShiftRegisterTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VShiftRegisterTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VShiftRegisterTester::VShiftRegisterTester(const char* _vcname__)
    : VShiftRegisterTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VShiftRegisterTester::~VShiftRegisterTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VShiftRegisterTester___024root___eval_initial(VShiftRegisterTester___024root* vlSelf);
void VShiftRegisterTester___024root___eval_settle(VShiftRegisterTester___024root* vlSelf);
void VShiftRegisterTester___024root___eval(VShiftRegisterTester___024root* vlSelf);
#ifdef VL_DEBUG
void VShiftRegisterTester___024root___eval_debug_assertions(VShiftRegisterTester___024root* vlSelf);
#endif  // VL_DEBUG
void VShiftRegisterTester___024root___final(VShiftRegisterTester___024root* vlSelf);

static void _eval_initial_loop(VShiftRegisterTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VShiftRegisterTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VShiftRegisterTester___024root___eval_settle(&(vlSymsp->TOP));
        VShiftRegisterTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VShiftRegisterTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftRegisterTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VShiftRegisterTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VShiftRegisterTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VShiftRegisterTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VShiftRegisterTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VShiftRegisterTester::final() {
    VShiftRegisterTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VShiftRegisterTester___024root__trace_init_top(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShiftRegisterTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftRegisterTester___024root*>(voidSelf);
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VShiftRegisterTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_register(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShiftRegisterTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VShiftRegisterTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
