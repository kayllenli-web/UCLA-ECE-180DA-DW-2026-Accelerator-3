// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p1.h for the primary calling header

#ifndef VERILATED_VTB_P1___024ROOT_H_
#define VERILATED_VTB_P1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_p1__DOT__clk_i;
    CData/*0:0*/ tb_p1__DOT__rst_ni;
    CData/*0:0*/ tb_p1__DOT__bit_i;
    CData/*0:0*/ tb_p1__DOT__found_o;
    CData/*1:0*/ tb_p1__DOT__dut__DOT__state_q;
    CData/*1:0*/ tb_p1__DOT__dut__DOT__state_d;
    CData/*7:0*/ tb_p1__DOT__dut__DOT__count_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_p1__DOT__errors;
    IData/*31:0*/ tb_p1__DOT__exp_count;
    IData/*31:0*/ tb_p1__DOT__seen;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h30132c22__0;
    VlTriggerScheduler __VtrigSched_h30132cef__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_p1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_p1___024root(Vtb_p1__Syms* symsp, const char* v__name);
    ~Vtb_p1___024root();
    VL_UNCOPYABLE(Vtb_p1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
