// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVecOfBool2UInt.h"
#include "VVecOfBool2UInt__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VVecOfBool2UInt::VVecOfBool2UInt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VVecOfBool2UInt__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VVecOfBool2UInt::VVecOfBool2UInt(const char* _vcname__)
    : VVecOfBool2UInt(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VVecOfBool2UInt::~VVecOfBool2UInt() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VVecOfBool2UInt___024root___eval_initial(VVecOfBool2UInt___024root* vlSelf);
void VVecOfBool2UInt___024root___eval_settle(VVecOfBool2UInt___024root* vlSelf);
void VVecOfBool2UInt___024root___eval(VVecOfBool2UInt___024root* vlSelf);
#ifdef VL_DEBUG
void VVecOfBool2UInt___024root___eval_debug_assertions(VVecOfBool2UInt___024root* vlSelf);
#endif  // VL_DEBUG
void VVecOfBool2UInt___024root___final(VVecOfBool2UInt___024root* vlSelf);

static void _eval_initial_loop(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VVecOfBool2UInt___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VVecOfBool2UInt___024root___eval_settle(&(vlSymsp->TOP));
        VVecOfBool2UInt___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VVecOfBool2UInt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVecOfBool2UInt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVecOfBool2UInt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VVecOfBool2UInt___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VVecOfBool2UInt::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VVecOfBool2UInt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VVecOfBool2UInt::final() {
    VVecOfBool2UInt___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VVecOfBool2UInt___024root__trace_init_top(VVecOfBool2UInt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VVecOfBool2UInt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVecOfBool2UInt___024root*>(voidSelf);
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VVecOfBool2UInt___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VVecOfBool2UInt___024root__trace_register(VVecOfBool2UInt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVecOfBool2UInt::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VVecOfBool2UInt___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
