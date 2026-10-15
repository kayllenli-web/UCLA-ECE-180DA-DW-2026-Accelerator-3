// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1___024root.h"

VL_ATTR_COLD void Vtb_p1___024root___eval_initial__TOP(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__0(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__1(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__2(Vtb_p1___024root* vlSelf);

void Vtb_p1___024root___eval_initial(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial\n"); );
    // Body
    Vtb_p1___024root___eval_initial__TOP(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0 
        = vlSelf->tb_p1__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__0(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*3:0*/ tb_p1__DOT__shreg;
    tb_p1__DOT__shreg = 0;
    IData/*31:0*/ tb_p1__DOT____Vrepeat2;
    tb_p1__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_p1__DOT____Vrepeat4;
    tb_p1__DOT____Vrepeat4 = 0;
    SData/*12:0*/ tb_p1__DOT__unnamedblk1__DOT__pat;
    tb_p1__DOT__unnamedblk1__DOT__pat = 0;
    SData/*12:0*/ tb_p1__DOT__unnamedblk3__DOT__pat;
    tb_p1__DOT__unnamedblk3__DOT__pat = 0;
    CData/*3:0*/ tb_p1__DOT__unnamedblk5__DOT__pat;
    tb_p1__DOT__unnamedblk5__DOT__pat = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__0__b;
    __Vtask_tb_p1__DOT__stream__0__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__stream__0__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__1__b;
    __Vtask_tb_p1__DOT__send__1__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__1__expect_found;
    __Vtask_tb_p1__DOT__send__1__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__2__b;
    __Vtask_tb_p1__DOT__stream__2__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__stream__2__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__3__b;
    __Vtask_tb_p1__DOT__send__3__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__3__expect_found;
    __Vtask_tb_p1__DOT__send__3__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__4__b;
    __Vtask_tb_p1__DOT__stream__4__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__stream__4__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__5__b;
    __Vtask_tb_p1__DOT__send__5__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__5__expect_found;
    __Vtask_tb_p1__DOT__send__5__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__6__b;
    __Vtask_tb_p1__DOT__stream__6__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__6__exp;
    __Vtask_tb_p1__DOT__stream__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__7__b;
    __Vtask_tb_p1__DOT__send__7__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__7__expect_found;
    __Vtask_tb_p1__DOT__send__7__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__8__b;
    __Vtask_tb_p1__DOT__stream__8__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__8__exp;
    __Vtask_tb_p1__DOT__stream__8__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__9__b;
    __Vtask_tb_p1__DOT__send__9__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__9__expect_found;
    __Vtask_tb_p1__DOT__send__9__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__10__b;
    __Vtask_tb_p1__DOT__stream__10__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__10__exp;
    __Vtask_tb_p1__DOT__stream__10__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__11__b;
    __Vtask_tb_p1__DOT__send__11__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__11__expect_found;
    __Vtask_tb_p1__DOT__send__11__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__12__b;
    __Vtask_tb_p1__DOT__stream__12__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__12__exp;
    __Vtask_tb_p1__DOT__stream__12__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__13__b;
    __Vtask_tb_p1__DOT__send__13__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__13__expect_found;
    __Vtask_tb_p1__DOT__send__13__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__14__b;
    __Vtask_tb_p1__DOT__stream__14__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__14__exp;
    __Vtask_tb_p1__DOT__stream__14__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__15__b;
    __Vtask_tb_p1__DOT__send__15__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__15__expect_found;
    __Vtask_tb_p1__DOT__send__15__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__16__b;
    __Vtask_tb_p1__DOT__stream__16__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__16__exp;
    __Vtask_tb_p1__DOT__stream__16__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__17__b;
    __Vtask_tb_p1__DOT__send__17__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__17__expect_found;
    __Vtask_tb_p1__DOT__send__17__expect_found = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__18__b;
    __Vtask_tb_p1__DOT__stream__18__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__18__exp;
    __Vtask_tb_p1__DOT__stream__18__exp = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__19__b;
    __Vtask_tb_p1__DOT__send__19__b = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__19__expect_found;
    __Vtask_tb_p1__DOT__send__19__expect_found = 0;
    // Body
    vlSelf->tb_p1__DOT__rst_ni = 0U;
    vlSelf->tb_p1__DOT__bit_i = 0U;
    tb_p1__DOT__shreg = 0U;
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       52);
    vlSelf->tb_p1__DOT__rst_ni = 1U;
    if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q)))) {
        VL_WRITEF("  FAIL count_o not 0 after reset\n");
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    tb_p1__DOT__unnamedblk1__DOT__pat = 0x1b4dU;
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 0xcU));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 0xbU));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 0xaU));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 9U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 8U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 7U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 6U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 5U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 4U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 3U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 2U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                              >> 1U));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__0__b = (1U & (IData)(tb_p1__DOT__unnamedblk1__DOT__pat));
    __Vtask_tb_p1__DOT__stream__0__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__0__b));
    __Vtask_tb_p1__DOT__send__1__expect_found = __Vtask_tb_p1__DOT__stream__0__exp;
    __Vtask_tb_p1__DOT__send__1__b = __Vtask_tb_p1__DOT__stream__0__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__1__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__1__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__1__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__1__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__1__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    if (VL_UNLIKELY((3U != vlSelf->tb_p1__DOT__exp_count))) {
        VL_WRITEF("  INTERNAL: model expected 3 matches, got %0d\n",
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    tb_p1__DOT__unnamedblk3__DOT__pat = 0x1b6dU;
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 0xcU));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 0xbU));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 0xaU));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 9U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 8U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 7U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 6U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 5U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 4U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 3U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 2U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                              >> 1U));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__2__b = (1U & (IData)(tb_p1__DOT__unnamedblk3__DOT__pat));
    __Vtask_tb_p1__DOT__stream__2__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__2__b));
    __Vtask_tb_p1__DOT__send__3__expect_found = __Vtask_tb_p1__DOT__stream__2__exp;
    __Vtask_tb_p1__DOT__send__3__b = __Vtask_tb_p1__DOT__stream__2__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__3__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__3__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__3__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__3__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__3__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__4__b = 1U;
    __Vtask_tb_p1__DOT__stream__4__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__4__b));
    __Vtask_tb_p1__DOT__send__5__expect_found = __Vtask_tb_p1__DOT__stream__4__exp;
    __Vtask_tb_p1__DOT__send__5__b = __Vtask_tb_p1__DOT__stream__4__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__5__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__5__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__5__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__5__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__5__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__6__b = 0U;
    __Vtask_tb_p1__DOT__stream__6__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__6__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__6__b));
    __Vtask_tb_p1__DOT__send__7__expect_found = __Vtask_tb_p1__DOT__stream__6__exp;
    __Vtask_tb_p1__DOT__send__7__b = __Vtask_tb_p1__DOT__stream__6__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__7__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__7__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__7__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__7__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__7__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__8__b = 1U;
    __Vtask_tb_p1__DOT__stream__8__exp = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__8__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__8__b));
    __Vtask_tb_p1__DOT__send__9__expect_found = __Vtask_tb_p1__DOT__stream__8__exp;
    __Vtask_tb_p1__DOT__send__9__b = __Vtask_tb_p1__DOT__stream__8__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__9__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__9__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__9__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__9__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__9__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    tb_p1__DOT____Vrepeat2 = 0x190U;
    while (VL_LTS_III(32, 0U, tb_p1__DOT____Vrepeat2)) {
        __Vtask_tb_p1__DOT__stream__10__b = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        __Vtask_tb_p1__DOT__stream__10__exp = ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(tb_p1__DOT__shreg))) 
                                               & (IData)(__Vtask_tb_p1__DOT__stream__10__b));
        tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                      << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__10__b));
        __Vtask_tb_p1__DOT__send__11__expect_found 
            = __Vtask_tb_p1__DOT__stream__10__exp;
        __Vtask_tb_p1__DOT__send__11__b = __Vtask_tb_p1__DOT__stream__10__b;
        co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           21);
        vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__11__b;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           23);
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                         != (IData)(__Vtask_tb_p1__DOT__send__11__expect_found)))) {
            VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                      32,vlSelf->tb_p1__DOT__seen,1,
                      (IData)(__Vtask_tb_p1__DOT__send__11__b),
                      1,vlSelf->tb_p1__DOT__found_o,
                      1,(IData)(__Vtask_tb_p1__DOT__send__11__expect_found));
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           31);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           31);
        if (((IData)(__Vtask_tb_p1__DOT__send__11__expect_found) 
             & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
            vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                             + vlSelf->tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                         != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
            VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                      32,vlSelf->tb_p1__DOT__seen,8,
                      (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                      32,vlSelf->tb_p1__DOT__exp_count);
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
        tb_p1__DOT____Vrepeat2 = (tb_p1__DOT____Vrepeat2 
                                  - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       87);
    vlSelf->tb_p1__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       89);
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       89);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       90);
    if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q)))) {
        VL_WRITEF("  FAIL count_o=%0# after mid-stream reset, expected 0\n",
                  8,vlSelf->tb_p1__DOT__dut__DOT__count_q);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       95);
    vlSelf->tb_p1__DOT__rst_ni = 1U;
    tb_p1__DOT__shreg = 0U;
    vlSelf->tb_p1__DOT__exp_count = 0U;
    tb_p1__DOT__unnamedblk5__DOT__pat = 0xdU;
    __Vtask_tb_p1__DOT__stream__12__b = (1U & ((IData)(tb_p1__DOT__unnamedblk5__DOT__pat) 
                                               >> 3U));
    __Vtask_tb_p1__DOT__stream__12__exp = ((6U == (7U 
                                                   & (IData)(tb_p1__DOT__shreg))) 
                                           & (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    __Vtask_tb_p1__DOT__send__13__expect_found = __Vtask_tb_p1__DOT__stream__12__exp;
    __Vtask_tb_p1__DOT__send__13__b = __Vtask_tb_p1__DOT__stream__12__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__13__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__13__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__13__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__13__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__13__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__12__b = (1U & ((IData)(tb_p1__DOT__unnamedblk5__DOT__pat) 
                                               >> 2U));
    __Vtask_tb_p1__DOT__stream__12__exp = ((6U == (7U 
                                                   & (IData)(tb_p1__DOT__shreg))) 
                                           & (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    __Vtask_tb_p1__DOT__send__13__expect_found = __Vtask_tb_p1__DOT__stream__12__exp;
    __Vtask_tb_p1__DOT__send__13__b = __Vtask_tb_p1__DOT__stream__12__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__13__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__13__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__13__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__13__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__13__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__12__b = (1U & ((IData)(tb_p1__DOT__unnamedblk5__DOT__pat) 
                                               >> 1U));
    __Vtask_tb_p1__DOT__stream__12__exp = ((6U == (7U 
                                                   & (IData)(tb_p1__DOT__shreg))) 
                                           & (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    __Vtask_tb_p1__DOT__send__13__expect_found = __Vtask_tb_p1__DOT__stream__12__exp;
    __Vtask_tb_p1__DOT__send__13__b = __Vtask_tb_p1__DOT__stream__12__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__13__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__13__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__13__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__13__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__13__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__12__b = (1U & (IData)(tb_p1__DOT__unnamedblk5__DOT__pat));
    __Vtask_tb_p1__DOT__stream__12__exp = ((6U == (7U 
                                                   & (IData)(tb_p1__DOT__shreg))) 
                                           & (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                  << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__12__b));
    __Vtask_tb_p1__DOT__send__13__expect_found = __Vtask_tb_p1__DOT__stream__12__exp;
    __Vtask_tb_p1__DOT__send__13__b = __Vtask_tb_p1__DOT__stream__12__b;
    co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       21);
    vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__13__b;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       23);
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                     != (IData)(__Vtask_tb_p1__DOT__send__13__expect_found)))) {
        VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                  32,vlSelf->tb_p1__DOT__seen,1,(IData)(__Vtask_tb_p1__DOT__send__13__b),
                  1,vlSelf->tb_p1__DOT__found_o,1,(IData)(__Vtask_tb_p1__DOT__send__13__expect_found));
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_p1.clk_i)", 
                                                       "tb/tb_p1.sv", 
                                                       31);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_p1.sv", 
                                       31);
    if (((IData)(__Vtask_tb_p1__DOT__send__13__expect_found) 
         & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
        vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                         + vlSelf->tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                     != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
        VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                  32,vlSelf->tb_p1__DOT__seen,8,(IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                  32,vlSelf->tb_p1__DOT__exp_count);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
    if (VL_UNLIKELY((1U != (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q)))) {
        VL_WRITEF("  FAIL detector did not restart correctly after reset\n");
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    tb_p1__DOT____Vrepeat4 = 0x384U;
    while (VL_LTS_III(32, 0U, tb_p1__DOT____Vrepeat4)) {
        __Vtask_tb_p1__DOT__stream__14__b = 1U;
        __Vtask_tb_p1__DOT__stream__14__exp = ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(tb_p1__DOT__shreg))) 
                                               & (IData)(__Vtask_tb_p1__DOT__stream__14__b));
        tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                      << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__14__b));
        __Vtask_tb_p1__DOT__send__15__expect_found 
            = __Vtask_tb_p1__DOT__stream__14__exp;
        __Vtask_tb_p1__DOT__send__15__b = __Vtask_tb_p1__DOT__stream__14__b;
        co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           21);
        vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__15__b;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           23);
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                         != (IData)(__Vtask_tb_p1__DOT__send__15__expect_found)))) {
            VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                      32,vlSelf->tb_p1__DOT__seen,1,
                      (IData)(__Vtask_tb_p1__DOT__send__15__b),
                      1,vlSelf->tb_p1__DOT__found_o,
                      1,(IData)(__Vtask_tb_p1__DOT__send__15__expect_found));
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           31);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           31);
        if (((IData)(__Vtask_tb_p1__DOT__send__15__expect_found) 
             & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
            vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                             + vlSelf->tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                         != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
            VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                      32,vlSelf->tb_p1__DOT__seen,8,
                      (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                      32,vlSelf->tb_p1__DOT__exp_count);
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
        __Vtask_tb_p1__DOT__stream__16__b = 0U;
        __Vtask_tb_p1__DOT__stream__16__exp = ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(tb_p1__DOT__shreg))) 
                                               & (IData)(__Vtask_tb_p1__DOT__stream__16__b));
        tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                      << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__16__b));
        __Vtask_tb_p1__DOT__send__17__expect_found 
            = __Vtask_tb_p1__DOT__stream__16__exp;
        __Vtask_tb_p1__DOT__send__17__b = __Vtask_tb_p1__DOT__stream__16__b;
        co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           21);
        vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__17__b;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           23);
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                         != (IData)(__Vtask_tb_p1__DOT__send__17__expect_found)))) {
            VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                      32,vlSelf->tb_p1__DOT__seen,1,
                      (IData)(__Vtask_tb_p1__DOT__send__17__b),
                      1,vlSelf->tb_p1__DOT__found_o,
                      1,(IData)(__Vtask_tb_p1__DOT__send__17__expect_found));
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           31);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           31);
        if (((IData)(__Vtask_tb_p1__DOT__send__17__expect_found) 
             & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
            vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                             + vlSelf->tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                         != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
            VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                      32,vlSelf->tb_p1__DOT__seen,8,
                      (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                      32,vlSelf->tb_p1__DOT__exp_count);
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
        __Vtask_tb_p1__DOT__stream__18__b = 1U;
        __Vtask_tb_p1__DOT__stream__18__exp = ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(tb_p1__DOT__shreg))) 
                                               & (IData)(__Vtask_tb_p1__DOT__stream__18__b));
        tb_p1__DOT__shreg = ((0xeU & ((IData)(tb_p1__DOT__shreg) 
                                      << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__18__b));
        __Vtask_tb_p1__DOT__send__19__expect_found 
            = __Vtask_tb_p1__DOT__stream__18__exp;
        __Vtask_tb_p1__DOT__send__19__b = __Vtask_tb_p1__DOT__stream__18__b;
        co_await vlSelf->__VtrigSched_h30132cef__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           21);
        vlSelf->tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__19__b;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           23);
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__found_o) 
                         != (IData)(__Vtask_tb_p1__DOT__send__19__expect_found)))) {
            VL_WRITEF("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",
                      32,vlSelf->tb_p1__DOT__seen,1,
                      (IData)(__Vtask_tb_p1__DOT__send__19__b),
                      1,vlSelf->tb_p1__DOT__found_o,
                      1,(IData)(__Vtask_tb_p1__DOT__send__19__expect_found));
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h30132c22__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_p1.clk_i)", 
                                                           "tb/tb_p1.sv", 
                                                           31);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           31);
        if (((IData)(__Vtask_tb_p1__DOT__send__19__expect_found) 
             & VL_GTS_III(32, 0xffU, vlSelf->tb_p1__DOT__exp_count))) {
            vlSelf->tb_p1__DOT__exp_count = ((IData)(1U) 
                                             + vlSelf->tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q) 
                         != (0xffU & vlSelf->tb_p1__DOT__exp_count)))) {
            VL_WRITEF("  FAIL cycle %0d: count_o=%0# expected %0d\n",
                      32,vlSelf->tb_p1__DOT__seen,8,
                      (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q),
                      32,vlSelf->tb_p1__DOT__exp_count);
            vlSelf->tb_p1__DOT__errors = ((IData)(1U) 
                                          + vlSelf->tb_p1__DOT__errors);
        }
        vlSelf->tb_p1__DOT__seen = ((IData)(1U) + vlSelf->tb_p1__DOT__seen);
        tb_p1__DOT____Vrepeat4 = (tb_p1__DOT____Vrepeat4 
                                  - (IData)(1U));
    }
    if (VL_UNLIKELY((0xffU != (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q)))) {
        VL_WRITEF("  FAIL count_o=%0# after >255 matches, expected 255 (saturate, do not wrap)\n",
                  8,vlSelf->tb_p1__DOT__dut__DOT__count_q);
        vlSelf->tb_p1__DOT__errors = ((IData)(1U) + vlSelf->tb_p1__DOT__errors);
    }
    if ((0U == vlSelf->tb_p1__DOT__errors)) {
        VL_WRITEF("P1 PASS  (%0d cycles checked, counter saturates correctly)\n",
                  32,vlSelf->tb_p1__DOT__seen);
    } else {
        VL_WRITEF("P1 FAIL  (%0d errors)\n",32,vlSelf->tb_p1__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_p1.sv", 122, "");
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__2(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/tb_p1.sv", 
                                           9);
        vlSelf->tb_p1__DOT__clk_i = (1U & (~ (IData)(vlSelf->tb_p1__DOT__clk_i)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtb_p1__ConstPool__TABLE_h662b63e3_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_p1__ConstPool__TABLE_h5c72ea0e_0;

VL_INLINE_OPT void Vtb_p1___024root___act_comb__TOP__0(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->tb_p1__DOT__bit_i) 
                     << 2U) | (IData)(vlSelf->tb_p1__DOT__dut__DOT__state_q));
    vlSelf->tb_p1__DOT__dut__DOT__state_d = Vtb_p1__ConstPool__TABLE_h662b63e3_0
        [__Vtableidx1];
    vlSelf->tb_p1__DOT__found_o = Vtb_p1__ConstPool__TABLE_h5c72ea0e_0
        [__Vtableidx1];
}

void Vtb_p1___024root___eval_act(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__0(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_p1__DOT__rst_ni) {
        if (((IData)(vlSelf->tb_p1__DOT__found_o) & 
             (0xffU != (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q)))) {
            vlSelf->tb_p1__DOT__dut__DOT__count_q = 
                (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_p1__DOT__dut__DOT__count_q)));
        }
        vlSelf->tb_p1__DOT__dut__DOT__state_q = vlSelf->tb_p1__DOT__dut__DOT__state_d;
    } else {
        vlSelf->tb_p1__DOT__dut__DOT__count_q = 0U;
        vlSelf->tb_p1__DOT__dut__DOT__state_q = 0U;
    }
}

void Vtb_p1___024root___eval_nba(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_p1___024root___timing_resume(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h30132c22__0.resume("@(posedge tb_p1.clk_i)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h30132cef__0.resume("@(negedge tb_p1.clk_i)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_p1___024root___timing_commit(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h30132c22__0.commit("@(posedge tb_p1.clk_i)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h30132cef__0.commit("@(negedge tb_p1.clk_i)");
    }
}

void Vtb_p1___024root___eval_triggers__act(Vtb_p1___024root* vlSelf);

bool Vtb_p1___024root___eval_phase__act(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_p1___024root___eval_triggers__act(vlSelf);
    Vtb_p1___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_p1___024root___timing_resume(vlSelf);
        Vtb_p1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_p1___024root___eval_phase__nba(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_p1___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__nba(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__act(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p1___024root___eval(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_p1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_p1.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_p1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_p1.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_p1___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_p1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_p1___024root___eval_debug_assertions(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
