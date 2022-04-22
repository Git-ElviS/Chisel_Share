// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBlackBoxTesterSuggestName.h"
#include "VBlackBoxTesterSuggestName__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBlackBoxTesterSuggestName::VBlackBoxTesterSuggestName(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBlackBoxTesterSuggestName__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VBlackBoxTesterSuggestName::VBlackBoxTesterSuggestName(const char* _vcname__)
    : VBlackBoxTesterSuggestName(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBlackBoxTesterSuggestName::~VBlackBoxTesterSuggestName() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBlackBoxTesterSuggestName___024root___eval_initial(VBlackBoxTesterSuggestName___024root* vlSelf);
void VBlackBoxTesterSuggestName___024root___eval_settle(VBlackBoxTesterSuggestName___024root* vlSelf);
void VBlackBoxTesterSuggestName___024root___eval(VBlackBoxTesterSuggestName___024root* vlSelf);
#ifdef VL_DEBUG
void VBlackBoxTesterSuggestName___024root___eval_debug_assertions(VBlackBoxTesterSuggestName___024root* vlSelf);
#endif  // VL_DEBUG
void VBlackBoxTesterSuggestName___024root___final(VBlackBoxTesterSuggestName___024root* vlSelf);

static void _eval_initial_loop(VBlackBoxTesterSuggestName__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBlackBoxTesterSuggestName___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBlackBoxTesterSuggestName___024root___eval_settle(&(vlSymsp->TOP));
        VBlackBoxTesterSuggestName___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBlackBoxTesterSuggestName::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlackBoxTesterSuggestName::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBlackBoxTesterSuggestName___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBlackBoxTesterSuggestName___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBlackBoxTesterSuggestName::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBlackBoxTesterSuggestName::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBlackBoxTesterSuggestName::final() {
    VBlackBoxTesterSuggestName___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBlackBoxTesterSuggestName___024root__trace_init_top(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBlackBoxTesterSuggestName___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxTesterSuggestName___024root*>(voidSelf);
    VBlackBoxTesterSuggestName__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBlackBoxTesterSuggestName___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBlackBoxTesterSuggestName___024root__trace_register(VBlackBoxTesterSuggestName___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxTesterSuggestName::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBlackBoxTesterSuggestName___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
