// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMultiClockSubModuleTest.h"
#include "VMultiClockSubModuleTest__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMultiClockSubModuleTest::VMultiClockSubModuleTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMultiClockSubModuleTest__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VMultiClockSubModuleTest::VMultiClockSubModuleTest(const char* _vcname__)
    : VMultiClockSubModuleTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMultiClockSubModuleTest::~VMultiClockSubModuleTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMultiClockSubModuleTest___024root___eval_initial(VMultiClockSubModuleTest___024root* vlSelf);
void VMultiClockSubModuleTest___024root___eval_settle(VMultiClockSubModuleTest___024root* vlSelf);
void VMultiClockSubModuleTest___024root___eval(VMultiClockSubModuleTest___024root* vlSelf);
QData VMultiClockSubModuleTest___024root___change_request(VMultiClockSubModuleTest___024root* vlSelf);
#ifdef VL_DEBUG
void VMultiClockSubModuleTest___024root___eval_debug_assertions(VMultiClockSubModuleTest___024root* vlSelf);
#endif  // VL_DEBUG
void VMultiClockSubModuleTest___024root___final(VMultiClockSubModuleTest___024root* vlSelf);

static void _eval_initial_loop(VMultiClockSubModuleTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMultiClockSubModuleTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMultiClockSubModuleTest___024root___eval_settle(&(vlSymsp->TOP));
        VMultiClockSubModuleTest___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VMultiClockSubModuleTest___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSubModuleTest/2022032915194510152693556250419748/MultiClockSubModuleTest.v", 68, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VMultiClockSubModuleTest___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMultiClockSubModuleTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiClockSubModuleTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMultiClockSubModuleTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMultiClockSubModuleTest___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VMultiClockSubModuleTest___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSubModuleTest/2022032915194510152693556250419748/MultiClockSubModuleTest.v", 68, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VMultiClockSubModuleTest___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMultiClockSubModuleTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMultiClockSubModuleTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMultiClockSubModuleTest::final() {
    VMultiClockSubModuleTest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMultiClockSubModuleTest___024root__trace_init_top(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiClockSubModuleTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockSubModuleTest___024root*>(voidSelf);
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMultiClockSubModuleTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_register(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiClockSubModuleTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMultiClockSubModuleTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
