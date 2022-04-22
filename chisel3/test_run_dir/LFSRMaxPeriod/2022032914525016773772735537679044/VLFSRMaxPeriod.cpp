// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLFSRMaxPeriod.h"
#include "VLFSRMaxPeriod__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLFSRMaxPeriod::VLFSRMaxPeriod(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VLFSRMaxPeriod__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VLFSRMaxPeriod::VLFSRMaxPeriod(const char* _vcname__)
    : VLFSRMaxPeriod(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VLFSRMaxPeriod::~VLFSRMaxPeriod() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VLFSRMaxPeriod___024root___eval_initial(VLFSRMaxPeriod___024root* vlSelf);
void VLFSRMaxPeriod___024root___eval_settle(VLFSRMaxPeriod___024root* vlSelf);
void VLFSRMaxPeriod___024root___eval(VLFSRMaxPeriod___024root* vlSelf);
#ifdef VL_DEBUG
void VLFSRMaxPeriod___024root___eval_debug_assertions(VLFSRMaxPeriod___024root* vlSelf);
#endif  // VL_DEBUG
void VLFSRMaxPeriod___024root___final(VLFSRMaxPeriod___024root* vlSelf);

static void _eval_initial_loop(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VLFSRMaxPeriod___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VLFSRMaxPeriod___024root___eval_settle(&(vlSymsp->TOP));
        VLFSRMaxPeriod___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VLFSRMaxPeriod::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLFSRMaxPeriod::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLFSRMaxPeriod___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VLFSRMaxPeriod___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VLFSRMaxPeriod::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VLFSRMaxPeriod::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VLFSRMaxPeriod::final() {
    VLFSRMaxPeriod___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VLFSRMaxPeriod___024root__trace_init_top(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLFSRMaxPeriod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRMaxPeriod___024root*>(voidSelf);
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLFSRMaxPeriod___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_register(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLFSRMaxPeriod::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLFSRMaxPeriod___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
