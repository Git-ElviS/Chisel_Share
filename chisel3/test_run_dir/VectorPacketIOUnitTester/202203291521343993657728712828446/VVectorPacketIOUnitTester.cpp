// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVectorPacketIOUnitTester.h"
#include "VVectorPacketIOUnitTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VVectorPacketIOUnitTester::VVectorPacketIOUnitTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VVectorPacketIOUnitTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VVectorPacketIOUnitTester::VVectorPacketIOUnitTester(const char* _vcname__)
    : VVectorPacketIOUnitTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VVectorPacketIOUnitTester::~VVectorPacketIOUnitTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VVectorPacketIOUnitTester___024root___eval_initial(VVectorPacketIOUnitTester___024root* vlSelf);
void VVectorPacketIOUnitTester___024root___eval_settle(VVectorPacketIOUnitTester___024root* vlSelf);
void VVectorPacketIOUnitTester___024root___eval(VVectorPacketIOUnitTester___024root* vlSelf);
#ifdef VL_DEBUG
void VVectorPacketIOUnitTester___024root___eval_debug_assertions(VVectorPacketIOUnitTester___024root* vlSelf);
#endif  // VL_DEBUG
void VVectorPacketIOUnitTester___024root___final(VVectorPacketIOUnitTester___024root* vlSelf);

static void _eval_initial_loop(VVectorPacketIOUnitTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VVectorPacketIOUnitTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VVectorPacketIOUnitTester___024root___eval_settle(&(vlSymsp->TOP));
        VVectorPacketIOUnitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VVectorPacketIOUnitTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVectorPacketIOUnitTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVectorPacketIOUnitTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VVectorPacketIOUnitTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VVectorPacketIOUnitTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VVectorPacketIOUnitTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VVectorPacketIOUnitTester::final() {
    VVectorPacketIOUnitTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VVectorPacketIOUnitTester___024root__trace_init_top(VVectorPacketIOUnitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VVectorPacketIOUnitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVectorPacketIOUnitTester___024root*>(voidSelf);
    VVectorPacketIOUnitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VVectorPacketIOUnitTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VVectorPacketIOUnitTester___024root__trace_register(VVectorPacketIOUnitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVectorPacketIOUnitTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VVectorPacketIOUnitTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
