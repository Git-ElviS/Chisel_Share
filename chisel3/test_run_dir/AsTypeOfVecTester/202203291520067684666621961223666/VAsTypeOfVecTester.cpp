// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsTypeOfVecTester.h"
#include "VAsTypeOfVecTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsTypeOfVecTester::VAsTypeOfVecTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsTypeOfVecTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsTypeOfVecTester::VAsTypeOfVecTester(const char* _vcname__)
    : VAsTypeOfVecTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsTypeOfVecTester::~VAsTypeOfVecTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsTypeOfVecTester___024root___eval_initial(VAsTypeOfVecTester___024root* vlSelf);
void VAsTypeOfVecTester___024root___eval_settle(VAsTypeOfVecTester___024root* vlSelf);
void VAsTypeOfVecTester___024root___eval(VAsTypeOfVecTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsTypeOfVecTester___024root___eval_debug_assertions(VAsTypeOfVecTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsTypeOfVecTester___024root___final(VAsTypeOfVecTester___024root* vlSelf);

static void _eval_initial_loop(VAsTypeOfVecTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsTypeOfVecTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsTypeOfVecTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsTypeOfVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAsTypeOfVecTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsTypeOfVecTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsTypeOfVecTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsTypeOfVecTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsTypeOfVecTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsTypeOfVecTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsTypeOfVecTester::final() {
    VAsTypeOfVecTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsTypeOfVecTester___024root__trace_init_top(VAsTypeOfVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsTypeOfVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsTypeOfVecTester___024root*>(voidSelf);
    VAsTypeOfVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsTypeOfVecTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsTypeOfVecTester___024root__trace_register(VAsTypeOfVecTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsTypeOfVecTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsTypeOfVecTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
