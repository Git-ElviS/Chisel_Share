// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUInt2Bundle.h"
#include "VUInt2Bundle__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VUInt2Bundle::VUInt2Bundle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VUInt2Bundle__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VUInt2Bundle::VUInt2Bundle(const char* _vcname__)
    : VUInt2Bundle(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VUInt2Bundle::~VUInt2Bundle() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VUInt2Bundle___024root___eval_initial(VUInt2Bundle___024root* vlSelf);
void VUInt2Bundle___024root___eval_settle(VUInt2Bundle___024root* vlSelf);
void VUInt2Bundle___024root___eval(VUInt2Bundle___024root* vlSelf);
#ifdef VL_DEBUG
void VUInt2Bundle___024root___eval_debug_assertions(VUInt2Bundle___024root* vlSelf);
#endif  // VL_DEBUG
void VUInt2Bundle___024root___final(VUInt2Bundle___024root* vlSelf);

static void _eval_initial_loop(VUInt2Bundle__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VUInt2Bundle___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VUInt2Bundle___024root___eval_settle(&(vlSymsp->TOP));
        VUInt2Bundle___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VUInt2Bundle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUInt2Bundle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUInt2Bundle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VUInt2Bundle___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VUInt2Bundle::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VUInt2Bundle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VUInt2Bundle::final() {
    VUInt2Bundle___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VUInt2Bundle___024root__trace_init_top(VUInt2Bundle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUInt2Bundle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUInt2Bundle___024root*>(voidSelf);
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VUInt2Bundle___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VUInt2Bundle___024root__trace_register(VUInt2Bundle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUInt2Bundle::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUInt2Bundle___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
