// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcountert3.h"
#include "Vcountert3__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcountert3::Vcountert3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcountert3__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ld{vlSymsp->TOP.ld}
    , v{vlSymsp->TOP.v}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcountert3::Vcountert3(const char* _vcname__)
    : Vcountert3(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcountert3::~Vcountert3() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcountert3___024root___eval_initial(Vcountert3___024root* vlSelf);
void Vcountert3___024root___eval_settle(Vcountert3___024root* vlSelf);
void Vcountert3___024root___eval(Vcountert3___024root* vlSelf);
#ifdef VL_DEBUG
void Vcountert3___024root___eval_debug_assertions(Vcountert3___024root* vlSelf);
#endif  // VL_DEBUG
void Vcountert3___024root___final(Vcountert3___024root* vlSelf);

static void _eval_initial_loop(Vcountert3__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcountert3___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcountert3___024root___eval_settle(&(vlSymsp->TOP));
        Vcountert3___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcountert3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcountert3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcountert3___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcountert3___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcountert3::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcountert3::final() {
    Vcountert3___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcountert3::hierName() const { return vlSymsp->name(); }
const char* Vcountert3::modelName() const { return "Vcountert3"; }
unsigned Vcountert3::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcountert3::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcountert3___024root__trace_init_top(Vcountert3___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcountert3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcountert3___024root*>(voidSelf);
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcountert3___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcountert3___024root__trace_register(Vcountert3___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcountert3::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcountert3___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
