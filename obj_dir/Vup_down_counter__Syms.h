// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUP_DOWN_COUNTER__SYMS_H_
#define VERILATED_VUP_DOWN_COUNTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vup_down_counter.h"

// INCLUDE MODULE CLASSES
#include "Vup_down_counter___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vup_down_counter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vup_down_counter* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vup_down_counter___024root     TOP;

    // CONSTRUCTORS
    Vup_down_counter__Syms(VerilatedContext* contextp, const char* namep, Vup_down_counter* modelp);
    ~Vup_down_counter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
