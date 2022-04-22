// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRecordSerializationTest.h"
#include "VRecordSerializationTest__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRecordSerializationTest::VRecordSerializationTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRecordSerializationTest__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VRecordSerializationTest::VRecordSerializationTest(const char* _vcname__)
    : VRecordSerializationTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRecordSerializationTest::~VRecordSerializationTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRecordSerializationTest___024root___eval_initial(VRecordSerializationTest___024root* vlSelf);
void VRecordSerializationTest___024root___eval_settle(VRecordSerializationTest___024root* vlSelf);
void VRecordSerializationTest___024root___eval(VRecordSerializationTest___024root* vlSelf);
#ifdef VL_DEBUG
void VRecordSerializationTest___024root___eval_debug_assertions(VRecordSerializationTest___024root* vlSelf);
#endif  // VL_DEBUG
void VRecordSerializationTest___024root___final(VRecordSerializationTest___024root* vlSelf);

static void _eval_initial_loop(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRecordSerializationTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRecordSerializationTest___024root___eval_settle(&(vlSymsp->TOP));
        VRecordSerializationTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRecordSerializationTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordSerializationTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRecordSerializationTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRecordSerializationTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VRecordSerializationTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRecordSerializationTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRecordSerializationTest::final() {
    VRecordSerializationTest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRecordSerializationTest___024root__trace_init_top(VRecordSerializationTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRecordSerializationTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordSerializationTest___024root*>(voidSelf);
    VRecordSerializationTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRecordSerializationTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRecordSerializationTest___024root__trace_register(VRecordSerializationTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRecordSerializationTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRecordSerializationTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
