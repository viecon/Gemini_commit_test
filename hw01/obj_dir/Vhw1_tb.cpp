// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhw1_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhw1_tb::Vhw1_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhw1_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhw1_tb::Vhw1_tb(const char* _vcname__)
    : Vhw1_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhw1_tb::~Vhw1_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhw1_tb___024root___eval_debug_assertions(Vhw1_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhw1_tb___024root___eval_static(Vhw1_tb___024root* vlSelf);
void Vhw1_tb___024root___eval_initial(Vhw1_tb___024root* vlSelf);
void Vhw1_tb___024root___eval_settle(Vhw1_tb___024root* vlSelf);
void Vhw1_tb___024root___eval(Vhw1_tb___024root* vlSelf);

void Vhw1_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhw1_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhw1_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhw1_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhw1_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhw1_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhw1_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhw1_tb::eventsPending() { return false; }

uint64_t Vhw1_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhw1_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhw1_tb___024root___eval_final(Vhw1_tb___024root* vlSelf);

VL_ATTR_COLD void Vhw1_tb::final() {
    Vhw1_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhw1_tb::hierName() const { return vlSymsp->name(); }
const char* Vhw1_tb::modelName() const { return "Vhw1_tb"; }
unsigned Vhw1_tb::threads() const { return 1; }
void Vhw1_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhw1_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhw1_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhw1_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhw1_tb___024root__trace_init_top(Vhw1_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhw1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw1_tb___024root*>(voidSelf);
    Vhw1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhw1_tb___024root__trace_decl_types(tracep);
    Vhw1_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhw1_tb___024root__trace_register(Vhw1_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhw1_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhw1_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhw1_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
