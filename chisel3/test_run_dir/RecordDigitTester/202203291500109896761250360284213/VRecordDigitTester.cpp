// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRecordDigitTester.h"
#include "VRecordDigitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRecordDigitTester::VRecordDigitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRecordDigitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRecordDigitTester::VRecordDigitTester(const char* _vcname__)
    : VRecordDigitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRecordDigitTester::~VRecordDigitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRecordDigitTester___024root___eval_initial(VRecordDigitTester___024root* vlSelf);
void VRecordDigitTester___024root___eval_settle(VRecordDigitTester___024root* vlSelf);
void VRecordDigitTester___024root___eval(VRecordDigitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VRecordDigitTester___024root___eval_debug_assertions(VRecordDigitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VRecordDigitTester___024root___final(VRecordDigitTester___024root* vlSelf);

static void _eval_initial_loop(VRecordDigitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRecordDigitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRecordDigitTester___024root___eval_settle(&(vlSymsp->TOP));
        VRecordDigitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRecordDigitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordDigitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRecordDigitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRecordDigitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRecordDigitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRecordDigitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRecordDigitTester::final() {
    VRecordDigitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRecordDigitTester___024root__trace_init_top(VRecordDigitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRecordDigitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordDigitTester___024root*>(voidSelf);
    VRecordDigitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRecordDigitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRecordDigitTester___024root__trace_register(VRecordDigitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRecordDigitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRecordDigitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
