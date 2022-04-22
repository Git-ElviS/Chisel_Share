// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFill3DTester.h"
#include "VFill3DTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFill3DTester::VFill3DTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFill3DTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VFill3DTester::VFill3DTester(const char* _vcname__)
    : VFill3DTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFill3DTester::~VFill3DTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFill3DTester___024root___eval_initial(VFill3DTester___024root* vlSelf);
void VFill3DTester___024root___eval_settle(VFill3DTester___024root* vlSelf);
void VFill3DTester___024root___eval(VFill3DTester___024root* vlSelf);
#ifdef VL_DEBUG
void VFill3DTester___024root___eval_debug_assertions(VFill3DTester___024root* vlSelf);
#endif  // VL_DEBUG
void VFill3DTester___024root___final(VFill3DTester___024root* vlSelf);

static void _eval_initial_loop(VFill3DTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFill3DTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFill3DTester___024root___eval_settle(&(vlSymsp->TOP));
        VFill3DTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFill3DTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFill3DTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFill3DTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFill3DTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFill3DTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFill3DTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFill3DTester::final() {
    VFill3DTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFill3DTester___024root__trace_init_top(VFill3DTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFill3DTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFill3DTester___024root*>(voidSelf);
    VFill3DTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFill3DTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFill3DTester___024root__trace_register(VFill3DTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFill3DTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFill3DTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
