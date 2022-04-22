// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VImplicitModuleInRawModuleTester.h"
#include "VImplicitModuleInRawModuleTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VImplicitModuleInRawModuleTester::VImplicitModuleInRawModuleTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VImplicitModuleInRawModuleTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VImplicitModuleInRawModuleTester::VImplicitModuleInRawModuleTester(const char* _vcname__)
    : VImplicitModuleInRawModuleTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VImplicitModuleInRawModuleTester::~VImplicitModuleInRawModuleTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VImplicitModuleInRawModuleTester___024root___eval_initial(VImplicitModuleInRawModuleTester___024root* vlSelf);
void VImplicitModuleInRawModuleTester___024root___eval_settle(VImplicitModuleInRawModuleTester___024root* vlSelf);
void VImplicitModuleInRawModuleTester___024root___eval(VImplicitModuleInRawModuleTester___024root* vlSelf);
#ifdef VL_DEBUG
void VImplicitModuleInRawModuleTester___024root___eval_debug_assertions(VImplicitModuleInRawModuleTester___024root* vlSelf);
#endif  // VL_DEBUG
void VImplicitModuleInRawModuleTester___024root___final(VImplicitModuleInRawModuleTester___024root* vlSelf);

static void _eval_initial_loop(VImplicitModuleInRawModuleTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VImplicitModuleInRawModuleTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VImplicitModuleInRawModuleTester___024root___eval_settle(&(vlSymsp->TOP));
        VImplicitModuleInRawModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VImplicitModuleInRawModuleTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VImplicitModuleInRawModuleTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VImplicitModuleInRawModuleTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VImplicitModuleInRawModuleTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VImplicitModuleInRawModuleTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VImplicitModuleInRawModuleTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VImplicitModuleInRawModuleTester::final() {
    VImplicitModuleInRawModuleTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VImplicitModuleInRawModuleTester___024root__trace_init_top(VImplicitModuleInRawModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VImplicitModuleInRawModuleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VImplicitModuleInRawModuleTester___024root*>(voidSelf);
    VImplicitModuleInRawModuleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VImplicitModuleInRawModuleTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VImplicitModuleInRawModuleTester___024root__trace_register(VImplicitModuleInRawModuleTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VImplicitModuleInRawModuleTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VImplicitModuleInRawModuleTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
