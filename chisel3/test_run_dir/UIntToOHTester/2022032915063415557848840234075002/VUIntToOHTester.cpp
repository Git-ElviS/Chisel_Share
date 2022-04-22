// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUIntToOHTester.h"
#include "VUIntToOHTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VUIntToOHTester::VUIntToOHTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VUIntToOHTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VUIntToOHTester::VUIntToOHTester(const char* _vcname__)
    : VUIntToOHTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VUIntToOHTester::~VUIntToOHTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VUIntToOHTester___024root___eval_initial(VUIntToOHTester___024root* vlSelf);
void VUIntToOHTester___024root___eval_settle(VUIntToOHTester___024root* vlSelf);
void VUIntToOHTester___024root___eval(VUIntToOHTester___024root* vlSelf);
#ifdef VL_DEBUG
void VUIntToOHTester___024root___eval_debug_assertions(VUIntToOHTester___024root* vlSelf);
#endif  // VL_DEBUG
void VUIntToOHTester___024root___final(VUIntToOHTester___024root* vlSelf);

static void _eval_initial_loop(VUIntToOHTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VUIntToOHTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VUIntToOHTester___024root___eval_settle(&(vlSymsp->TOP));
        VUIntToOHTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VUIntToOHTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUIntToOHTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUIntToOHTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VUIntToOHTester___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VUIntToOHTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VUIntToOHTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VUIntToOHTester::final() {
    VUIntToOHTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VUIntToOHTester___024root__trace_init_top(VUIntToOHTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUIntToOHTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUIntToOHTester___024root*>(voidSelf);
    VUIntToOHTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VUIntToOHTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VUIntToOHTester___024root__trace_register(VUIntToOHTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUIntToOHTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUIntToOHTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
