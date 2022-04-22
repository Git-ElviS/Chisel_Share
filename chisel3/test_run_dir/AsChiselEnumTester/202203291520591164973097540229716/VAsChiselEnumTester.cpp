// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsChiselEnumTester.h"
#include "VAsChiselEnumTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsChiselEnumTester::VAsChiselEnumTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsChiselEnumTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsChiselEnumTester::VAsChiselEnumTester(const char* _vcname__)
    : VAsChiselEnumTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsChiselEnumTester::~VAsChiselEnumTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsChiselEnumTester___024root___eval_initial(VAsChiselEnumTester___024root* vlSelf);
void VAsChiselEnumTester___024root___eval_settle(VAsChiselEnumTester___024root* vlSelf);
void VAsChiselEnumTester___024root___eval(VAsChiselEnumTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsChiselEnumTester___024root___eval_debug_assertions(VAsChiselEnumTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsChiselEnumTester___024root___final(VAsChiselEnumTester___024root* vlSelf);

static void _eval_initial_loop(VAsChiselEnumTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsChiselEnumTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsChiselEnumTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsChiselEnumTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAsChiselEnumTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsChiselEnumTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsChiselEnumTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsChiselEnumTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsChiselEnumTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsChiselEnumTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsChiselEnumTester::final() {
    VAsChiselEnumTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsChiselEnumTester___024root__trace_init_top(VAsChiselEnumTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsChiselEnumTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsChiselEnumTester___024root*>(voidSelf);
    VAsChiselEnumTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsChiselEnumTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsChiselEnumTester___024root__trace_register(VAsChiselEnumTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsChiselEnumTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsChiselEnumTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
