// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRecordIOTester.h"
#include "VRecordIOTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRecordIOTester::VRecordIOTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRecordIOTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRecordIOTester::VRecordIOTester(const char* _vcname__)
    : VRecordIOTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRecordIOTester::~VRecordIOTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRecordIOTester___024root___eval_initial(VRecordIOTester___024root* vlSelf);
void VRecordIOTester___024root___eval_settle(VRecordIOTester___024root* vlSelf);
void VRecordIOTester___024root___eval(VRecordIOTester___024root* vlSelf);
#ifdef VL_DEBUG
void VRecordIOTester___024root___eval_debug_assertions(VRecordIOTester___024root* vlSelf);
#endif  // VL_DEBUG
void VRecordIOTester___024root___final(VRecordIOTester___024root* vlSelf);

static void _eval_initial_loop(VRecordIOTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRecordIOTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRecordIOTester___024root___eval_settle(&(vlSymsp->TOP));
        VRecordIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRecordIOTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordIOTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRecordIOTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRecordIOTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRecordIOTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRecordIOTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRecordIOTester::final() {
    VRecordIOTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRecordIOTester___024root__trace_init_top(VRecordIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRecordIOTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordIOTester___024root*>(voidSelf);
    VRecordIOTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRecordIOTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRecordIOTester___024root__trace_register(VRecordIOTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRecordIOTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRecordIOTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
