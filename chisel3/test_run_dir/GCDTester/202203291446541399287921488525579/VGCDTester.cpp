// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VGCDTester.h"
#include "VGCDTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VGCDTester::VGCDTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VGCDTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VGCDTester::VGCDTester(const char* _vcname__)
    : VGCDTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VGCDTester::~VGCDTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VGCDTester___024root___eval_initial(VGCDTester___024root* vlSelf);
void VGCDTester___024root___eval_settle(VGCDTester___024root* vlSelf);
void VGCDTester___024root___eval(VGCDTester___024root* vlSelf);
#ifdef VL_DEBUG
void VGCDTester___024root___eval_debug_assertions(VGCDTester___024root* vlSelf);
#endif  // VL_DEBUG
void VGCDTester___024root___final(VGCDTester___024root* vlSelf);

static void _eval_initial_loop(VGCDTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VGCDTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VGCDTester___024root___eval_settle(&(vlSymsp->TOP));
        VGCDTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VGCDTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGCDTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VGCDTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VGCDTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VGCDTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VGCDTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VGCDTester::final() {
    VGCDTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VGCDTester___024root__trace_init_top(VGCDTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VGCDTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCDTester___024root*>(voidSelf);
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VGCDTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VGCDTester___024root__trace_register(VGCDTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VGCDTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VGCDTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
