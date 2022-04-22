// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsyncResetTester.h"
#include "VAsyncResetTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsyncResetTester::VAsyncResetTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsyncResetTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsyncResetTester::VAsyncResetTester(const char* _vcname__)
    : VAsyncResetTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsyncResetTester::~VAsyncResetTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsyncResetTester___024root___eval_initial(VAsyncResetTester___024root* vlSelf);
void VAsyncResetTester___024root___eval_settle(VAsyncResetTester___024root* vlSelf);
void VAsyncResetTester___024root___eval(VAsyncResetTester___024root* vlSelf);
QData VAsyncResetTester___024root___change_request(VAsyncResetTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsyncResetTester___024root___eval_debug_assertions(VAsyncResetTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsyncResetTester___024root___final(VAsyncResetTester___024root* vlSelf);

static void _eval_initial_loop(VAsyncResetTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsyncResetTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsyncResetTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsyncResetTester___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAsyncResetTester___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAsyncResetTester___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncResetTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsyncResetTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsyncResetTester___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAsyncResetTester___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAsyncResetTester___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsyncResetTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsyncResetTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsyncResetTester::final() {
    VAsyncResetTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsyncResetTester___024root__trace_init_top(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetTester___024root*>(voidSelf);
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsyncResetTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsyncResetTester___024root__trace_register(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsyncResetTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
