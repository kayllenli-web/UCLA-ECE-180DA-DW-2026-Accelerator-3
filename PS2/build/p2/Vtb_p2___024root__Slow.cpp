// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"
#include "Vtb_p2__Syms.h"
#include "Vtb_p2___024root.h"

void Vtb_p2___024root___ctor_var_reset(Vtb_p2___024root* vlSelf);

Vtb_p2___024root::Vtb_p2___024root(Vtb_p2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_p2___024root___ctor_var_reset(this);
}

void Vtb_p2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_p2___024root::~Vtb_p2___024root() {
}
