// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTabulateTester3D.h"
#include "VTabulateTester3D__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTabulateTester3D::VTabulateTester3D(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTabulateTester3D__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VTabulateTester3D::VTabulateTester3D(const char* _vcname__)
    : VTabulateTester3D(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTabulateTester3D::~VTabulateTester3D() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTabulateTester3D___024root___eval_initial(VTabulateTester3D___024root* vlSelf);
void VTabulateTester3D___024root___eval_settle(VTabulateTester3D___024root* vlSelf);
void VTabulateTester3D___024root___eval(VTabulateTester3D___024root* vlSelf);
#ifdef VL_DEBUG
void VTabulateTester3D___024root___eval_debug_assertions(VTabulateTester3D___024root* vlSelf);
#endif  // VL_DEBUG
void VTabulateTester3D___024root___final(VTabulateTester3D___024root* vlSelf);

static void _eval_initial_loop(VTabulateTester3D__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTabulateTester3D___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTabulateTester3D___024root___eval_settle(&(vlSymsp->TOP));
        VTabulateTester3D___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTabulateTester3D::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTabulateTester3D::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTabulateTester3D___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTabulateTester3D___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTabulateTester3D::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTabulateTester3D::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTabulateTester3D::final() {
    VTabulateTester3D___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTabulateTester3D___024root__trace_init_top(VTabulateTester3D___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTabulateTester3D___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTabulateTester3D___024root*>(voidSelf);
    VTabulateTester3D__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTabulateTester3D___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTabulateTester3D___024root__trace_register(VTabulateTester3D___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTabulateTester3D::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTabulateTester3D___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
