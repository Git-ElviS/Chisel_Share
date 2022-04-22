// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VModuleIODynamicIndexTester.h"
#include "VModuleIODynamicIndexTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VModuleIODynamicIndexTester::VModuleIODynamicIndexTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VModuleIODynamicIndexTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VModuleIODynamicIndexTester::VModuleIODynamicIndexTester(const char* _vcname__)
    : VModuleIODynamicIndexTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VModuleIODynamicIndexTester::~VModuleIODynamicIndexTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VModuleIODynamicIndexTester___024root___eval_initial(VModuleIODynamicIndexTester___024root* vlSelf);
void VModuleIODynamicIndexTester___024root___eval_settle(VModuleIODynamicIndexTester___024root* vlSelf);
void VModuleIODynamicIndexTester___024root___eval(VModuleIODynamicIndexTester___024root* vlSelf);
#ifdef VL_DEBUG
void VModuleIODynamicIndexTester___024root___eval_debug_assertions(VModuleIODynamicIndexTester___024root* vlSelf);
#endif  // VL_DEBUG
void VModuleIODynamicIndexTester___024root___final(VModuleIODynamicIndexTester___024root* vlSelf);

static void _eval_initial_loop(VModuleIODynamicIndexTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VModuleIODynamicIndexTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VModuleIODynamicIndexTester___024root___eval_settle(&(vlSymsp->TOP));
        VModuleIODynamicIndexTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VModuleIODynamicIndexTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VModuleIODynamicIndexTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VModuleIODynamicIndexTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VModuleIODynamicIndexTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VModuleIODynamicIndexTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VModuleIODynamicIndexTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VModuleIODynamicIndexTester::final() {
    VModuleIODynamicIndexTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VModuleIODynamicIndexTester___024root__trace_init_top(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VModuleIODynamicIndexTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VModuleIODynamicIndexTester___024root*>(voidSelf);
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VModuleIODynamicIndexTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_register(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VModuleIODynamicIndexTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VModuleIODynamicIndexTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
