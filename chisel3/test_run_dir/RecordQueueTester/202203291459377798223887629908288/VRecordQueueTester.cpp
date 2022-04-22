// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRecordQueueTester.h"
#include "VRecordQueueTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRecordQueueTester::VRecordQueueTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRecordQueueTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRecordQueueTester::VRecordQueueTester(const char* _vcname__)
    : VRecordQueueTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRecordQueueTester::~VRecordQueueTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRecordQueueTester___024root___eval_initial(VRecordQueueTester___024root* vlSelf);
void VRecordQueueTester___024root___eval_settle(VRecordQueueTester___024root* vlSelf);
void VRecordQueueTester___024root___eval(VRecordQueueTester___024root* vlSelf);
#ifdef VL_DEBUG
void VRecordQueueTester___024root___eval_debug_assertions(VRecordQueueTester___024root* vlSelf);
#endif  // VL_DEBUG
void VRecordQueueTester___024root___final(VRecordQueueTester___024root* vlSelf);

static void _eval_initial_loop(VRecordQueueTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRecordQueueTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRecordQueueTester___024root___eval_settle(&(vlSymsp->TOP));
        VRecordQueueTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRecordQueueTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordQueueTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRecordQueueTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRecordQueueTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRecordQueueTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRecordQueueTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRecordQueueTester::final() {
    VRecordQueueTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRecordQueueTester___024root__trace_init_top(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRecordQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordQueueTester___024root*>(voidSelf);
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRecordQueueTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRecordQueueTester___024root__trace_register(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRecordQueueTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRecordQueueTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
