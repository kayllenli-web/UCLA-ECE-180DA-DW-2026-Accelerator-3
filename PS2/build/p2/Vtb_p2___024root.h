// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p2.h for the primary calling header

#ifndef VERILATED_VTB_P2___024ROOT_H_
#define VERILATED_VTB_P2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_p2__DOT__clk_i;
    CData/*0:0*/ tb_p2__DOT__rst_ni;
    CData/*2:0*/ tb_p2__DOT__rs1_addr_i;
    CData/*2:0*/ tb_p2__DOT__rs2_addr_i;
    CData/*7:0*/ tb_p2__DOT__rs1_data_o;
    CData/*7:0*/ tb_p2__DOT__rs2_data_o;
    CData/*0:0*/ tb_p2__DOT__bypass_en_i;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa;
    CData/*7:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2;
    CData/*0:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we;
    CData/*0:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ tb_p2__DOT__wr_i;
    IData/*31:0*/ tb_p2__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_p2__DOT__model;
    VlUnpacked<CData/*7:0*/, 8> tb_p2__DOT__dut__DOT__regs_q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd311c736__0;
    VlTriggerScheduler __VtrigSched_hd311c7f3__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_p2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_p2___024root(Vtb_p2__Syms* symsp, const char* v__name);
    ~Vtb_p2___024root();
    VL_UNCOPYABLE(Vtb_p2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
