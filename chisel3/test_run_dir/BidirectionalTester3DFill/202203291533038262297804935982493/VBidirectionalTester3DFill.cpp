// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBidirectionalTester3DFill.h"
#include "VBidirectionalTester3DFill__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBidirectionalTester3DFill::VBidirectionalTester3DFill(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBidirectionalTester3DFill__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBidirectionalTester3DFill::VBidirectionalTester3DFill(const char* _vcname__)
    : VBidirectionalTester3DFill(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBidirectionalTester3DFill::~VBidirectionalTester3DFill() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBidirectionalTester3DFill___024root___eval_initial(VBidirectionalTester3DFill___024root* vlSelf);
void VBidirectionalTester3DFill___024root___eval_settle(VBidirectionalTester3DFill___024root* vlSelf);
void VBidirectionalTester3DFill___024root___eval(VBidirectionalTester3DFill___024root* vlSelf);
#ifdef VL_DEBUG
void VBidirectionalTester3DFill___024root___eval_debug_assertions(VBidirectionalTester3DFill___024root* vlSelf);
#endif  // VL_DEBUG
void VBidirectionalTester3DFill___024root___final(VBidirectionalTester3DFill___024root* vlSelf);

static void _eval_initial_loop(VBidirectionalTester3DFill__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBidirectionalTester3DFill___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBidirectionalTester3DFill___024root___eval_settle(&(vlSymsp->TOP));
        VBidirectionalTester3DFill___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBidirectionalTester3DFill::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBidirectionalTester3DFill::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBidirectionalTester3DFill___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBidirectionalTester3DFill___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBidirectionalTester3DFill::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBidirectionalTester3DFill::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBidirectionalTester3DFill::final() {
    VBidirectionalTester3DFill___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBidirectionalTester3DFill___024root__trace_init_top(VBidirectionalTester3DFill___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBidirectionalTester3DFill___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBidirectionalTester3DFill___024root*>(voidSelf);
    VBidirectionalTester3DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBidirectionalTester3DFill___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBidirectionalTester3DFill___024root__trace_register(VBidirectionalTester3DFill___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBidirectionalTester3DFill::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBidirectionalTester3DFill___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
