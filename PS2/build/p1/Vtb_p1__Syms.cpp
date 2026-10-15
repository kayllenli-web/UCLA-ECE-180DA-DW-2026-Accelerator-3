// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_p1__pch.h"
#include "Vtb_p1.h"
#include "Vtb_p1___024root.h"

// FUNCTIONS
Vtb_p1__Syms::~Vtb_p1__Syms()
{
}

Vtb_p1__Syms::Vtb_p1__Syms(VerilatedContext* contextp, const char* namep, Vtb_p1* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_p1.configure(this, name(), "tb_p1", "tb_p1", -12, VerilatedScope::SCOPE_OTHER);
}
