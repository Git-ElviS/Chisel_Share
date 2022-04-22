// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VResetAsTypeOfBoolTester.h"
#include "VResetAsTypeOfBoolTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VResetAsTypeOfBoolTester::VResetAsTypeOfBoolTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VResetAsTypeOfBoolTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VResetAsTypeOfBoolTester::VResetAsTypeOfBoolTester(const char* _vcname__)
    : VResetAsTypeOfBoolTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VResetAsTypeOfBoolTester::~VResetAsTypeOfBoolTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VResetAsTypeOfBoolTester___024root___eval_initial(VResetAsTypeOfBoolTester___024root* vlSelf);
void VResetAsTypeOfBoolTester___024root___eval_settle(VResetAsTypeOfBoolTester___024root* vlSelf);
void VResetAsTypeOfBoolTester___024root___eval(VResetAsTypeOfBoolTester___024root* vlSelf);
#ifdef VL_DEBUG
void VResetAsTypeOfBoolTester___024root___eval_debug_assertions(VResetAsTypeOfBoolTester___024root* vlSelf);
#endif  // VL_DEBUG
void VResetAsTypeOfBoolTester___024root___final(VResetAsTypeOfBoolTester___024root* vlSelf);

static void _eval_initial_loop(VResetAsTypeOfBoolTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VResetAsTypeOfBoolTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VResetAsTypeOfBoolTester___024root___eval_settle(&(vlSymsp->TOP));
        VResetAsTypeOfBoolTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VResetAsTypeOfBoolTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VResetAsTypeOfBoolTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VResetAsTypeOfBoolTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VResetAsTypeOfBoolTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VResetAsTypeOfBoolTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VResetAsTypeOfBoolTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VResetAsTypeOfBoolTester::final() {
    VResetAsTypeOfBoolTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VResetAsTypeOfBoolTester___024root__trace_init_top(VResetAsTypeOfBoolTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VResetAsTypeOfBoolTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VResetAsTypeOfBoolTester___024root*>(voidSelf);
    VResetAsTypeOfBoolTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VResetAsTypeOfBoolTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VResetAsTypeOfBoolTester___024root__trace_register(VResetAsTypeOfBoolTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VResetAsTypeOfBoolTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VResetAsTypeOfBoolTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
