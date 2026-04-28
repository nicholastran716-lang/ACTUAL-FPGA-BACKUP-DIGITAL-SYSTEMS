// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_down_counter.h for the primary calling header

#include "Vup_down_counter__pch.h"
#include "Vup_down_counter___024root.h"

VL_ATTR_COLD void Vup_down_counter___024root___eval_static(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vup_down_counter___024root___eval_initial__TOP(Vup_down_counter___024root* vlSelf);

VL_ATTR_COLD void Vup_down_counter___024root___eval_initial(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_initial\n"); );
    // Body
    Vup_down_counter___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vup_down_counter___024root___eval_initial__TOP(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->count = 0U;
}

VL_ATTR_COLD void Vup_down_counter___024root___eval_final(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_down_counter___024root___dump_triggers__stl(Vup_down_counter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vup_down_counter___024root___eval_phase__stl(Vup_down_counter___024root* vlSelf);

VL_ATTR_COLD void Vup_down_counter___024root___eval_settle(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vup_down_counter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/up_down_counter.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vup_down_counter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_down_counter___024root___dump_triggers__stl(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vup_down_counter___024root___ico_sequent__TOP__0(Vup_down_counter___024root* vlSelf);

VL_ATTR_COLD void Vup_down_counter___024root___eval_stl(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vup_down_counter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vup_down_counter___024root___eval_triggers__stl(Vup_down_counter___024root* vlSelf);

VL_ATTR_COLD bool Vup_down_counter___024root___eval_phase__stl(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vup_down_counter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vup_down_counter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_down_counter___024root___dump_triggers__ico(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_down_counter___024root___dump_triggers__act(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_down_counter___024root___dump_triggers__nba(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vup_down_counter___024root___ctor_var_reset(Vup_down_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vup_down_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_down_counter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->up = VL_RAND_RESET_I(1);
    vlSelf->count = VL_RAND_RESET_I(2);
    vlSelf->up_down_counter__DOT__next_count = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
