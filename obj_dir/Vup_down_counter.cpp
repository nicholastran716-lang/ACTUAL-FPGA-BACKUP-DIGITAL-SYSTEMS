// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vup_down_counter__pch.h"

//============================================================
// Constructors

Vup_down_counter::Vup_down_counter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vup_down_counter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , enable{vlSymsp->TOP.enable}
    , up{vlSymsp->TOP.up}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vup_down_counter::Vup_down_counter(const char* _vcname__)
    : Vup_down_counter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vup_down_counter::~Vup_down_counter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vup_down_counter___024root___eval_debug_assertions(Vup_down_counter___024root* vlSelf);
#endif  // VL_DEBUG
void Vup_down_counter___024root___eval_static(Vup_down_counter___024root* vlSelf);
void Vup_down_counter___024root___eval_initial(Vup_down_counter___024root* vlSelf);
void Vup_down_counter___024root___eval_settle(Vup_down_counter___024root* vlSelf);
void Vup_down_counter___024root___eval(Vup_down_counter___024root* vlSelf);

void Vup_down_counter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vup_down_counter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vup_down_counter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vup_down_counter___024root___eval_static(&(vlSymsp->TOP));
        Vup_down_counter___024root___eval_initial(&(vlSymsp->TOP));
        Vup_down_counter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vup_down_counter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vup_down_counter::eventsPending() { return false; }

uint64_t Vup_down_counter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vup_down_counter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vup_down_counter___024root___eval_final(Vup_down_counter___024root* vlSelf);

VL_ATTR_COLD void Vup_down_counter::final() {
    Vup_down_counter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vup_down_counter::hierName() const { return vlSymsp->name(); }
const char* Vup_down_counter::modelName() const { return "Vup_down_counter"; }
unsigned Vup_down_counter::threads() const { return 1; }
void Vup_down_counter::prepareClone() const { contextp()->prepareClone(); }
void Vup_down_counter::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vup_down_counter::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vup_down_counter::trace()' called on model that was Verilated without --trace option");
}
