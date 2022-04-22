// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VStrongEnumFSMTester.h"
#include "VStrongEnumFSMTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VStrongEnumFSMTester::VStrongEnumFSMTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VStrongEnumFSMTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VStrongEnumFSMTester::VStrongEnumFSMTester(const char* _vcname__)
    : VStrongEnumFSMTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VStrongEnumFSMTester::~VStrongEnumFSMTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VStrongEnumFSMTester___024root___eval_initial(VStrongEnumFSMTester___024root* vlSelf);
void VStrongEnumFSMTester___024root___eval_settle(VStrongEnumFSMTester___024root* vlSelf);
void VStrongEnumFSMTester___024root___eval(VStrongEnumFSMTester___024root* vlSelf);
#ifdef VL_DEBUG
void VStrongEnumFSMTester___024root___eval_debug_assertions(VStrongEnumFSMTester___024root* vlSelf);
#endif  // VL_DEBUG
void VStrongEnumFSMTester___024root___final(VStrongEnumFSMTester___024root* vlSelf);

static void _eval_initial_loop(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VStrongEnumFSMTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VStrongEnumFSMTester___024root___eval_settle(&(vlSymsp->TOP));
        VStrongEnumFSMTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VStrongEnumFSMTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStrongEnumFSMTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VStrongEnumFSMTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VStrongEnumFSMTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VStrongEnumFSMTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VStrongEnumFSMTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VStrongEnumFSMTester::final() {
    VStrongEnumFSMTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VStrongEnumFSMTester___024root__trace_init_top(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VStrongEnumFSMTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStrongEnumFSMTester___024root*>(voidSelf);
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VStrongEnumFSMTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_register(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VStrongEnumFSMTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VStrongEnumFSMTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
