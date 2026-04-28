// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vup_down_counter.h for the primary calling header

#ifndef VERILATED_VUP_DOWN_COUNTER___024ROOT_H_
#define VERILATED_VUP_DOWN_COUNTER___024ROOT_H_  // guard

#include "verilated.h"


class Vup_down_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vup_down_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(up,0,0);
    VL_OUT8(count,1,0);
    CData/*1:0*/ up_down_counter__DOT__next_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vup_down_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vup_down_counter___024root(Vup_down_counter__Syms* symsp, const char* v__name);
    ~Vup_down_counter___024root();
    VL_UNCOPYABLE(Vup_down_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
