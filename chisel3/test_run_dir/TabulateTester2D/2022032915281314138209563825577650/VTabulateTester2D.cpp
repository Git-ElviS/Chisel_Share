// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTabulateTester2D.h"
#include "VTabulateTester2D__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTabulateTester2D::VTabulateTester2D(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTabulateTester2D__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VTabulateTester2D::VTabulateTester2D(const char* _vcname__)
    : VTabulateTester2D(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTabulateTester2D::~VTabulateTester2D() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTabulateTester2D___024root___eval_initial(VTabulateTester2D___024root* vlSelf);
void VTabulateTester2D___024root___eval_settle(VTabulateTester2D___024root* vlSelf);
void VTabulateTester2D___024root___eval(VTabulateTester2D___024root* vlSelf);
#ifdef VL_DEBUG
void VTabulateTester2D___024root___eval_debug_assertions(VTabulateTester2D___024root* vlSelf);
#endif  // VL_DEBUG
void VTabulateTester2D___024root___final(VTabulateTester2D___024root* vlSelf);

static void _eval_initial_loop(VTabulateTester2D__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTabulateTester2D___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTabulateTester2D___024root___eval_settle(&(vlSymsp->TOP));
        VTabulateTester2D___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTabulateTester2D::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTabulateTester2D::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTabulateTester2D___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTabulateTester2D___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTabulateTester2D::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTabulateTester2D::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTabulateTester2D::final() {
    VTabulateTester2D___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTabulateTester2D___024root__trace_init_top(VTabulateTester2D___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTabulateTester2D___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTabulateTester2D___024root*>(voidSelf);
    VTabulateTester2D__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTabulateTester2D___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTabulateTester2D___024root__trace_register(VTabulateTester2D___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTabulateTester2D::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTabulateTester2D___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
