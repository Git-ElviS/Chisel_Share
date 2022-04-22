// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAsyncResetAggregateTester.h"
#include "VAsyncResetAggregateTester__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAsyncResetAggregateTester::VAsyncResetAggregateTester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAsyncResetAggregateTester__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VAsyncResetAggregateTester::VAsyncResetAggregateTester(const char* _vcname__)
    : VAsyncResetAggregateTester(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAsyncResetAggregateTester::~VAsyncResetAggregateTester() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAsyncResetAggregateTester___024root___eval_initial(VAsyncResetAggregateTester___024root* vlSelf);
void VAsyncResetAggregateTester___024root___eval_settle(VAsyncResetAggregateTester___024root* vlSelf);
void VAsyncResetAggregateTester___024root___eval(VAsyncResetAggregateTester___024root* vlSelf);
QData VAsyncResetAggregateTester___024root___change_request(VAsyncResetAggregateTester___024root* vlSelf);
#ifdef VL_DEBUG
void VAsyncResetAggregateTester___024root___eval_debug_assertions(VAsyncResetAggregateTester___024root* vlSelf);
#endif  // VL_DEBUG
void VAsyncResetAggregateTester___024root___final(VAsyncResetAggregateTester___024root* vlSelf);

static void _eval_initial_loop(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAsyncResetAggregateTester___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAsyncResetAggregateTester___024root___eval_settle(&(vlSymsp->TOP));
        VAsyncResetAggregateTester___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAsyncResetAggregateTester___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAsyncResetAggregateTester___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncResetAggregateTester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetAggregateTester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAsyncResetAggregateTester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAsyncResetAggregateTester___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAsyncResetAggregateTester___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAsyncResetAggregateTester___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VAsyncResetAggregateTester::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAsyncResetAggregateTester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAsyncResetAggregateTester::final() {
    VAsyncResetAggregateTester___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VAsyncResetAggregateTester___024root__trace_init_top(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncResetAggregateTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetAggregateTester___024root*>(voidSelf);
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VAsyncResetAggregateTester___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_register(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetAggregateTester::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAsyncResetAggregateTester___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
