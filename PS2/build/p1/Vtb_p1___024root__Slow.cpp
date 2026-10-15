// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1__Syms.h"
#include "Vtb_p1___024root.h"

void Vtb_p1___024root___ctor_var_reset(Vtb_p1___024root* vlSelf);

Vtb_p1___024root::Vtb_p1___024root(Vtb_p1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_p1___024root___ctor_var_reset(this);
}

void Vtb_p1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_p1___024root::~Vtb_p1___024root() {
}
