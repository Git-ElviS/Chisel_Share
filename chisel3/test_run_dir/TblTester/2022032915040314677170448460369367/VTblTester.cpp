// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTblTester.h"
#include "VTblTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTblTester::VTblTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTblTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VTblTester::VTblTester(const char* _vcname__)
    : VTblTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTblTester::~VTblTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTblTester___024root___eval_initial(VTblTester___024root* vlSelf);
void VTblTester___024root___eval_settle(VTblTester___024root* vlSelf);
void VTblTester___024root___eval(VTblTester___024root* vlSelf);
#ifdef VL_DEBUG
void VTblTester___024root___eval_debug_assertions(VTblTester___024root* vlSelf);
#endif  // VL_DEBUG
void VTblTester___024root___final(VTblTester___024root* vlSelf);

static void _eval_initial_loop(VTblTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTblTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTblTester___024root___eval_settle(&(vlSymsp->TOP));
        VTblTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTblTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTblTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTblTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTblTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTblTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTblTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTblTester::final() {
    VTblTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTblTester___024root__trace_init_top(VTblTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTblTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTblTester___024root*>(voidSelf);
    VTblTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTblTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTblTester___024root__trace_register(VTblTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTblTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTblTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
