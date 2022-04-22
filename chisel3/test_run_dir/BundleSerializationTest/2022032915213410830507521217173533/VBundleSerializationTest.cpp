// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBundleSerializationTest.h"
#include "VBundleSerializationTest__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBundleSerializationTest::VBundleSerializationTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBundleSerializationTest__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBundleSerializationTest::VBundleSerializationTest(const char* _vcname__)
    : VBundleSerializationTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBundleSerializationTest::~VBundleSerializationTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBundleSerializationTest___024root___eval_initial(VBundleSerializationTest___024root* vlSelf);
void VBundleSerializationTest___024root___eval_settle(VBundleSerializationTest___024root* vlSelf);
void VBundleSerializationTest___024root___eval(VBundleSerializationTest___024root* vlSelf);
#ifdef VL_DEBUG
void VBundleSerializationTest___024root___eval_debug_assertions(VBundleSerializationTest___024root* vlSelf);
#endif  // VL_DEBUG
void VBundleSerializationTest___024root___final(VBundleSerializationTest___024root* vlSelf);

static void _eval_initial_loop(VBundleSerializationTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBundleSerializationTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBundleSerializationTest___024root___eval_settle(&(vlSymsp->TOP));
        VBundleSerializationTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBundleSerializationTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBundleSerializationTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBundleSerializationTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBundleSerializationTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBundleSerializationTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBundleSerializationTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBundleSerializationTest::final() {
    VBundleSerializationTest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBundleSerializationTest___024root__trace_init_top(VBundleSerializationTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBundleSerializationTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBundleSerializationTest___024root*>(voidSelf);
    VBundleSerializationTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBundleSerializationTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBundleSerializationTest___024root__trace_register(VBundleSerializationTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBundleSerializationTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBundleSerializationTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
