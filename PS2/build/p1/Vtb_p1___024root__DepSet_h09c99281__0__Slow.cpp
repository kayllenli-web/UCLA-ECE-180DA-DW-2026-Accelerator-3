// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1___024root.h"

VL_ATTR_COLD void Vtb_p1___024root___eval_static__TOP(Vtb_p1___024root* vlSelf);

VL_ATTR_COLD void Vtb_p1___024root___eval_static(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_static\n"); );
    // Body
    Vtb_p1___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_p1___024root___eval_static__TOP(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_p1__DOT__clk_i = 0U;
    vlSelf->tb_p1__DOT__errors = 0U;
    vlSelf->tb_p1__DOT__exp_count = 0U;
    vlSelf->tb_p1__DOT__seen = 0U;
}

VL_ATTR_COLD void Vtb_p1___024root___eval_final(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__stl(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_p1___024root___eval_phase__stl(Vtb_p1___024root* vlSelf);

VL_ATTR_COLD void Vtb_p1___024root___eval_settle(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_settle\n"); );
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
            Vtb_p1___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_p1.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_p1___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__stl(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_p1___024root___act_comb__TOP__0(Vtb_p1___024root* vlSelf);

VL_ATTR_COLD void Vtb_p1___024root___eval_stl(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_p1___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_p1___024root___eval_triggers__stl(Vtb_p1___024root* vlSelf);

VL_ATTR_COLD bool Vtb_p1___024root___eval_phase__stl(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_p1___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_p1___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__act(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_p1.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_p1.clk_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__nba(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_p1.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_p1.clk_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p1___024root___ctor_var_reset(Vtb_p1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_p1__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_p1__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_p1__DOT__bit_i = VL_RAND_RESET_I(1);
    vlSelf->tb_p1__DOT__found_o = VL_RAND_RESET_I(1);
    vlSelf->tb_p1__DOT__errors = 0;
    vlSelf->tb_p1__DOT__exp_count = 0;
    vlSelf->tb_p1__DOT__seen = 0;
    vlSelf->tb_p1__DOT__dut__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_p1__DOT__dut__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_p1__DOT__dut__DOT__count_q = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0 = VL_RAND_RESET_I(1);
}
