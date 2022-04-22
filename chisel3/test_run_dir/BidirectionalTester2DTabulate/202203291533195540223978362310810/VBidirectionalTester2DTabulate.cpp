// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBidirectionalTester2DTabulate.h"
#include "VBidirectionalTester2DTabulate__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBidirectionalTester2DTabulate::VBidirectionalTester2DTabulate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBidirectionalTester2DTabulate__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBidirectionalTester2DTabulate::VBidirectionalTester2DTabulate(const char* _vcname__)
    : VBidirectionalTester2DTabulate(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBidirectionalTester2DTabulate::~VBidirectionalTester2DTabulate() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBidirectionalTester2DTabulate___024root___eval_initial(VBidirectionalTester2DTabulate___024root* vlSelf);
void VBidirectionalTester2DTabulate___024root___eval_settle(VBidirectionalTester2DTabulate___024root* vlSelf);
void VBidirectionalTester2DTabulate___024root___eval(VBidirectionalTester2DTabulate___024root* vlSelf);
#ifdef VL_DEBUG
void VBidirectionalTester2DTabulate___024root___eval_debug_assertions(VBidirectionalTester2DTabulate___024root* vlSelf);
#endif  // VL_DEBUG
void VBidirectionalTester2DTabulate___024root___final(VBidirectionalTester2DTabulate___024root* vlSelf);

static void _eval_initial_loop(VBidirectionalTester2DTabulate__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBidirectionalTester2DTabulate___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBidirectionalTester2DTabulate___024root___eval_settle(&(vlSymsp->TOP));
        VBidirectionalTester2DTabulate___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBidirectionalTester2DTabulate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBidirectionalTester2DTabulate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBidirectionalTester2DTabulate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBidirectionalTester2DTabulate___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBidirectionalTester2DTabulate::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBidirectionalTester2DTabulate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBidirectionalTester2DTabulate::final() {
    VBidirectionalTester2DTabulate___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBidirectionalTester2DTabulate___024root__trace_init_top(VBidirectionalTester2DTabulate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBidirectionalTester2DTabulate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBidirectionalTester2DTabulate___024root*>(voidSelf);
    VBidirectionalTester2DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBidirectionalTester2DTabulate___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBidirectionalTester2DTabulate___024root__trace_register(VBidirectionalTester2DTabulate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBidirectionalTester2DTabulate::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBidirectionalTester2DTabulate___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
