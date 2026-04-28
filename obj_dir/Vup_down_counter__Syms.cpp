// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vup_down_counter__pch.h"
#include "Vup_down_counter.h"
#include "Vup_down_counter___024root.h"

// FUNCTIONS
Vup_down_counter__Syms::~Vup_down_counter__Syms()
{
}

Vup_down_counter__Syms::Vup_down_counter__Syms(VerilatedContext* contextp, const char* namep, Vup_down_counter* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
